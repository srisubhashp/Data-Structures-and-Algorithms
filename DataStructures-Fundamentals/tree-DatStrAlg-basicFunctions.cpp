#include <iostream>
using namespace std;
struct Node {

    int data;
    struct Node *right;
    struct Node *left;
};

struct Node* Insert(struct Node* root, int data){
    if(root==NULL){
      root=new Node();
        root->data=data;
        root->left=root->right=NULL;
    }
    else if(data<=root->data)
        root->left=Insert(root->left,data);
    else
        root->right=Insert(root->right,data); 
    return root;
}

void InOrder(Node* root){
    if (root==NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

struct Node* FindMin (Node* root){
    while(root!=NULL){
        root=root->left;
    }
    return root;
}

void PreOrder(struct Node *root){
    if(root==NULL){
        return;
    }
    PreOrder(root->left);
    PreOrder(root->right);
    cout<<root->data<<" ";
}

void PostOrder(struct Node *root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  PostOrder(root->left);
  PostOrder(root->right);
}

struct Node* DeleteNode(struct Node* root, int data){
    if(root==NULL)
        return root;
    else if(data<=root->data){
        root->left=DeleteNode(root->left,data);
    }
    else if(data>root->data){
        root->right=DeleteNode(root->right,data);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
        }
        else if(root->left==NULL){
            struct Node* temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL){
            struct Node* temp=root;
            root=root->left;
            delete temp; 
        }
        else{
            struct Node*temp=FindMin(root);

            root->data=temp->data;

            root->right=DeleteNode(root->right,temp->data);

        }
        
    }
    return root;
}

int main() {
	/*Code To Test the logic
	  Creating an example tree
	                    5
			   / \
			  3   10
			 / \   \
			1   4   11*/
    
	struct Node* root = NULL;
	root = Insert(root,5); root = Insert(root,10);
	root = Insert(root,3); root = Insert(root,4); 
	root = Insert(root,1); root = Insert(root,11);

	// Deleting node with value 5, change this value to test other cases
	root = DeleteNode(root,5);

	//Print Nodes in Inorder
	cout<<" Inorder: ";
	InOrder(root);
	cout<<"\n PreOrder: ";
  PreOrder(root);
  cout<<"\n PostOrder: ";
  PostOrder(root);
}


