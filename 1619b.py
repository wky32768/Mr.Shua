t=int(input())
while t!=0:
    t-=1
    n=int(input())
    ans=0
    i=1
    while i*i<=n:
        i+=1
    j=1
    while j*j*j<=n:
        j+=1
    k=1
    while k*k*k*k*k*k<=n:
        k+=1
    ans=(i-1)+(j-1)-(k-1)
    print(ans)