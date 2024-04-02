arr = list(map(int, input().split()))
res = [0] * len(arr)
for i in range(len(arr)):
    if arr[i] == 0:
        res[:i+1] = reversed(arr[:i])

for i in res:
    print(i, end =' ')