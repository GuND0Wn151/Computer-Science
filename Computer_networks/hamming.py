a=input("Enter the data: ")
r=0
l=[]
while (len(a)+r+1>2**r):
    r+=1
ff=0
for i in range(len(a)+r-1,-1,-1):
    if bin(i+1).count('1')==1:
        l.append("x")
    else:
        l.append(a[ff])
        ff+=1
for i in range(len(l)):
    f='t'
    if l[i]=='x':
        t=len(bin(len(l)-i)[2:])-bin(len(l)-i)[2:].index('1')-1
        for j in range(len(l)):
            if l[j]!='x' and len(bin(len(l)-j)[2:])>t and bin(len(l)-j)[2:][-t-1]=='1':
                if(f=='t'):
                    f=int(l[j])
                else:
                    f^=int(l[j])
        l[i]=str(f)
print(''.join(l))
