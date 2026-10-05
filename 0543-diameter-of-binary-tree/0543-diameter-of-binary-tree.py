# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        max_diameter=0
       
        def height(i):
            nonlocal max_diameter
            if i is None:
                return 0
            left_h=height(i.left)
            right_h=height(i.right)
            max_diameter=max(max_diameter,left_h+right_h)
            return 1+ max(left_h,right_h)
        if root is None:
            return 0
        height(root)
        return max_diameter
        

        

        