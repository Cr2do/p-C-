#include<iostream>
#include<stdlib.h>
using namespace std;
#include "Complexe.h"

int main()
{
//	Complexe Comp(4,-3);
	float Re1,Re2,Im1,Im2;
  	cout  <<"Ici nous faisons les operations sur les nombres complexes" <<endl;
	cout <<"Pour commencer nous enregistrerons vos nombres"<<endl;
	cout <<"Entrer la partie reel du 1er nombre complexe" << endl;
	cin >> Re1;
	cout <<"Enter la imaginary part du 1er nombre complexe"<<endl;
	cin  >> Im1;
	cout  <<"Voici le premier nombre complexe:";
	Complexe Comp1(Re1,Im1);
	Comp1.afficher_comp();
	cout  <<"Entrer la partie reel du 2nd nombre complexe" << endl;
	cin  >> Re2;
	cout  <<"Enter la imaginary part du 2nd nombre complexe"<<endl;
	cin  >> Im2;
	cout  <<"Voici le second nombre complexe:";
	Complexe Comp2(Re2,Im2);
	Comp2.afficher_comp();
	int val;
	cout <<"Maintenant que voulez-vous faire comme operation? Tapez"<<endl;
	cout <<"1-Pour une addition" <<endl;
	cout <<"2-Pour une soustraction" <<endl;
	cout <<"3-Pour une multiplication" <<endl;
	cout <<"4-Pour une division" <<endl;
	cin >> val;
	 
	switch(val)
	{
	  case 1:{
		Complexe r=Comp1+Comp2;
		r.afficher_comp();
		break;}
          case 2:
		{Complexe re=Comp1-Comp2;
		re.afficher_comp();
		break;}
	  case 3:
		{Complexe res=Comp1*Comp2;
		res.afficher_comp();
		break;}
	  case 4:
		{Complexe resu=Comp1/Comp2; 
		resu.afficher_comp();
		break;}
	default :
          cout << "Selectionner un choix";
	cout <<"1-Pour une addition" <<endl;
	cout <<"2-Pour une soustraction" <<endl;
	cout <<"3-Pour une multiplication" <<endl;
	cout <<"4-Pour une division" <<endl;
	break; 
	}
return 0;
}
