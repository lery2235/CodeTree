arr = list(map(int, input().split()))
res = [0] * len(arr)

for i in range(len(arr)):
    if 0 in arr:
        if arr[i] == 0:
            res[0:i] = reversed(arr[0:i])
            print(*res[:i])
            break
        else:
            continue    
    else:
        res[:len(res)] = arr[::-1]
        print(*res[:len(res)])
        break