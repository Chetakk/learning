from collections import OrderedDict
n=int(input())
dict1=OrderedDict()
templ=[]
sum1=0
for j in range(n):
    item,*price=input().split()
    for i in price:
        price=int(i)
    if item in dict1:
        price+=dict1[item]
    dict1[item]=price
print(dict1)
    
for i,j in dict1.items():
    print(i,j)
