#include <iostream>
#include <fstream>
#include "vector"
using namespace std;



class baseBinTree
{
protected:  
	baseBinTree *l, *r;
	int i,j;
	int depth;
	int x;
public:
	
	void around(ostream &);
	void del_helper(baseBinTree *&);
	void del(baseBinTree &);
	void smart_add_node(int);
	void add_node(int,int,int,bool);
	void add_with_depth(int,int&);
	baseBinTree* search(int ,int);
	baseBinTree* search(int);
	int value(){return this->x;};
	baseBinTree* left(){return this->l;};
	baseBinTree* right(){return this->r;};
	int my_depth(){return this->depth;};
	void set_value(int dat){this->x = dat;};
	baseBinTree* search_helper_pro(int ,int ,baseBinTree*);
	baseBinTree* search_helper_pro_by_val(int,baseBinTree*);

	void print_tree(ostream &);
	void smart_show(ostream &);

	baseBinTree(int);
	baseBinTree(baseBinTree*);
	baseBinTree(istream &);
	baseBinTree();
    ~baseBinTree();


	baseBinTree operator= (baseBinTree*);
	// baseBinTree* operator->() { return this; }


	friend ostream &operator << (ostream &, baseBinTree);
	friend ostream &operator << (ostream &, baseBinTree*);
	friend istream &operator >> (istream &, baseBinTree*);
private:
};


