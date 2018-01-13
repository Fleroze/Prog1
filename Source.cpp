#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include "Singleton.h"

using namespace std;
const char CDfv[] = "Tekstas.txt";
const char CRfv[] = "Rezultatai.txt";
void skait(const char fv[], char A[], int &i);
void paiesk(char A[], int D[], int i, int sk, int schk);
void isved(const char fv[], int D[]);
void paieskmaks(int D[], const char fv[]);

int main()
{
	char A[100000];
	int D[11];
	int i = 0;
	char h = '0';
	char k = '9';
	cout << int(h) << " " << int(k) << endl;
	Singleton::Instance()->skait(CDfv, A, i);
	for (int g = 0; g < i; g++)
	{
		cout << A[g];
	}
	cout << endl;
	int schk = 0;
	for (int d = 48; d < 59; d++)
	{
		cout << d << endl;
		Singleton::Instance()->paiesk(A, D, i, d, schk);
		schk++;
	}
	Singleton::Instance()->paieskmaks(D, CRfv);
	Singleton::Instance()->isved(CRfv, D);
	return 0;
}
/*void skait(const char fv[], char A[], int &i)
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
void paiesk(char A[], int D[], int i, int sk, int schk)
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
void isved(const char fv[], int D[])
{
	ofstream fr(fv, ios::app);
	for (int g = 0; g < 10; g++)
	{
		fr << "Skaitmens " << g << " kiekis: " << D[g] << endl;
	}
}
void paieskmaks(int D[], const char fv[])
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
}*/