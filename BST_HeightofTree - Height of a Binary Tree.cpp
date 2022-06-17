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
		
		
		int height(Node* root){
			if(root == NULL){
				return -1;
			}
			else{
				if(root->right == NULL){
					return 1+height(root->left);
				}
				else{
					return 1+height(root->right);
				}
			}
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
	
	int height = myTree.height(root);
	cout << height << endl;
	
	return 0;
}


