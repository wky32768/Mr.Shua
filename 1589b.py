t=int(input())
while t!=0:
    t-=1
    n,m=map(int,input().split())
    #if(n%3!=1 or m%3!=1):
    #    print(n*m-n%3-m%3+(n%3)*(m%3)//2)
    #else:
    #    print()
    ans=(n*m-(n%3)*(m%3))//3+(n%3)*(m%3)//2
    if(n%3==1 and m%3==1):
        ans+=1
    print(ans)