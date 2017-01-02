#include"baseBinTree.h"
#include "vector"
#include "math.h"


baseBinTree::baseBinTree(int dat){
    this->x=dat;
    this->depth=0;
    this->l = this->r = NULL;
    }
baseBinTree::baseBinTree(baseBinTree* tree){
    this->x=tree->x;
    this->depth=tree->depth;
    this->l = tree->l;
    this->r = tree->r;
    }
baseBinTree::baseBinTree(istream &stream){
    int dat,i,j,depth;
    stream >> i >> j >> dat >> depth;
    this->x=dat;
    this->depth=depth;
    this->l = this->r = NULL;
    while(!stream.eof()){
        stream >> i >> j >> dat >> depth;
        
        if (j % 2){
            this->search(i-1,j >> 1)->r = new baseBinTree(dat);
            this->search(i-1,j >> 1)->r->depth = depth;
        } else{
            this->search(i-1,j >> 1)->l = new baseBinTree(dat);
            this->search(i-1,j >> 1)->l->depth = depth;
        }
    }
}

void baseBinTree::show(ostream &stream){
	if (this->l != NULL)
	{
		this->l->show(stream);
	}
	stream << this->x << "->" << this->depth << endl;
	if (this->r != NULL)
	{
		this->r->show(stream);
	}
}
void baseBinTree::smart_show(ostream &stream)
{
	vector< vector<baseBinTree*> > row(this->depth+1);
    row[0].push_back(this);
    for (int i = 1; i < row.size();i++){
        for (int j = 0; j < row[i-1].size();j++){
            if (row[i-1][j] != NULL){
                row[i].push_back(row[i-1][j]->l);
                row[i].push_back(row[i-1][j]->r);
            }else{
                row[i].push_back(NULL);
                row[i].push_back(NULL);
            }
        }
    }

    for (int i = row.size()-1; i >=0; i--)
    {
        for (int j = 1; j < pow(2,i); j++) stream << "  ";
        if (row[row.size()-i-1][0] != NULL){stream << row[row.size()-i-1][0]->x;stream << " ";}
        else stream << "* ";
        for (int j = 1; j < row[row.size()-i-1].size(); j++){
            for (int s = 0; s < 2*pow(2,i) - 1; s++) stream << "  ";
            if (row[row.size()-i-1][j] != NULL){stream << row[row.size()-i-1][j]->x;stream << " ";}
            else stream << "* ";
        }
        stream << endl << endl;
    }
}

void baseBinTree::print_tree(ostream &stream){
    vector< vector<baseBinTree*> > row(this->depth+1);
    row[0].push_back(this);
    for (int i = 1; i < row.size();i++){
        for (int j = 0; j < row[i-1].size();j++){
            if (row[i-1][j] != NULL){
                row[i].push_back(row[i-1][j]->l);
                row[i].push_back(row[i-1][j]->r);
            }else{
                row[i].push_back(NULL);
                row[i].push_back(NULL);
            }
        }
    }
    for (int i = 0; i < row.size();i++){
        for (int j = 0; j < row[i].size();j++){
            if (row[i][j]!=NULL){
                stream << i << " " << j << " " << row[i][j]->x << " " << row[i][j]->depth << endl;
            }
        }
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

	if (dat>=this->x) 
	{
        if (this->r != NULL){this->r->add_with_depth(dat,h);}
        else this->r = new baseBinTree(dat);
	}
    if (this->depth == h)this->depth  = this->depth + 1;
    h++;
}


void baseBinTree::search_supporting(int is, int js, int ic, int &jc, baseBinTree* &dat)
{
	if (this->l != NULL)
	{
		if ((ic+1)==is)jc = jc + 1;
		this->l->search_supporting( is, js, ic + 1, jc, dat);
	}

    if (ic==is && jc==js)dat = this;

	if (this->r != NULL)
	{
        if ((ic+1)==is)jc = jc + 1;
		this->r->search_supporting(is, js, ic + 1, jc, dat);
	}
}

baseBinTree* baseBinTree::search_supporting_pro(int is, int js, baseBinTree* dat)
{
	if (dat == NULL)
		throw 100;
    if (is==0)
        return dat;
    if (js >= pow(2,is-1))
        return search_supporting_pro(is-1,js-pow(2,is-1),dat->r);
    else
        return search_supporting_pro(is-1,js,dat->l);
}

baseBinTree* baseBinTree::search(int is,int js){
    return search_supporting_pro(is,js,this);
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




baseBinTree::baseBinTree(){
    this->depth=0;
    this->l = this->r = NULL;
    }

baseBinTree::~baseBinTree(){}