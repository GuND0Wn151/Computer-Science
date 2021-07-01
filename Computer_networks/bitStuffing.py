#bitstuffing
a=input("enter the data: ")
print("the stuffed data is: ")
oc=0
for i in a:
    print(i,end=" ")
    if (i=="1"):
        oc+=1
    else:
        oc=0
    if oc==5:
        print(0,end=" ")
        
        
