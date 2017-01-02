#include <iostream>
#include <fstream>
using namespace std;
class baseBinTree
{
    
	baseBinTree *l, *r;
	int i,j;
	int depth;
	int x;
public:
	
	void show(ostream &);
	void del(baseBinTree *&);
	void smart_add_node(int);
	void add_node(int,int,int,bool);
	void add_with_depth(int,int&);
	baseBinTree* search(int ,int);
	int value(){return this->x;};
	void set_value(int dat){this->x = dat;};
	void search_supporting(int ,int ,int ,int&,baseBinTree* &);
	baseBinTree* search_supporting_pro(int ,int ,baseBinTree*);
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
	friend istream &operator >> (istream &, baseBinTree*);

	int &operator ()(int i1, int j1){
		return this->search(i1 ,j1)->x;
	};




	// int &operator [] (int j1) {
	// 	int icb = 0;
	// 	int jcb = 0;
	// 	int xs;
	// 	this->search(cout,2,j1,icb,jcb,xs);
	// 	return xs;
	// };


private:
    
};