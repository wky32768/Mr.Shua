t=int(input())
while t!=0:
    t-=1
    n,x=map(int,input().split())
    for i in range((x//4)*4+1,x+1):
        if n%2!=0:
            n+=i
        else:
            n-=i
    print(n)