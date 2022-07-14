#include <iostream>
using namespace std;
void main()
{
	int listaNumere[10] = { 5,10,20,40,80 };
	int nrNumere = 5;
	int nrDeInserat;
	cin >> nrDeInserat;
	


	//Inserare numar intr-un vector ordonat.
	int aux;
	bool isInserted = false;  //Are rolul de a retine daca s-a inserat elementul.
	for (int i = 0;i < nrNumere+1;i++)
	{
		//Daca s-a inserat, incepem translatarea
		if (isInserted == true)
		{
			int aux2;
			aux2 = listaNumere[i];
			listaNumere[i] = aux;
			aux = aux2;
		}
		//Adaugarea numarului de inserat si extragerea numarului de la respectiva pozitie.
		if (nrDeInserat < listaNumere[i] && isInserted != true)
		{
			aux = listaNumere[i];
			listaNumere[i] = nrDeInserat;
			isInserted = true;
		}
		
	}
	nrNumere++;
	///


	for (int i = 0;i < nrNumere;i++)
	{
		cout << "numar[" << i << "]=" << listaNumere[i] << endl;
	}


	int numberList[10] = { 30,4,20,45,12 };
	int nrNumere2 = 5;
	int nrDeInserat2;
	cin >> nrDeInserat2;
	int pozitiePentruInserat;
	cin >> pozitiePentruInserat;

	//Inserarea unui element la o pozitie data intr-un vector.
	//a=nrDeInserat2   b=numberList[pozitiePentruInserat]
	int auxiliar;
	auxiliar = numberList[pozitiePentruInserat];
	numberList[pozitiePentruInserat] = nrDeInserat2;
	nrDeInserat2 = auxiliar;
	for (int i = pozitiePentruInserat + 1;i < nrNumere2 + 1;i++)
	{
		//a=nrDeInserat2(sau auxiliar)   b=numberList[i]
		int auxiliar2;
		auxiliar2 = numberList[i];
		numberList[i] = nrDeInserat2;
		nrDeInserat2 = auxiliar2;
	}
	nrNumere2++;
	/// 



	for (int i = 0;i < nrNumere2;i++)
	{
		cout << "numar[" << i << "]=" << numberList[i] << endl;
	}











}