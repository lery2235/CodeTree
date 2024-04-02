arr = list(map(int, input().split()))
res = [0] * len(arr)
for i in range(len(arr)):
    if 0 in arr:
        if arr[i] == 0:
            res[:len(res)] = reversed(arr[:-1])
            break
        else:
            continue    
    else:
        res[:len(res)] = arr[::-1]
        break

print(*res[:len(res)])