#include"baseBinTree.h"
#include "vector"


class BinTree : public baseBinTree {
public:
    // treeInterim operator[] (int i);
    BinTree(int dat) : baseBinTree(dat) {}
    BinTree(baseBinTree* tr) : baseBinTree(tr) {}
    BinTree(istream &str) : baseBinTree(str) {}
};



// class treeInterim{
//     BinTree* tree;
//     int index;
// public:
//     treeInterim(BinTree *tr,int ind){
//         this->tree = tr;
//         this->index = ind; 
//     }
//     BinTree* operator[] (int j){
// 		return this->tree->search(this->index, j);
//     }
//     friend BinTree;
// };