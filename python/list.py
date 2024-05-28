a=123456498489
lista=list(str(a))
for i in range(0,len(lista)):
    lista[i]=int(lista[i])
print(sorted(lista))
#built func
#len() all() any() sum() sorted()

listb=[10,20,30,40,50]
lista.append(10) #adds a value at the end
count=lista.count(9) #count of item 
lista.insert(3,2) #(index,item) insert item and shift exiting to right
lista.extend(listb) #adds list items at the end
lista.index(10) #index of item
lista.remove(9) #removes first instance of item
lista.sort() #sorts the list
lista.reverse() #reverse the list
pop_ele=lista.pop(10) #(index) removes and returns the element


lista.reverse()
print(lista)

