#include<iostream>

using namespace std;
class Vect;

class SubVect {
	int l,r;
	Vect *V;
public:
	SubVect(int l,int r,Vect *V) {
		this->l=l;
		this->r=r;
		this->V=V;
	}
	void operator = (int k);
	void operator = (Vect Y);
};

class Vect {
	int n;
	int a[50];
public:
	Vect(void){
		n=15;
		for (int i=0; i<n; i++)
			a[i]=0;
	}
	Vect(int m){
		n=m;
		for (int i=0; i<n; i++)
			a[i]=0;
	}
	~Vect(void){}
	SubVect operator() (int l,int r) {
		SubVect W(l,r,this);
		return W;
	}
	friend ostream &operator <<(ostream &output, Vect &q) {
		for (int i=0; i<q.n; i++)
			output<<q.a[i]<<" ";
		return output;
	}
	int &operator [] (int i) {
		return a[i];
	}
	friend SubVect;
};

void SubVect::operator = (int k) {
	for (int i=l; i<=r; i++)
		(*V).a[i]=k;
}

void SubVect::operator = (Vect Y){
	int l_R=(*V).n-(r-l+1)+Y.n;
	Vect R(l_R);
	for (int i=0; i<l; i++)
		R.a[i]=(*V).a[i];
	int t=l;
	for (int i=0; i<Y.n; i++)
		R.a[t++]=Y.a[i];
	for (int i=r+1; i<(*V).n; i++)
		R.a[t++]=(*V).a[i];
	(*V).n=l_R;
	//for (int i=0; i<l_R; i++) // error!
	//	(*V).a[i]=R.a[i];
	(*V)=R;
}

int main() {
	Vect A,B(15);
	//A(3,7)=13;
	for (int i=0; i<15; i++)
		B[i]=1;
	A(3,5)=B;
	cout<<A<<endl;
	return 0;
}
