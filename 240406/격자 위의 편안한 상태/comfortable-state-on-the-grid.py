n, m = tuple(map(int, input().split()))

dx, dy = [0, 1, 0, -1], [1, 0, -1, 0]
board = [
    [0] * n 
    for _ in range(n)
]

def in_range(x, y):
    return 0 <= x and x < n and 0 <= y and y < n

def check_color(r, c):
    cnt = 0
    for i in range(4):
        nx = r + dx[i]
        ny = c + dy[i]
        if in_range(nx, ny) and board[nx][ny] == 1:
            cnt += 1

        return cnt

for i in range(m):
    r, c = tuple(map(int, input().split()))
    r -= 1
    c -= 1
    board[r][c] = 1
    
    if check_color(r, c) == 3:
        print(1)
    else:
        print(0)