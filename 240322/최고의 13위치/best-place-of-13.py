import sys 

n = int(input())
board = [list(map(int, input().split()))for _ in range(n)]

max_cnt = 0

for i in range(n):
    for j in range(n - 1):
        max_cnt = max(max_cnt, board[i][j] + board[i][j + 1] + board[i][j - 1])


print(max_cnt)