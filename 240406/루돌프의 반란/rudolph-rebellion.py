import sys 
import math
INT_MIN = sys.maxsize
sys.stdin = open("루돌프의반란.txt", "rt")

min_dis = INT_MIN
# n : 게임판의 크기 / m: 게임 턴 수, p : 산타의 수, c : 루돌프의 힘 d : 산타의 힘 pn :산타의 번호 r : 루돌프의 위치 s : 산타의 위치


dx, dy = [1, -1, 0, 0, -1, 1, 1, 1], [0, 0, -1, 1, -1, 1, -1, 1]
# 아래로 갈수록 r이 증가 x가 + 1 이면 아래 1, 0 아래 
# 오른쪽으로 갈수록 c가 증가 


def r_move(r, c, location):
    # 0 가장 가까운 산타?
    for i in range(p):
        min_dis = min(min_dis, distance(r, c, location[i], location[i][i+1])) 
    
    r, c = r + dx[min_dis], c + dy[min_dis] 
    # 2. 1번 산타부터 P번 산타까지 순서대로 
    # 3. 기절하거나 격자 밖으로 빠져나가 게임에서 탈락한 산타는 움직일 수 없다.

#산타의 움직임


def distance(x1, y1, x2, y2):
    return math.sqrt(x1 - x2) + math.sqrt(y1 - y2)


n, m, p, c, d = map(int, input().split()) 
r, c = tuple(map(int, input().split()))

board =[[0] * (n + 3) for _ in range(1, n + 3)]
score = 0
stan = False
location = []

board[r][c] = 'R'
for i in range(p):
    sn, sx, sy = map(int, input().split())
    location.append((sx, sy))
    board[sx][sy] = sn 

for i in range(m):
    r_move(r, c, location)
   # s_move(arr[i], arr[i + 1])

for i in range(n+2):
    for j in range(n+2):
        print(board[i][j], end=' ')
    print()