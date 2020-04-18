/* Benjamin Roe
 C++ Fall 2019
 Due 4/17/2020
 Lab 5 Binary Trees
 Create a binary tree class which will take strings of
  website names and sort them in alphabetical order. Your
  class should also be able to sort them in reverse
  alphabetical order as well.
*/

#include <iostream>
#include "BiTree.h"
#include <time.h>
using namespace std;

int main()
{
	BiTree tree;
	srand((unsigned int)time(NULL));
	for (int i = 0; i <= 11; i++)
		tree.AddItem(rand() % 101); //Give random numbers every time from 0 to 100.
	cout << "Acsending: \n"; //Displays the numbers in acsending order.
	tree.Print();
	cout << "\nDecending: \n"; //Is supposed to display them in decending order but for the life of me I can't get it to work.
	tree.RPrint();
	cout << "\nTree: \n"; //Is supposed to display them as a tree, but again, I cannot get it to work.
	tree.TPrint();
}