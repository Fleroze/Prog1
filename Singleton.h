#include <string>

class Singleton {
public:
	static Singleton* Instance();
	void writeToLogFile();
	void skait(const char fv[], char A[], int &i);
	void paiesk(char A[], int D[], int i, int sk, int schk);
	void isved(const char fv[], int D[]);
	void paieskmaks(int D[], const char fv[]);

private:
	Singleton() {};  // Private so that it can  not be called
	Singleton(Singleton const&) {};             // copy constructor is private
	Singleton& operator=(Singleton const&) {};  // assignment operator is private
	static Singleton* m_pInstance;
};