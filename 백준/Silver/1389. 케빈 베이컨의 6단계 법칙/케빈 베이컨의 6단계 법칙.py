import sys
input = sys.stdin.readline

# 인접 행렬 생성
n,m = map(int,input().split())
graph = [[float('inf')]*(n) for _ in range(n)]
for _ in range(m):
    a,b = map(int,input().split())
    a-=1;b-=1
    graph[a][b] = 1
    graph[b][a] = 1

# 플로이드-와샬 수행
for k in range(n):
    # 자기 자신과의 관계는 0
    graph[k][k] = 0
    for i in range(n):
        for j in range(n):
            graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j])

# 케빈 베이컨의 수가 가장 적은 사람 출력
minn = float('inf')
ans = 0
for i in range(n):
    tmp = sum(graph[i])
    if minn > tmp:
        minn = tmp
        ans = i
print(ans+1)