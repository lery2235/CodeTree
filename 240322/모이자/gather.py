import sys 

INT_MAX = sys.maxsize

n = int(input())

def solution(n):
    arr = list(map(int, input().split()))
    min_dist = INT_MAX

    for i in range(n):
        sum_dist = 0
        for j in range(n):
            sum_dist += abs(j - i) * arr[j]
    
        min_dist = min(min_dist, sum_dist)

    return print(min_dist)


solution(n)