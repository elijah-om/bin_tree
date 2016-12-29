#include"baseBinTree.h"


baseBinTree::baseBinTree(int dat){this->x=dat;}



void baseBinTree::show(ostream &stream)
{
	if (this->l != NULL)
	{
		this->l->show(stream);
	}
	stream << this->x << " ";
	if (this->r != NULL)
	{
		this->r->show(stream);
	}
}

void baseBinTree::smart_add_node(int x)
{
	if (x<this->x)
	{
		if (this->l != NULL) this->l->smart_add_node(x);
		else
		{
			this->l = new baseBinTree;
			this->l->l = this->l->r = NULL;
			this->l->x = x;
		}
	}

	if (x>this->x) 
	{
		if (this->r != NULL) this->r->smart_add_node(x);
		else
		{
			this->r = new baseBinTree;
			this->r->l = this->r->r = NULL;
			this->r->x = x;
		}
	}
}

void baseBinTree::search(ostream &stream,int is, int js, int ic, int &jc)
{
	if (this->l != NULL)
	{
		if ((ic+1)==is)jc = jc + 1;
		this->l->search(stream, is, js, ic + 1, jc);
	}

    // stream << this->x << " -> " << ic << " " << jc << endl;
    if (ic==is && jc==js)stream << "Search -> " << this->x << endl;

	if (this->r != NULL)
	{
        if ((ic+1)==is)jc = jc + 1;
		this->r->search(stream, is, js, ic + 1, jc);
	}
}

void baseBinTree::add_node(int dat,int i,int j,bool lr){}

void baseBinTree::del(baseBinTree *&Tree){
	if (Tree != NULL) 
	{
		del(Tree->l); 
		del(Tree->r); 
		delete Tree; 
		Tree = NULL; 
	}
}




baseBinTree::baseBinTree()
{}

baseBinTree::~baseBinTree()
{}