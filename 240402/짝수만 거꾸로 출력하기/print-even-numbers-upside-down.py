n = int(input())
n_list = list(map(int, input().split()))
res = []

for i in range(len(n_list)):
    if n_list[i] % 2 == 0:
        res.append(n_list[i])

print(''.join(map(str, reversed(res))))