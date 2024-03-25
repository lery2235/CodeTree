import sys 

res = 0
binary_number = sys.stdin.readline().strip()
binary_number = [int(char) for char in binary_number]

for i in range(len(binary_number)):
    if binary_number[i] != 1:
        binary_number[i] = 1
        break
    else:
        continue

for i in binary_number:
    res = res * 2 + i

print(res)