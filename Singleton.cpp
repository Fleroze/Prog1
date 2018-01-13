#include "Singleton.h"
#include "iostream"
#include "fstream"
#include "iomanip"
#include "cmath"

using namespace std;

// Global static pointer used to ensure a single instance of the class.
Singleton* Singleton::m_pInstance = NULL;

/** This function is called to create an instance of the class.
Calling the constructor publicly is not allowed. The constructor
is private and is only called by this Instance function.
*/

Singleton* Singleton::Instance()
{
	if (!Singleton::m_pInstance)   // Only allow one instance of class to be generated.
		Singleton::m_pInstance = new Singleton;

	return Singleton::m_pInstance;
}

void Singleton::writeToLogFile()
{
	cout << "Hello Singleton world" << endl;
}
void Singleton::skait(const char fv[], char A[], int &i)
{
	ifstream fd(fv);
	char s;
	
	while(!fd.eof())
	{
		fd.get(s);
		A[i] = s;
		i++;
	}
}
void Singleton::paiesk(char A[], int D[], int i, int sk, int schk)
{
	int ch = 0;
	//cout << "i =" << i <<endl;
	//cout << A[0] << endl;
	for (int g = 0; g < i; g++)
	{
		if (int(A[g]) == sk)
		{
			ch++;
			//cout << "+" << endl;
		}
		//else cout << "-" << endl;
	}
	D[schk] = ch;
	cout << "Dsk = " << D[schk] << endl;
}
void Singleton::isved(const char fv[], int D[])
{
	ofstream fr(fv, ios::app);
	for (int g = 0; g < 10; g++)
	{
		fr << "Skaitmens " << g << " kiekis: " << D[g] << endl;
	}
}
void Singleton::paieskmaks(int D[], const char fv[])
{
	ofstream fr(fv);
	int check = D[0];
	int istat = 0;
	for (int f = 0; f < 10; f++)
	{
		if (D[f] > check)
		{
			check = D[f];
			istat = f;
		}
	}
	fr << "Daugiausiai buvo rasta " << istat << " skaitmenu. Ju kiekis = " << check << endl;
}