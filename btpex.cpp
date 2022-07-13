#include <iostream>
#include <string>
#include <fstream>
#include "btreeexp.h"

using namespace std;

void insert_bt(person *&tree, string lName)
{
	person *n;

	//check for empty tree
	if (tree == NULL)
	{
		n = new person;
		n->lName(lName);
		tree = n;
	}
	else if (lName < tree->lName())
		insert_bt(tree->left, lName);
	else
		insert_bt(tree->right, lName);
}
void display_bt(person *tree)
{
	if (tree != NULL)
	{
		display_bt(tree->left);
		cout << tree->lName() << endl;
		display_bt(tree->right);
	}
}
int main()
{
	ifstream infile;
	string lName;
	person *tree = NULL;

	infile.open("btpdata.txt");

	while (!infile.eof())
	{
		infile >> lName;
		insert_bt(tree, lName);
	}

	display_bt(tree);
	system("pause");

	return 0;
}