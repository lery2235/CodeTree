score = list(map(float, input().split()))
res = 0

res = sum(score) / len(score)

print("{:.1f}".format(res))