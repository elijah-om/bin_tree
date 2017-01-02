#include <iostream>
#include "baseBinTree.h"
#include "Windows.h"
#include "vector"




using namespace std;  
int main()  
{ 
     try {
        ofstream fout("tree.txt");
        baseBinTree *Tree = new baseBinTree(7);
        int dat[13] = {15,9,5,6,12,28,2,47,4};
        for (int i = 0; i < 9; i++) Tree->smart_add_node(dat[i]); 
        Tree->print_tree(fout);
        fout.close();
        Tree->del(Tree);

        ifstream fin("tree.txt");
        baseBinTree *Tree2 = new baseBinTree(fin);
        Tree2->smart_show(cout);

        int ind1,ind2;
        cout << "index: ";
        cin >> ind1 >> ind2;
        cout << "resSearch -> " << endl;
        cout << Tree2->search(ind1,ind2)->value();
        
    } catch (int error) {
        cout << "Error #" << error << endl;
    } catch (...) {
        cout << "Unexpected error occured." << endl;
    }
   
    
    
 

    cout << endl << "press any key!" << endl;
    char b[10];
    cin >> b;
}   