#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE
#include<iostream>
class BinarySearchTree
{
    
    struct node
    {
        int data;
        node* left;
        node* right;
        
    };

    node* root;
    
    node* insert(int data, node *root_)
    {
        if(root_  == NULL)
        {
            root_ = new node;
            root_->data = data;
            root_->left = NULL;
            root_->right = NULL;
        }
        else
        {
            if(data < root_->data)
            {
                root_->left =  insert(data,root_->left);
            }
            else if(data > root_->data)
            {
                root_->right =  insert(data,root_->right);
            }
            
        }

        return root_;
    }
    void inorder(node* root_)
    {
        if( root_ == NULL)
            return;
        inorder( root_->left);
        std::cout <<  root_->data << " ";
        inorder( root_->right);
    }

public:

    BinarySearchTree()
    {
        root = NULL;
    }

    void insert(int x)
    {
        root = insert(x, root);
    }
    void display()
    {
        inorder(root);
    }
    

};


#endif
