# from collections import defaultdict
# from typing import List
class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        row=[set() for _ in range(9)]
        col=[set() for _ in range(9)]
        empty_cell=[]
        boxes=[set() for _ in range(9)]
        for r in range(9):
            for c in range(9):
                val=board[r][c]
                if val!='.':
                    row[r].add(val)
                    col[c].add(val)
                    boxes[(r // 3) * 3 + (c // 3)].add(val)
                else:
                    empty_cell.append((r,c))
        def back_track(idx):
            if idx==len(empty_cell):
                return True
            r,c=empty_cell[idx]
            b=(r//3)*3+(c//3)
            for digit in "123456789":
                if digit not in row[r] and digit not in col[c] and digit not in boxes[b]:
                    board[r][c]=digit
                    row[r].add(digit)
                    col[c].add(digit)
                    boxes[b].add(digit)
                    if back_track(idx+1):
                        return True
                    board[r][c]="."
                    row[r].remove(digit)
                    col[c].remove(digit)
                    boxes[b].remove(digit)
            return False
        back_track(0)

                    



                    

        