#include <iostream>
#include "BinTree.h"
#include "Windows.h"
#include "vector"
using namespace std;  

void menu() {
	int q;
	while (true) {
		system("cls");
        cout << "Меню программы:" << endl << "Введите с клавиатуры соотвествующее число, чтобы перейти к выполнению нужного пункта:" << endl;
        cout << "1 - Создать дерево;" << endl;
        cout << "2 - записать на диск;" << endl;
        cout << "3 - " << endl;
        cout << "4 - " << endl;
        cout << "5 - " << endl;
        cout << "0 - Выход из программы." << endl;
        cin >> q;
        if (q == 1) {
            
        }
        else if (q == 2) {
            
        }
        else if (q == 3) {
            
        }
        else if (q == 4) {
            
        }
        else if (q == 5) {
            
        }
        else if (q == 0) {
            break;
        }
        else {
            cout << "Такого пункта не существует!" << endl;
            system("pause");
        }
    }
}


void welcome() {
	int s;
	while (true) {
		system("cls");
		cout << "Добро пожаловать в программу работы с бинарными деревьми" << endl;
		cout << "Для того чтобы продолжить, введите 1" << endl;
		cin >> s;
		if (s == 1)
			break;
		else {
			cout << "Для того чтобы продолжить, введите 1" << endl;
			system("pause");
		}
	}
	menu();
}

int main()  
{ 
     try {


        int dat[13] = {15,9,5,6,12,28,2,47,4};
        // ofstream fout("new_tree.txt");
        // baseBinTree Tree = new baseBinTree(7);
        
        // for (int i = 0; i < 9; i++) Tree.smart_add_node(dat[i]); 
        // Tree.print_tree(fout);
        // fout.close();
        // Tree.del(Tree);

        ifstream fin("source/tree1.txt");
        baseBinTree Tree2 = new baseBinTree(fin);
        fin.close();
        Tree2.smart_show(cout);
        
        // ofstream fout("new_tree.txt");
        int ind1,ind2;
        cout << "index: ";
        cin >> ind1 >> ind2;
        cout << "resSearch -> " << endl;
        baseBinTree Tree3 = new baseBinTree(0);
        Tree3 = Tree2.search(ind1,ind2);
        cout << Tree3;
        // fout.close();
        cout << "\n\n\n";
        // Tree2[ind1][ind2]->smart_show(cout);



        fin.open("source/tree1.txt");
        BinTree Tree4 = new BinTree(fin);
        // for (int i = 0; i < 9; i++) Tree4.smart_add_node(dat[i]); 
        // Tree4.smart_show(cout);
        cout << "Search result: " << endl;
        Tree4[ind1][ind2]->smart_show(cout);
        fin.close();


    } catch (int error) {
        cout << "Error #" << error << endl;
    } catch (...) {
        cout << "Unexpected error occured." << endl;
    }
   
    
    
 

    cout << endl << "press any key!" << endl;
    char b[10];
    cin >> b;
}   