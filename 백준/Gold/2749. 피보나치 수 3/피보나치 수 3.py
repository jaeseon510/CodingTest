mod = 1000000

p = mod//10*15
num = int(input())
dp = [0,1]
for i in range(2,p):
    dp.append(dp[i-1]+dp[i-2])
    dp[i] = dp[i]%mod
print(dp[num%p]) 