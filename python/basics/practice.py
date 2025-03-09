# Write a Python Program to accept a paragraph and calculate the number of digits, number of letters in uppercase and lowercase. [Using Dictionary and String Function]
# paragraph=""
# dct1={"digits":0,"uppercase latters":0,"lowercase latters":0}
# print("Enter the paragraph and to stop use '.'")
# while True:
#     line=input('>')
#     if line==".":
#         break
#     paragraph+=line+'\n'
# print(paragraph)
# cd,cuc,clc=0,0,0
# for i in paragraph:
#     if i.isdigit():
#         cd+=1
#     elif i.isupper():
#         cuc+=1
#     elif i.islower():
#         clc+=1
# dct1["digits"],dct1["uppercase latters"],dct1["lowercase latters"]=cd,cuc,clc
# print(dct1)

# Problem Statement(s):
# Write a Python program to
#     1. Create a dictionary with ten Movie Name (as Key) and [Movie released year, Actor Name] as Values [as a List] dynamically by getting the data from the user. 
#     2. Get the names of the movie (atleast 2 movie names at a time separated by space) as input from the user and return the movie released year as the list1 and actor names in another list2.
# (Eg. input:  Jailer Leo Jawan, output: List1: [2023, 2023, 2023] List2: [`Rajinikanth’, `Vijay’, `Shah Rukh Khan’])

# dct2={}
# movie=""
# my=0
# man=""
# for i in range (0,3):
#     movie=input('moviename')
#     my=int(input('year'))
#     man=input('actor')
#     dct2[movie]={"year":my,"actor":man}
# print(dct2)
# movie=input("movie name").split()
# list1,list2=[],[]
# for i in movie:
#     for j,k in dct2[i].items():
#         list1.append(j)
#         list2.append(k)
#     print(list1,'\n',list2)

# def a(input_string):
#     return any(char.isalpha() for char in input_string) and any(char.isdigit() for char in input_string)
# input_string=input("Enter a string :")
# if a(input_string):
#     print("the string contains at least one letter and one number")
# else:
#     prnnt("the string does nto contain at least one letter and one number")

# def palindrome(input_string):
#     input_string.lower().replace("","")
#     return input_string == input_string[::-1]
# input_string=input("Enter a string :")
# if palindrome(input_string):
#     print("the string is a palindrome")
# else:
#     print("the string is not a palindrome")
# str1="AbcDef123"
# print(str1.lower())
# print(str1.replace("",""))
# print(str1.lower().replace("",""))

# def reversed_words(str1):
#     words=str1.split()
#     reversed_str1=' '.join(reversed(words))
#     return reversed_str1
# str1=input('string')
# reversed_result=reversed_words(str1)
# print("revesed word :",reversed_result)

# def remove_duplicates(str1):
#     result=""
#     for char in str1:
#         if char not in result:
#             result+=char
#     return result
# str1=input('string')
# result=remove_duplicates(str1)
# print("string with duplicates removed :",result)

# def find_duplicates(str1):
#   str1 = str1.lower()
#   duplicates = {}
#   for char in str1:
#     if char in duplicates:
#       duplicates[char] += 1
#     else:
#       duplicates[char] = 1
#   return duplicates

# def main():
#   str1 = input('string')
#   duplicates = find_duplicates(str1)
#   for key, value in duplicates.items():
#     if value > 1:
#       print(key, value)

# if __name__ == '__main__':
#   main()

# def mirror_str(str1):
#     mirrored_str=str1[::-1]
#     return mirrored_str
# str1=input("Ener a string")
# result=mirror_str(str1)
# print(result)
# str1=input("string")
# mstr=str1[::-1]
# print(mstr)

# def bstr2(bstr1):
#     try:
#         decimal_value=int(bstr1,2)
#         result_string=chr(decimal_value)
#         return result_string
#     except ValueError:
#         return"Invalid Binary input"
# bstr1="01001000"
# result=bstr2(bstr1)
# print(result)

# original_str=input("enter a string")
# char_map={'h':'j','a':'c','r':'t','i':'k','n':'p'}
# modified_str=''.join([char_map.get(char,char) for char in original_str])
# print("Modified String :",modified_str)

# my_set=set()
# while True:
#     ui=input("enter an element (or 'quit' to exit) :")
#     if ui=='quit':
#         break
#     if ui in my_set:
#         print("False")
#     else:
#         my_set.add(ui)
#         print("Element added to the set")

# ui=input("Enter number as words")
# w2n={'one':'1','two':'2','three':'3','four':'4','five':'5','six':'6','seven':'7','eight':'8','nine':'9','zero':'0'}
# words=ui.split()
# num=[w2n.get(word,word) for word in words ]
# result=''.join(num)
# print(f"The numbers are:{result}")

# [3, 1, 2]
# [2, 3, 1]
# [1, 2, 3]
# n=3
# list1=[]
# for i in range(1,n+1):
#     list1.append(i)
# for i in range(3):
#     templ=[]
#     templ.append(list1[-1])
#     for j in range(len(list1)-1):
#         templ.append(list1[j])
#     list1=templ
#     print(list1)

# enter the valur of N :3
# Enter the element1
# Enter the element2
# Enter the element3
# -1
# n=int(input("enter the valur of N :"))
# list1=[]
# list2=[]
# for i in range(n):
#     j=int(input("Enter the element"))
#     list1.append(j)
# for i in list1:
#     if list1.count(i)>1:
#         list2.append(i)
# list2=list(set(list2))
# if len(list2)==0:
#     print(-1)
# else:
#     print(list2)


def fact(a):
    e=a
    c=1
    while a>=1:
        c*=a
        a-=1
    print(f"the fatorial of {e} is {c}")
    return c

def inputt():
    e=int(input("Enter the number for factorial :"))
    fact(e)
if __name__=="__main__":
    inputt()