#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node *right;
};
struct node* createnode(int value){
    struct node* n;
    n=new node;
    n->data=value;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void insert(node* p,int value)
{
    node* newnode;
    node *prev;
   
    while(p!=NULL)
    {
        prev=p;
        if(value==p->data)
        {
            cout<<"this value is already available in tree\n";
            return;
        }
        if(value>p->data)
        {
            p=p->right;
        }
        else {
            p=p->left;
        }
    }
    newnode=createnode(value); 
    if(value>prev->data)
    {
        prev->right=newnode;
    }
    else{
        prev->left=newnode;
    }
    

}
void preorder(node* p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        preorder(p->left);
        preorder(p->right);
    }
    
}
void postorder(node *p)
{
    if(p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->data<<" ";
    }
    
}
void inorder(node * p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        cout<<p->data<<" ";
        inorder(p->right);
    }
    
}
bool checkbst(node* p,int &prev)
{
    if(p!=NULL)
    {
        if(!(checkbst(p->left,prev)))
        {
            return false;
        }
        if(p->data<=prev)
            return false;
        prev=p->data;
        checkbst(p->right,prev);
    }
    return true;
}
struct node* inorderpre(node* root)//left node ka right most element 
{
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right; 
    }
    return root;
}
struct node* deletenode(node* root,int value,bool &check)
{
    node* ipre;
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL && root->right==NULL && value!=root->data)
    {
        check=false;
        return root;

    }
    if(root->left==NULL && root->right==NULL)
    {
        free(root);
        return NULL;
    }
    if(value<root->data)
    {
        root->left=deletenode(root->left,value,check);
    }
    else if(value>root->data)
    {
        root->right=deletenode(root->right,value,check);
    }
    
    else
    {
        ipre=inorderpre(root);
        root->data=ipre->data;
        root->left=deletenode(root->left,ipre->data,check);
    }
    return root;
}
int main()
{
    node * p1,*p2,*p3,*p4,*p5;
    p1=createnode(9);
    p2=createnode(6);
    p3=createnode(10);
    p4=createnode(3);
    p5=createnode(7);
    p1->left=p2;
    p1->right=p3;
    p2->left=p4;
    p2->right=p5;
    insert(p1,67);


    inorder(p1);
    cout<<"\n";
    preorder(p1);
    cout<<"\n";
    postorder(p1);
    int prev=INT_MIN;
    if(checkbst(p1,prev)==1)
    {
        cout<<"\nthis is a binary tree\n";
    }
    else{
        cout<<"\nthis is not a binary tree\n";
    }

    cout<<"\n";
    node*result=new node;
    bool check=true;
    result=deletenode(p1,-6,check);
    cout<<"the value of result is  "<<result->data<<"\n";
    if(check==false){
        cout<<"value not found, unable to delete\n";
    }
    cout<<"\n";
    inorder(p1);
}