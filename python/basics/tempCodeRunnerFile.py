def finddup(input_str):
    char_count={}
    duplicates=[]
    for char in input_str:
        if char in char_count:
            char_count[char]=1
    for char,count in char_count.items():
        if count>1:
            duplicates.append(char)
    return duplicates

input_str=input("enter a string :")
result=finddup(input_str)
print("Dulicate Chracters", result)
