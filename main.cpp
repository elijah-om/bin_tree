#include <iostream>
#include "baseBinTree.h"
#include "Windows.h"

using namespace std;  
int main()  
{ 
    int a,i,j;
    j = 0;
    i = 0;
    cin >> a;
    cout << "Loading" << endl;
    baseBinTree *Tree = new baseBinTree(a);
	Tree->smart_add_node(15);
	Tree->smart_add_node(9);
	Tree->smart_add_node(5);
	Tree->smart_add_node(6);
	Tree->smart_add_node(12);
	Tree->smart_add_node(28);
    Tree->smart_add_node(2);
    Tree->smart_add_node(47);
	Tree->smart_add_node(30);
    Tree->smart_add_node(4);
	Tree->smart_add_node(29);
	Tree->smart_add_node(35);
    Tree->show(cout);
    cout << "index:" << endl;
    int ind1,ind2;
    cin >> ind1 >> ind2;
    Tree->search(cout,ind1,ind2,i,j);
	Tree->del(Tree);



    cout << endl << "press any key!" << endl;
    char b[10];
    cin >> b;
}   