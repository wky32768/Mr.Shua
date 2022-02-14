t=int(input())
for _ in range(t):
    n=int(input())
    arr=input()
    num=[int(n) for n in arr.split()]
    num.sort()
    # print(num)
    cnt=0 #f的长度
    tot=[0]*(n+5)
    q=[0]*(n+5)
    for i in range(n):
        tot[num[i]]+=1
    ans=0
    for i in range(n+1):
        print(max(ans+tot[i], -1), end=' ')
        for j in range(tot[i]):
            cnt+=1
            q[cnt]=i
        if cnt>=1:
            ans+=(i-q[cnt])
            cnt-=1
        else:
            ans=-1000000000000000
    print("")
    