n = list(map(int, input().split()))

sum_num = 0
avg = 0.0
cnt = 0

for i in range(len(n)):
    if n[i] == 0:
        break
    else:
        cnt += 1

for i in range(cnt-1, -1, -1):
    sum_num += n[i]

avg = sum_num / cnt

print(sum_num, "{:.1f}".format(avg))