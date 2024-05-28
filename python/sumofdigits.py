num=int(input("Enter the number : "))
l=len(str(num))
sum1=0
i=0
# while l!=0:
#     i=num%10
#     num=int(num/10)
#     sum1+=i
#     l-=1


for j in range(1,l+1):
    i=num%10
    num=int(num/10)
    sum1+=i

# while num!=0:
#     i=num%10
#     num=int(num/10)
#     sum1+=i

print(f"Sum of the digits = {sum1}")
