#include<bits/stdc++.h>
using namespace std;


class Node{
	public:
		int data;
		Node *left;
		Node *right;
		Node(int d){
			data = d;
			left = NULL;
			right = NULL;
		}
};

class Solution {
	public:
		Node *insert(Node *root, int data){
			Node *temp = new Node(data);
			if(root == NULL){
				return temp;
			}
			else if(root->data < data){
				root->right = insert(root->right, data);
			}
			else if(root->data > data){
				root->left = insert(root->left, data);
			}
			return root;
		}
		
		Node *lca(Node *root, int v1,int v2){
    		while (root){
        		if (v1 < root->data && v2 < root->data)
            		root = root->left;
        		else if (v1 > root->data && v2 > root->data)
            		root = root->right;
            	else return root;
    		}     
    	return root;
	}
		
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	Solution myTree;
	Node* root = NULL;
	
	int t;
	int data;
	
	cin >> t;
	
	while(t-->0){
		cin >> data;
		root = myTree.insert(root, data);
	}
	
	int v1, v2;
	cin >> v1 >> v2;
	
	root = myTree.lca(root, v1 , v2);
	
	cout << root->data << endl;
	
	return 0;
}
