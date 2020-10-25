#include <iostream>
#include <fstream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int nr_linii=1;
string linia;
int main(int argc, char** argv) {
	cout<<"Lubie placki"<<endl;
	fstream plik;
	plik.open("proba.txt",ios::in);
	while(getline(plik,linia))
	{
		for()
		
		nr_linii++
	}
	plik.close;
	return 0;
}
