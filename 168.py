from sets import Set
s=Set([])
sum=0
for k in range(1,10):
    for n in range(100):
        for u in range(1,10):
            if((((10**n)-k)*u)%(10*k-1)==0):
                d=(((10**n)-k)*u)/(10*k-1)
                if((d>=(10**(n-1))) and (d<(10**n))):
                    s.add(10*d+u)
for elem in s:
    sum=sum+elem
print(sum%100000)
x=input()
if x in s:
    print("Shashank")
else:
    print("Nahi")
