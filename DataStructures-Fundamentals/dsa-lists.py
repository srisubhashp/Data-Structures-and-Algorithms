#srisubhashp

#Lists
# The main functions of a list are. 
# 1. Finding the index and also restrict the search
# 2. Counting
# 3. Reversing a List
# 4. Sorting a List
# 5. Inserting at a specific position
# 6. Appending a value at the end
# 7. Copying a List. 
# 8. Creating a new list of consecutive values within a range
# Accessing/Traversing the list

shoppingList = ['Milk', 'Cheese','Donuts', 'Cheese','Butter']

#Reversing a list
shoppingList1=shoppingList[:] # We can only copy the list in this way.
shoppingList1.reverse(); #['Butter', 'Donuts', 'Cheese', 'Milk']
#another way is shoppingList2=shoppingList[::-1]
print(shoppingList1)

# Search for the index of a Value
print(shoppingList.index('Donuts')) #2
#We can also restrict the search by adding a start & a stop Value
print(shoppingList.index('Donuts', 0,3))

#Sorting a list
shoppingList1.sort(); #['Butter', 'Cheese', 'Donuts', 'Milk'
print(shoppingList1)

#Counting in a list
print(shoppingList.count('Cheese')) #2

#4 - We can instantly create a list of number within a range
print(list(range(1,100))) #[1,2,3,4... 99]
print(list(range(101)))

for i in range(len(shoppingList)):
    shoppingList[i] = shoppingList[i]+"+"
    print(shoppingList[i])
empty = []
for i in empty:
    print("I am empty")


# Update/Insert - List 
myList2=[1]+[0]*10
myList = [1,2,3,4,5,6,7]
print(myList2)
myList.insert(4,15)
print(myList)
print('\n')
myList.append(55)

newList = [11,12,13,14]

#Extending a List
myList.extend(newList)
print(myList)


#  Searching for an element in the List
myList =  [10,20,30,40,50,60,70,80,90]

def searchinList(list, value):
    for i in list:
        if i == value:
            return list.index(value)
    return 'The value does not exist in the list'

print(searchinList(myList, 100))


#  List operations / functions
total = 0 
count = 0
while (True):
    inp = input('Enter a number: ') 
    if inp == 'done': break
    value = float(inp)
    total = total + value
    count = count + 1 
    average = total / count
					
print('Average:', average)



numlist = list() 
while (True):
    inp = input('Enter a number: ') 
    if inp == 'done': break
    value = float(inp)
    numlist.append(value)
					
average = sum(numlist) / len(numlist) 
print('Average:', average)
