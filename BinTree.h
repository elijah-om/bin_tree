#include"baseBinTree.h"

class treeHelper : public baseBinTree{
    int index;
    public:
        treeHelper(baseBinTree *tr,int ind){
            this->x=tr->value();
            this->depth=tr->my_depth();
            this->l = tr->left();
            this->r = tr->right();
            this->index = ind; 
        }
        baseBinTree* operator[] (int);
        friend baseBinTree;
};

class BinTree : public baseBinTree{
	public:
        BinTree(int dat) : baseBinTree(dat) {}
        BinTree(baseBinTree* tr) : baseBinTree(tr) {}
        BinTree(istream &str) : baseBinTree(str) {}
        BinTree() : baseBinTree() {}
        
        baseBinTree& operator() (int);
        baseBinTree& operator() (int,int);

        treeHelper operator[] (int);
};
