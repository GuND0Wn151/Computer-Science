  
a=input("enter data: ")
flag=input("Enter startin delimiter ")
esc=input("Enter ending delimiter ")
print("the stuffed data: ",flag,end=" ")
for i in a:
    if i in [esc,start]:
        print(i,end=" ")
    print(i,end=" ")
print(flag)
