arr = list(map(int, input().split()))
res = [0] * len(arr)
for i in range(len(arr)):
    if arr[i] == 0:
        res[:i+1] = reversed(arr[:i])
    else:
        res[0:i+1] = reversed(arr[0:i+1])

for i in res:
    print(i, end =' ')