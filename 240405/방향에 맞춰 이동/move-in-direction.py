n = int(input())
dx = [1, -1, 0, 0]
dy = [0, 0, -1, 1]
x, y = 0, 0

for i in range(n):
    m, dist = tuple(input().split())
    dist = int(dist)

    if m == 'E':
        move_dir = 0
    elif m == 'W':
        move_dir = 1
    elif m == 'S':
        move_dir = 2
    else:
        move_dir = 3
    
    x += dx[move_dir] * dist
    y += dy[move_dir] * dist

print(x, y)