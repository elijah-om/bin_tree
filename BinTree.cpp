#include"BinTree.h"

baseBinTree* treeHelper::operator[] (int j){
    return this->search(this->index, j);
}

treeHelper BinTree::operator[] (int i){
    treeHelper *temp = new treeHelper(this, i);
    return *temp;
}

baseBinTree &BinTree:: operator() (int dat){
    return *this->search(dat);
}

baseBinTree &BinTree:: operator() (int i, int j){
    return *this->search(i,j);
}

