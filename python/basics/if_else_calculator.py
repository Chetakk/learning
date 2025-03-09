a,b=int(input("Enter the first number : ")),int(input("Enter the second number : "))
opr=input("Enter the Arithmetic Opertor :")
if(opr=='+'):
    print(a,"+",b,"=",a+b)
elif(opr=='-'):
    print(a,"-",b,"=",a-b)
elif(opr=='*'):
    print(a,"X",b,"=",a*b)
elif(opr=='/'):
    print(a,"/",b,"Quotient =",a/b,"reminder =",a%b)
