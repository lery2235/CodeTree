n = list(map(int, input().split()))
hap = 0 

for i in range(len(n)):
    if i == 2 or i == 4 or i == 9:
        hap += n[i]
print(hap)