zero=[1,0,1]
one=[0,1,1]
for i in range(2,40):
            zero.append(zero[i-1]+zero[i])
            one.append(one[i-1]+one[i])



n=int(input())

for p in range(n):
    k=int(input())
    print(zero[k],one[k])