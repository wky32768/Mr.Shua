t=int(input())
while t!=0:
    t=t-1
    a=[eval(x) for x in input().split()]
    if a[0]+a[1]==a[2]:
        for i in range(0,4):
            if(i!=2):
                print(str(a[i])+' ',end="")
    else:
        for i in range(0,3):
            print(str(a[i])+' ',end="")
    print("")
