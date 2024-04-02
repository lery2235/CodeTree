n = int(input())
score = list(map(float, input().split()))

hap = 0
avg = 0.0

for i in range(n):
    hap = sum(score[0:])

avg = hap / n

if avg >= 4.0:
    print("{:.1f}".format(avg))
    print("Perfect")
elif avg >= 3.0:
    print("{:.1f}".format(avg))
    print("Good")
elif avg < 3.0:
    print("{:.1f}".format(avg))
    print("Poor")