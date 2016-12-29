#include"baseBinTree.h"


baseBinTree::baseBinTree(int dat){
    this->x=dat;
    this->depth=0;
    this->l = this->r = NULL;
    }



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
void baseBinTree::smart_show(ostream &stream)
{
	if (this->l != NULL)
	{
		this->l->smart_show(stream);
	}
	stream << this->x << "->" << this->depth;
    stream << endl;
	if (this->r != NULL)
	{
		this->r->smart_show(stream);
	}
}
void baseBinTree::smart_add_node(int x)
{
    int hh = 0;
    add_with_depth(x,hh);
}

void baseBinTree::add_with_depth(int dat, int &h){
    	if (dat<this->x)
	{
        if (this->l != NULL){this->l->add_with_depth(dat,h);}
		else this->l = new baseBinTree(dat);
	}

	if (dat>this->x) 
	{
        if (this->r != NULL){this->r->add_with_depth(dat,h);}
        else this->r = new baseBinTree(dat);
	}
    if (this->depth == h)this->depth  = this->depth + 1;
    h++;
}

void baseBinTree::search(ostream &stream,int is, int js, int ic, int &jc, int &dat)
{
	if (this->l != NULL)
	{
		if ((ic+1)==is)jc = jc + 1;
		this->l->search(stream, is, js, ic + 1, jc, dat);
	}

    // stream << this->x << " -> " << ic << " " << jc << endl;
    if (ic==is && jc==js){
        // stream << "Search -> " << this->x << endl;
        dat = this->x;
        // return this->x;
    }

	if (this->r != NULL)
	{
        if ((ic+1)==is)jc = jc + 1;
		this->r->search(stream, is, js, ic + 1, jc, dat);
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




baseBinTree::baseBinTree(){}

baseBinTree::~baseBinTree(){}