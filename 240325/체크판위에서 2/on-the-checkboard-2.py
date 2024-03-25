import sys 

r, c = map(int, input().split())
count = 0
rect = [list(map(str, input().split()))for _ in range(r)]

for i in range(r):
    for j in range(c - 1):
        for k in range(i + 1, r - 1):
            for l in range(j + 1, c - 1):
                if(rect[i][j] != rect[0][0] and 
                    rect[k][l] != rect[i][j] and 
                    rect[k][l] != rect[r - 1][c - 1]):
                    count += 1
                else:
                    continue

print(count)