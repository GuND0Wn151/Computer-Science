  
a=input("enter data: ")
flag=input("Enter startin delimiter ")
esc=input("Enter ending delimiter ")
print("the stuffed data: ",flag,end=" ")
for i in a:
    if i in [end,start]:
        print(esc,end=" ")
    print(i,end=" ")
print(flag)
