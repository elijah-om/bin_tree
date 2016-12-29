#include <iostream>
#include "baseBinTree.h"
#include "Windows.h"

using namespace std;  
int main()  
{ 
    baseBinTree *Tree = new baseBinTree(7);
    int dat[13] = {15,9,5,6,12,28,2,47,30,4,29,35};
    for (int i = 0; i < 12; i++) Tree->smart_add_node(dat[i]); 
    Tree->smart_show(cout);

    cout << "\n\n\n" << "index:" << endl;
    int ind1,ind2;
    // cin >> ind1 >> ind2;
    cout << "resSearch -> " << Tree->search(2,3) << endl;
    // cout << "NewResSearch -> " << *Tree[ind2] << endl;
	Tree->del(Tree);


    // int *a[10];
    // *a[1] = 15;
    // cout << *a[1];
    
    // cout << "\t\t15" << endl << "\t   131245\t255\t" << endl << "15\t12\t56\t46";

    cout << endl << "press any key!" << endl;
    char b[10];
    cin >> b;
}   