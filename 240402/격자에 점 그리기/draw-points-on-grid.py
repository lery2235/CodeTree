board = [[0 for _ in range(10)] for _ in range(10)]

n, m = map(int, input().split())

for i in range(1, m+1):
    r, c = map(int, input().split())
    board[r][c] = i

for i in range(1, n+1):
    for j in range(1, n+1):
        print(board[i][j], end = ' ')
    print()