n = list(map(int, input().split()))
hap = 0
cnt = 0

for i in range(len(n)):
    if n[i] >= 250:
        break
    hap += n[i]
    cnt += 1

avg = 0.0
avg = hap / cnt
print(hap, avg, end=' ')