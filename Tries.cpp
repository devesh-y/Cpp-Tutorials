#include<bits/stdc++.h>
using namespace std;
class trienode{
    public:
        char data;
        trienode* children[26];
        bool isterminal;
        trienode(char ch){
            data=ch;
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
            isterminal=false;
        }
};
class trie{
    public:
        trienode * root;
        trie(){
            root=new trienode('\0');
        }
        void insertchar(trienode * &root,string word){
            if(word.size()==0){
                root->isterminal=true;
                return;
            }
            int index=word[0]-'a';
            trienode *child;
            if(root->children[index])
            {
                child=root->children[index];
            }
            else{
                child=new trienode(word[0]);
                root->children[index]=child;
            }
            insertchar(child,word.substr(1));
        }
        void insert(string word){
            insertchar(root,word);
        }
        bool searchchar(trienode * &root,string word){
            if(word.size()==0){
                return root->isterminal;
            }
            int index=word[0]-'a';
            trienode * child;
            if(root->children[index]){
                child=root->children[index];
            }
            else{
                return false;
            }
            return searchchar(child,word.substr(1));
        }
        bool search(string word){
            return searchchar(root,word);
        }
};
int main(){
    trie * t=new trie();
    t->insert("abcd");
    t->insert("abc");
    cout<<t->search("ab");
}
