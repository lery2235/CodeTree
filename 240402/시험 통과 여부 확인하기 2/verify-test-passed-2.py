T = int(input())
avg = 0.0
cnt = 0

for i in range(T):
    score = list(map(int, input().split()))
    avg = sum(score) // len(score)
    if avg >= 60:
        print("pass")
        cnt += 1
    else:
        print("fail")

print(cnt)