// #include <iostream>
// #include <stack>
// #include <queue>
// using namespace std;
// struct Node{
//     int data;
//     struct Node *left, *right;
//     Node(int data){
//         this->data = data;
//         left = right = NULL;
// }};

// void bfs(Node *root){
//     queue<Node *> q;
//     q.push(root);
//     while (q.empty() != true){
//         Node *temp = q.front();
//         q.pop();
//         cout << temp->data << " ";
//         if (temp->left){
//             q.push(temp->left);
//         }
//         if (temp->right){
//             q.push(temp->right);
//         }
//     }
// }
// void dfs(struct Node *node){
//     if (node == NULL){
//         return;
//     }
//     dfs(node->left);
//     cout << node->data << " ";
//     dfs(node->right);
// }
// int main(){
//     struct Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     cout << "\nInorder traversal of binary tree is \n";
//     dfs(root);
//     cout << endl;
//     bfs(root);

//     return 0;
// }


#include<iostream>
using namespace std;
#include<iomanip>
#include<queue>
#include<stack>
struct node{
    int data;
    struct node *left ,*right;
    node(int data){
        this->data=data;
        left = right = NULL;
    }
};
void dfs(struct node *node){
    if(node == NULL){
        return ;
    }
    dfs(node->left);
    cout<<node->data<<" ";
    dfs(node->right);
}
void bfs(node *root){
    queue<node *>q;
    q.push(root);
    while (q.empty()!= true){
        node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if (temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
int main(){
    struct node *root = new node(1);
    root->left = new node(2); 
    root->right = new node(3); 
    root->left->left = new node(4);     
    root->left->right=new node(5);
    cout<<"dfs : ";
    dfs(root);
    cout<<endl;
    cout<<"bfs : ";
    bfs(root);
    return 0 ;
}