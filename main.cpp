#include <iostream>
#include "baseBinTree.h"
#include "Windows.h"
#include "vector"

using namespace std;  
int main()  
{ 
    baseBinTree *Tree = new baseBinTree(7);
    int dat1[13] = {15,9,5,6,12,28,2,47,4};
    int dat[13] = {15};
    for (int i = 0; i < 9; i++) Tree->smart_add_node(dat1[i]); 
    

    cout << "\n\n\n" << "index:" << endl;
    int ind1,ind2;
     cin >> ind1 >> ind2;
    Tree->smart_show(cout);
    cout << "resSearch -> " << endl;
    Tree->search(ind1,ind2)->smart_show(cout);
    // baseBinTree *Tree2 = new baseBinTree(Tree->search(ind1,ind2));
    // cout << Tree->search(ind1,ind2)->smart_show(cout) << endl;
    
    
    
    
    Tree->del(Tree);


    // int *a[10];
    // *a[1] = 15;
    // cout << *a[1];
    
    // cout << "\t\t15" << endl << "\t1345\t255\t" << endl << "15\t12\t56\t46";

    cout << endl << "press any key!" << endl;
    char b[10];
    cin >> b;
}   