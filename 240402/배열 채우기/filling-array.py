arr = list(map(int, input().split()))
res = [0] * len(arr)
for i in range(len(arr)):
    if arr[i] == 0:
        res[0:i] = reversed(arr[0:i])
        break
    else:
        continue
else:
    res[:i+1] = arr[::-1]

print(*res[0:i])