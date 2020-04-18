#ifndef BITREE_H
#define BITREE_H

struct TreeNode
{
	TreeNode* left;
	TreeNode* right;
	int value;
};

/*I'm going to be entirely honest, I don't at all feel like I know how to work with trees after having done
this lab, that should be evident by the failure of my print functions. But I feel that by redoing this header
file by myself that I finally have a grasp on classes. So I guess at least I learned something right?
Anyway, its 7 PM which means I've been working for over 6 hours and frankly I'm tired. I hope its not
all for naught.

By the way, that link you gave me helped a LOT with classes in general but still left me lost with trees.*/

class BiTree
{
public:
	BiTree(); //Constructor
	~BiTree(); //Destructor
	void AddItem(int item); //Adds item to the tree.
	bool IsEmpty(); //Checks if the tree is empty.
	//I'm not entirely sure why doubling up on the prints was needed but hey, it worked. Why? Frankly I don't know.
	void Print();
	void RootPrint(TreeNode* ptr);
	void RPrint();
	void RRootPrint(TreeNode* ptr);
	void TPrint();
	void TRootPrint(TreeNode* ptr);

private:
	TreeNode* root; //Base of the tree.
};

#endif
