#include <iostream>

using namespace std;


char zamiana(char a, int zmienny_klucz);


int main(int argc, char** argv) {
	cout << "Podaj wyraz: ";
	string slowo;
	cin >> slowo;


	cout<<"Podaj klucz: ";
	int klucz{ };
	cin>>klucz;

	int dlugosc=slowo.size();

    klucz=klucz%26;

	for( int i{ 0 } ;  i<slowo.size() ; i++ )
	{
        slowo[i] = zamiana(slowo[i], klucz);
	}
        cout<<"Kod: "<<slowo;
        //A==0041. . .
        //a==0061. . .
        return 0;
}
	char zamiana(char a, int klucz)
	{
		int ascii=(int)a;
		if(ascii>(int)'Z')
		{
			if(ascii+klucz>(int)'z')
			{
			ascii-=26;
			}
			else if(ascii+klucz<(int)'a')
			{
			ascii+=26;
			}
		}else if(ascii<=(int)'Z')
		{
			if(ascii+klucz>(int)'Z')
		{
			ascii-=26;
		}
		else if(ascii+klucz<(int)'A')
		{
			ascii+=26;
		}
		}

		ascii+=klucz;

	return (char)ascii;
	}



