class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        board=[["."]*n for _ in range(n)]
        ans=[]
        def isSafe(board,row,col,n):
            for j in range(n):
                if board[row][j]=='Q':
                    return False
            for i in range(n):
                if board[i][col]=='Q':
                    return False
            i,j=row-1,col-1
            while(i>=0 and j>=0):
                if board[i][j]=='Q':
                    return False
                i-=1
                j-=1
            i,j= row-1,col+1
            while j<n and i>=0:
                if board[i][j]=='Q':
                    return False
                i-=1
                j+=1
            return True

            

        def nqueens(board,row,n,ans):
            if row == n:
                ans.append([''.join(r) for r in board]) 
                return
            for col in range(n):
                if isSafe(board, row, col, n):
                    board[row][col] = 'Q'
                    nqueens(board, row + 1, n, ans)
                    board[row][col] = '.'
        nqueens(board, 0, n, ans)
        return ans     

