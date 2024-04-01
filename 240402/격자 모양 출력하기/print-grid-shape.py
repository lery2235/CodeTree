import sys 

arr = [[0 for i in range(10)]for i in range(10)]

n, m = map(int, input().split())

for i in range(m):
    r, c = map(int, input().split())
    arr[r-1][c-1] = r * c

for i in range(n):
    for j in range(n): 
        print(arr[i][j], end= ' ')
    print()