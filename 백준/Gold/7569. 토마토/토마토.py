from collections import deque
import sys
input = sys.stdin.readline

#입력
M, N, H = map(int, input().split()) #가로, 세로, 높이
tomato = []
queue = deque()
for z in range(H):
    floor = []
    for i in range(N):
        floor.append(list(map(int, input().split())))
        for j in range(M):
            # 잘 익은 토마토의 위치를 Queue에 입력
            if floor[i][j] == 1:
                queue.append((z, i, j))
    tomato.append(floor)

#BFS 탐색
day = 0 #토마토가 다 익는 데 걸리는 시간
direction = [[1, 0, 0], [-1, 0, 0], [0, 0, 1], [0, 0, -1], [0, 1, 0], [0, -1, 0]] #위아래, 상하좌우 이동
while queue:
    z, x, y = queue.popleft() #큐에서 토마토 위치 꺼냄
    #토마토 주위 상하좌우 탐색
    for dz, dx, dy in direction:
        nz, nx, ny = z + dz, x + dx, y + dy
        #범위를 안 벗어나면서, 안 익은 토마토를 발견할 때
        if 0 <= nz < H and 0 <= nx < N and 0 <= ny < M and tomato[nz][nx][ny] == 0:
            queue.append((nz, nx, ny)) #익을 토마토
            tomato[nz][nx][ny] = tomato[z][x][y]+1

day = 0
def isRipe():
    global day
    for z in tomato:
        for i in z:
            for j in i:
                #안 익은 토마토 발견
                if j == 0:
                    return False
            day = max(day, max(i))
    #안 익은 토마토가 없을 시, 다 익음
    return True

if isRipe():
    print(day-1)
else:
    print(-1)