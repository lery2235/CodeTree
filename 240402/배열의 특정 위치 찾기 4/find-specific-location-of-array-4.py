num = list(map(int, input().split()))

hap = 0
cnt = 0

for i in range(len(num)):
    if num[i] == 0:
        break
    elif num[i] % 2 == 0:
        hap += num[i]
        cnt += 1

print(cnt, hap, end =' ')