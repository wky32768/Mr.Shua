t=int(input())
for _ in range(t):
    x=input()
    n=len(x)
    even=0
    if (int(x[n-1])-48)%2==0:
        print("0")
    elif (int(x[0])-48)%2==0:
        print("1")
    else:
        tot=0
        for i in range(n):
            if (int(x[i])-48)%2==0:
                tot=1
        if tot==1:
            print("2")
        else:
            print("-1")
    