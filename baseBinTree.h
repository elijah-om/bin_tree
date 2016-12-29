#include <iostream>
using namespace std;
class baseBinTree
{
    int x;
	baseBinTree *l, *r;
public:
	void show(ostream &);
	void del(baseBinTree *&);
	void smart_add_node(int);
	void add_node(int,int,int,bool);
	void search(ostream &, int ,int ,int ,int&);
	// int &operator [] (int i, int j) {
    // 	return a[i];
	// }
	baseBinTree(int);
    baseBinTree();
    ~baseBinTree();

private:
    
};