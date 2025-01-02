#include<stdio.h>
#define MAX 1001
int graph[MAX][MAX] = { 0 }; //그래프의 인접 행렬
int DFS_V[MAX] = { 0 }; //방문한(출력한) 정점 표시 
int BFS_V[MAX] = { 0 }; //방문한(출력한) 정점 표시
int que[MAX] = { 0 }; //너비 우선 탐색에 사용될 큐
void dfs(int V, int N);
void bfs(int V, int N);
int main(void)
{
	int N, M, V, i, j;
	scanf("%d %d %d", &N, &M, &V);
	while (M--) {
		scanf("%d %d", &i, &j);
		graph[i][j] = 1; 
		graph[j][i] = 1;
	}
	dfs(V, N);
	printf("\n");
	bfs(V, N);
			return 0;
}
void dfs(int V, int N) //깊이 우선 탐색
{
	int W; 
	printf("%d ", V);
	DFS_V[V] = 1;
	for (W = 1; W <= N; W++) {
		if (graph[V][W] == 1 && DFS_V[W] == 0)
			dfs(W, N);
	}
}
void bfs(int V, int N) //너비 우선 탐색
{
	int W;
	int front, rear, pop;
	front = rear = 0;
	printf("%d ", V);
	BFS_V[V] = 1;
	que[rear++] = V; 
	while (front < rear) {
		pop = que[front++]; 
		for (W = 1; W <= N; W++) {
			if (graph[pop][W] == 1 && BFS_V[W] == 0) {
				printf("%d ", W);
				BFS_V[W] = 1;
				que[rear++] = W;
			}
		}
	}
}