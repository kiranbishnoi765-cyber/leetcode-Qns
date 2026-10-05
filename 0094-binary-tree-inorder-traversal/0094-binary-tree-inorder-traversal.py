# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode | None) -> list[int]:
        st=[]
        def num(node):
            
            if node is None:
                return
            
            
            left_node=num(node.left)
            st.append(node.val)
            right_node=num(node.right)
            
            

        num(root)
            
       
        return st

        