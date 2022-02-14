t=int(input())
while t!=0:
    t-=1
    ch=input()
    n=len(ch)
    if n%2==1:
        print("No")
    else:
        ch1=ch[0:n//2]
        ch2=ch[n//2:]
        # print('debug'+ch1)
        # print('debug'+ch2)
        if ch1==ch2:
            print("Yes")
        else:
            print("No")