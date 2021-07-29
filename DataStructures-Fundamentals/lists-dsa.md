# lists-dsa

- Python offers a range of compound data types often referred to as sequences. List is one of the most frequently used and very versatile data types used in Python.

### The main functions of a list are:

1. Finding the index and also restricting the search.
2. Counting an element
3. Reversing a List
4. Sorting a List
5. Inserting at a specific position
6. Appending  value at the end
7. Copying a List
8. Creating a new list of consecutive values within a range
9. Accessing / Traversing a List
10. Slicing a list
11. List Comprehension. 

---

## Python List methods:

1. **append**() - Add an element to the end of a list
2. **extend() -**  Add all elements of a list to another list
3. **insert() -**  Insert an item at the defined index
4. **remove() -** Removes an item from the list
5. **pop(index) -** Removes and returns an element at the given index. When a negative index is passed in it pops from the last element onwards. 
6. **clear() -** Removes all items from the list
7. **index(element) -** Returns the index of the first matched item
8. **count( element) -  R**eturns the count of the number of items passed as an argument. We can also count the occurrences of a small list or a tuple inside the main list.         
9. **sort() -** Sort items in a list in ascending order
10. **reverse() -** Reverses the order of items in the list. This function reverses the list in place. 
11. **copy() -** Returns a shallow copy of the list

---

```python
shoppingList = ['Milk', 'Cheese','Donuts', 'Cheese','Butter']

#1. Finding Index
return shoppingList.index('Milk') # 0
#1.2 Negative indexing
return shoppingList[-1] # Butter

#2 Counting an Element
return shoppingList.count('Cheese') #2

#3. 
shoppingList.insert(4,'Fries') # ['Milk', 'Cheese','Donuts', 'Cheese','Fries','Butter']

#4. Append() - 
shoppongList.append('Paneer')
 # ['Milk', 'Cheese','Donuts', 'Cheese','Fries','Butter','Paneer']

#5; Poping values 
# programming languages list
languages = ['Python', 'Java', 'C++', 'Ruby', 'C']
print('Return Value:', languages.pop(-1))# Return Value: Ruby

#6. Reverses the list in place. 
shoppingList.reverse() 
#For accesing element in a reversed order its better to use the REVERSED()  function
for a in reversed(shoppingList):
	print(a)
#7. Sort function
shoppingList.sort()
shoppingList.sort(reverse=True)# sorts in the descending order.

#8. Copying a list. 
newList=shoppingList.copy()
newList2=shoppingList[:] # copying through slicing

#9. Using Reversed() for loop
for num in reversed(range(N + 1)) :
    print (num, end = " ")

#10. Another method of reversing a list
# using reversed() to perform the back iteration
for num in range(N, -1, -1) :
    print (num, end = " ")

```
