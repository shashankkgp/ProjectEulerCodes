x=input()
for i in range(1,x+1):
    count=0
    for x in range(1,i+1):
        if (x**3)%i==1:
            count=count+1
    print str(i)+' '+str(count)
