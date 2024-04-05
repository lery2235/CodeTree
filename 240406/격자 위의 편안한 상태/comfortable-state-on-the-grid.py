n, m = tuple(map(int, input().split()))

dxs, dys = [0, 1, 0, -1], [1, 0, -1, 0]
board = [
    [0] * n 
    for _ in range(n)
]

def in_range(x, y):
    return 0 <= x and x < n and 0 <= y and y < n

def adjacent_cnt(x, y):
    cnt = 0
    for dx, dy in zip(dxs, dys):
        nx, ny = x + dx, y + dy
        if in_range(nx, ny) and board[nx][ny] == 1:
            cnt += 1
    
    return cnt

for i in range(m):
    x, y = tuple(map(int, input().split()))
    x -= 1
    y -= 1
    board[x][y] = 1

    if adjacent_cnt(x, y) == 3:
        print(1)
    else:
        print(0)