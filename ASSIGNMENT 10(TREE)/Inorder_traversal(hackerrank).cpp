//  https://www.hackerrank.com/challenges/tree-inorder-traversal/problem#:~:text=In%20this%20challenge%2C%20you%20are,line%20of%20space%2Dseparated%20values.
// hacker rank solutiion 
 void inOrder(Node *root) {
        if(root==NULL){
         return;
}
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
    }

};
