# srisubhashp

# With a binary tree, we can perform the following operations: 
# 1. preOrderTraversal
# 2. inOrderTraversal
# 3. LevelOrderTraversal
# 4. PostOrderTraversal
# 5. Searching for a Node
# 6. Deleting a node

class TreeNode:
    def __init__(self, data):
        self.data = data
        self.leftChild = None
        self.rightChild = None

def preOrderTraversal(rootNode):
    if not rootNode:
        return
    print(rootNode.data)
    preOrderTraversal(rootNode.leftChild)
    preOrderTraversal(rootNode.rightChild)

def inOrderTraversal(rootNode):
    if not rootNode:
        return
    inOrderTraversal(rootNode.leftChild)
    print(rootNode.data, end = "")
    inOrderTraversal(rootNode.rightChild)

def postOrderTraversal(rootNode):
    
    if not rootNode:
        return
    postOrderTraversal(rootNode.leftChild)
    postOrderTraversal(rootNode.rightChild)
    print(rootNode.data)

def levelOrderTraversal(rootNode):
    #Time & Space Complexity is O(n) where n is the number of nodes in the BT
    #Base case
    if rootNode is None:
        return
    
    # Create an empty queue using python lists. 
    queue= []
    queue.append(rootNode)

    while (len(queue)> 0):
        # Print from front of the queue
        # and remove from behind the queue.
        print(queue[0].data)
        node = queue.pop(0)

        # Enqueue left child
        if node.leftChild is not None:
            queue.append(node.leftChild)

        if node.rightChild is not None:
            queue.append(node.rightChild)

def searchBinaryTree(rootNode, nodeVal):
    # same as levelOrder traversal but just add the if statement to check the value.
    if rootNode is None:
        return
    queue=[]
    queue.append(rootNode)

    while(len(queue)>0):
        #print(queue[0].data)
        node=queue.pop(0)

        if(node.data == nodeVal):
            print("Returned Success")

        if node.leftChild is not None:
            queue.append(node.leftChild)

        if node.rightChild is not None:
            queue.append(node.rightChild)

def insertBinaryTree(rootNode, newNode):
    # We are using level order traversal
    if rootNode is None:
        return
    queue=[]
    queue.append(rootNode)

    while(len(queue)>0):
        node=queue.pop(0)
        if node.leftChild is not None:
            queue.append(node.leftChild)
        else:
            node.leftChild=newNode
            return 'Insertion successful'
        if node.rightChild is not None:
            queue.append(node.leftChild)
        else:
            node.rightChild=newNode
            return 'Insertion successful'

def deleteDeepest(root, dNode):
    q = []
    q.append(root)

    while(len(q)):
        temp=q.pop(0)
        if temp is dNode:
            temp=None
            return
        if temp.rightChild:
            if temp.rightChild == dNode:
                temp.rightChild = None
                return
            else:
                q.append(temp.rightChild)
        if temp.left:
            if temp.left is dNode:
                temp.left = None
                return
            else:
                q.append(temp.leftChild)

#function to delete element in a binary tree
def deletion (root, key):
    if root == None:
        return None
    if root.leftChild == None and root.rightChild == None:
        return None
    else:
        return root
    keyNode = None

    q=[]
    q.append(root)

    while(len(q)):
        temp=q.pop(0)
        if temp.data == key:
            key_node = temp
        if temp.left:
            q.append(temp.left)
        if temp.right:
            q.append(temp.right)
    if keyNode :
        x = temp.data
        deleteDeepest(root, temp)
        key_node.data = x
    return root


# Driver program to test the above function
if __name__=='__main__':
    newBT=TreeNode('Drinks')
    leftChild = TreeNode("Hot")
    tea = TreeNode("Tea")
    coffee = TreeNode("Coffee")
    leftChild.leftChild = tea
    leftChild.rightChild = coffee
    rightChild = TreeNode("Cold")
    newBT.leftChild = leftChild
    newBT.rightChild = rightChild

    levelOrderTraversal(newBT)
    print('\n\n')

    newNode=TreeNode('Coke')
    newNode2=TreeNode('Pepsi')
    print(insertBinaryTree(newBT,newNode))
    print(insertBinaryTree(newBT,newNode2))
    levelOrderTraversal(newBT)

    #Driver code for Deletetion
    root = TreeNode(10)
    root.leftChild = TreeNode(11)
    root.leftChild.leftChild = TreeNode(7)
    root.leftChild.rightChild = TreeNode(12)
    root.rightChild = TreeNode(9)
    root.rightChild.leftChild = TreeNode(15)
    root.rightChild.rightChild = TreeNode(8)
    print("\nThe tree before the deletion:")
    inOrderTraversal(root)
    key = 11
    root = deletion(root, key)
    print()
    print("The tree after the deletion;")
    inOrderTraversal(root)