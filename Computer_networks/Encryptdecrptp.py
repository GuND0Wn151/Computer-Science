a=input("Enter Data ")
print("1. Encrypt \n2. Decrypt")
val=int(input())
def code(a,val):
    
    if val==1:
        for i in a:
            print(chr(ord(i)+3),end='')
    else:
        for i in a:
            print(chr(ord(i)-3),end='')
code(a,val)
