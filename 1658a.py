t=int(input())
for _ in range(t):
    n=int(input())
    st=input()
    ans=0
    cnt=0
    a=[[0] for i in range(1005)]
    for i in range(n):
        if st[i]=='0':
            cnt+=1
            a[cnt]=i
            # print("i="+str(i))
    for i in range(1, cnt):
        if a[i+1]-a[i]<=3:
            ans+=(3-(a[i+1]-a[i]))
    print(ans)
