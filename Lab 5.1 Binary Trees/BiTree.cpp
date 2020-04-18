#include <iostream>
#include "BiTree.h"
using namespace std;

BiTree::BiTree()
{
	root = nullptr; //Initializes the root's pointer.
}

BiTree::~BiTree()
{
}

void BiTree::AddItem(int item)
{
	TreeNode* branch = new TreeNode;
	TreeNode* parent;
	branch->value = item; //Initializing of the pointers takes place around here.
	branch->left = nullptr;
	branch->right = nullptr;
	parent = nullptr;
	if (IsEmpty())
		root = branch; //Creates root if there isn't one already.
	else { //Otherwise makes a branch.
		TreeNode* ptr;
		ptr = root;
		while (ptr != nullptr) { //Places items on first th left, then the right.
			parent = ptr;
			if (item > ptr->value)
				ptr = ptr->right;
			else
				ptr = ptr->left;
		}
		if (item < parent->value) /*Things are a bit sketchy here and frankly I had a lot of help 
								  from the internet but I am pretty sure what this does is make sure 
								  the lower value is the one placed on the left.*/
			parent->left = branch;
		else
			parent->right = branch;
	}
}


bool BiTree::IsEmpty() //Checks if the tree is empty.
{
	return(root == nullptr);
}

void BiTree::Print() /*Again, I'm not certain why it needed to be this way but it is what worked.
					 That goes for all of the print functions.*/
{
	RootPrint(root);
}

void BiTree::RootPrint(TreeNode* ptr)
{
	if (ptr != nullptr) {
		RootPrint(ptr->left);
		cout << "  " << ptr->value << " ";
		RootPrint(ptr->right);
	}
}

void BiTree::RPrint()
{
	RRootPrint(root);
}

void BiTree::RRootPrint(TreeNode* ptr)
{
	if (ptr != nullptr) {
		RootPrint(ptr->right);
		cout << "  " << ptr->value << " ";
		RootPrint(ptr->left);
	}
}

void BiTree::TPrint()
{
	TRootPrint(root);
}

void BiTree::TRootPrint(TreeNode* ptr)
{
	if (ptr != nullptr) {
		cout << ptr->value << " \n";
		RootPrint(ptr->left);
		cout << " ";
		RootPrint(ptr->right);
	}
}
