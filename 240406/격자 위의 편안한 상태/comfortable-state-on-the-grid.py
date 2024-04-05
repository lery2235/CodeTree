n, m = map(int, input().split())

dx, dy = [0, 0, -1, 1], [1, -1, 0, 0]
board = [[0] * (n + 1) for _ in range(n + 1)]

def check_color(r, c):
    cnt = 0
    for i in range(4):
        nx = r + dx[i]
        ny = c + dy[i]
        if 0 <= nx < n and 0 <= ny < n and board[nx][ny] == 1:
            cnt += 1
    if cnt >= 3:
        return 1
    else:
        return 0

for i in range(m):
    r, c = map(int, input().split())
    board[r-1][c-1] = 1
    print(check_color(r-1, c-1))