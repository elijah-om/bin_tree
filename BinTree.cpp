#include"BinTree.h"

void BinTree::smart_add_node_v2(int x)
{
    int hh = 0;
    add_with_depth_v2(x,hh);
}

void BinTree::add_with_depth_v2(int dat, int &h){
    	if (dat<this->x)
	{
        if (this->lchild != NULL){this->lchild->add_with_depth_v2(dat,h);}
		else this->lchild = new BinTree(dat);
	}

	if (dat>=this->x) 
	{
        if (this->rchild != NULL){this->rchild->add_with_depth_v2(dat,h);}
        else this->rchild = new BinTree(dat);
	}
    if (this->depth == h)this->depth  = this->depth + 1;
    h++;
}

ostream &operator << (ostream &stream,BinTree tree) {
    tree.smart_show(stream);
	return stream;
}
