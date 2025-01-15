n, k = map(int, input().split())
coin=[]

for i in range(n):
    coin.append(int(input()))
coin.sort()

dp=[]

DP = [0] * (k + 1)
DP[0] = 1
for c in coin:
    for i in range(c, k + 1):
        DP[i] += DP[i - c]
print(DP[k])