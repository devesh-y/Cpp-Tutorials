#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node* left;
    struct node* right;
    int height;
};
int getheight(node * n)
{
    if(n==NULL)
    {
        return 0;
    }
    return n->height;
}
void preorder(node* root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" height is "<<getheight(root)<<"\n";
        preorder(root->left);
        preorder(root->right);
    }

}

struct node* createnode(int key)
{
    node * newnode=new node;
    newnode->key=key;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->height=1;//here we have taken initial height=1
    return newnode;//because we have also taken null node height as 0 
    // so if we take initial height to 0 then we will miscalculate the 
    //bf so we take initial height as 1 
}
int getbalancefactor(node* n)
{
    if(n==NULL)
    {
        return 0;
    }
    return (getheight(n->left)-getheight(n->right));
}
void allbf(node* root)
{
    if(root!=NULL)
    {
        cout<<getbalancefactor(root)<<" ";
        allbf(root->left);
        allbf(root->right);
    }
}
struct node* leftrotate(node* x)
{
    node* y=x->right;
    node* t2=y->left;
    x->right=t2;
    y->left=x;
    y->height=max(getheight(y->right),getheight(y->left))+1;
    x->height=max(getheight(x->right),getheight(x->left))+1;
    return y;
}     
struct node* rightrotate(node* y)
{
    node* x=y->left;
    node* t2=x->right;
    y->left=t2;
    x->right=y;
    y->height=max(getheight(y->right),getheight(y->left))+1;
    x->height=max(getheight(x->right),getheight(x->left))+1;
    return x;
}
struct node* insert(node* newnode,int key)
{
    if(newnode==NULL)
    {
        return createnode(key);
    } 
    if(key<newnode->key)
    {
        newnode->left=insert(newnode->left,key);
    }
    else if(key>newnode->key)
    {
        newnode->right=insert(newnode->right,key);
    }
    newnode->height=1+max(getheight(newnode->left),getheight(newnode->right));
    int bf=getbalancefactor(newnode);
    cout<<"bf is "<<bf<<" and newnode->key is "<<newnode->key<<"\n";
    if(bf>1 && key<newnode->left->key)
    {
        cout<<"ll case\n";
        return rightrotate(newnode);      //ll case
    }
    if(bf<-1 && key>newnode->right->key)
    {
        cout<<"rr case\n"; //here remember the rotation is not happening wrt this node
        //here we get the root node after rotation
        return leftrotate(newnode);          //rr case
    }
    if(bf>1 && key>newnode->left->key)
    {
        cout<<"lr case\n";
        newnode->left=leftrotate(newnode->left);     //lr case
        return rightrotate(newnode);
    }
    if(bf<-1 && key<newnode->right->key)
    {
        cout<<"rl case\n";
        newnode->left=rightrotate(newnode->left);     //rl case
        return leftrotate(newnode);
    }
    return newnode;

}
int main()
{
    node* root=NULL;
    root=insert(root,1);
    root=insert(root,2);
    
    root=insert(root,4);
    
    root=insert(root,5);
    root=insert(root,6);
    root=insert(root,3);
    preorder(root);
    cout<<endl;
    allbf(root);
    
}