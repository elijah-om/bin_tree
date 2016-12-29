#include <iostream>
using namespace std;
class baseBinTree
{
    int x;
	baseBinTree *l, *r;
	int i,j;
	int depth;
public:
	void show(ostream &);
	void del(baseBinTree *&);
	void smart_add_node(int);
	void add_node(int,int,int,bool);
	void add_with_depth(int,int&);
	void search(ostream &, int ,int ,int ,int&,int&);
	int smart_search(int ,int, baseBinTree&);
	void smart_show(ostream &);
	baseBinTree(int);
	baseBinTree();
    ~baseBinTree();






	// int &operator [] (int j1) {
	// 	int icb = 0;
	// 	int jcb = 0;
	// 	int xs;
	// 	this->search(cout,2,j1,icb,jcb,xs);
	// 	return xs;
	// };


private:
    
};