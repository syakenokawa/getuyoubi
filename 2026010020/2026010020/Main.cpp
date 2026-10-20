#include<iostream>
#include"Megumi.h"
#include"Inumaki.h"
#include"Gojo.h"

using namespace std;

int main()
{
	Megumi megumi;
	Inumaki inumaki;
	Gojo gojo;

Sorcerer* sorcerers[] =
{
	&megumi,
	 &inumaki,
	 &gojo
};

for (int i = 0; i < 3; i++)
{
	sorcerers[i]->SowStatus();
	sorcerers[i]->UseTechnique();

	cout << endl;
}

return 0;
}







