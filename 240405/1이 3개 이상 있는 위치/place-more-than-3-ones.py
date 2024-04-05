n = int(input())
board = [
         list(map(int, input().split())) 
         for _ in range(n)
         ]

dx = [0, 0, -1, 1]
dy = [1, -1, 0, 0]
cnt = 0

for i in range(n):
    for j in range(n):
        count = 0
        for k in range(4):
            nx = i + dx[k]
            ny = j + dy[k]
            if 0 <= nx < n and 0 <= ny < n and board[nx][ny] == 1:
                    count += 1
        if count >= 3:
            cnt+=1
print(cnt)