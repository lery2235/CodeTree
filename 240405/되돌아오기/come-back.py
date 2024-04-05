n = int(input())
board = [[0 for i in range(n)] for _ in range(n)]

dx, dy = [-1, 0 , 0 ,1], [0,-1, 1, 0]
mapper = {'W' : 0, 'S' : 1, 'N' : 2, 'E' : 3 }

elapsed_time = 0
x, y = 0, 0
ans = -1 

for i in range(n):
    direction, distance = map(str, input().split())
    dir_num = mapper[direction]
    distance = int(distance)

    for j in range(1, distance + 1):
        nx, ny = x + dx[dir_num], y + dy[dir_num]
        elapsed_time += 1
        x, y = nx, ny
        if x == 0 and y == 0 and elapsed_time > 0:
            ans = elapsed_time
            print(ans)
            break
    if x == 0 and y == 0 and elapsed_time > 0:
        break
    dir_num = (dir_num + 1) % 4
else:
    print(-1)