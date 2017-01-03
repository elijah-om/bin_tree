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
        baseBinTree* operator[] (int j){
            return this->search(this->index, j);
        }
        friend baseBinTree;
};

class BinTree : public baseBinTree{
        // BinTree *lchild, *rchild;
	public:
        BinTree(int dat) : baseBinTree(dat) {}
        BinTree(baseBinTree* tr) : baseBinTree(tr) {}
        BinTree(istream &str) : baseBinTree(str) {}
        BinTree() : baseBinTree() {}
        
        treeHelper operator[] (int i){
            treeHelper *temp = new treeHelper(this, i);
            return *temp;
        }

    // friend ostream &operator << (ostream &, BinTree);
};
