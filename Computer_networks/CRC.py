frame=input("Enter the Frame: ")
gen=input("Enter the generator polynomial: ")
frame1=frame+'0'*(len(gen)-1)
t=int(gen,2)

def xor(frame):
        st=''
        for i in frame:
            st+=i
            if len(st)>=len(gen):
                x=int(st,2)
                st=bin(x^t)[2:]
            if st=='0':
                st=''
        return st

print("The Crc is ",xor(frame1).lstrip("0"),
      '\nThe Frame tranmisted is: ',frame+xor(frame1).lstrip("0"))




de=input("Enter the recived data: ")
val=xor(de)

if val=="":
    print("NO error")
else:
    print("Error Remainder is ",val)
