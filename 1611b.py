t=int(input())
for _ in range(t):
    a,b=map(int, input().split())
    ans=0
    if a>b:
        c=b
        b=a
        a=c
    temp=min(a, (b-a)//2)
    ans+=temp
    a-=temp
    b-=temp*3
    ans+=a//2
    print(ans)
    