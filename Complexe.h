#ifndef DEF COMPLEXE
#define DEF_COMPLEXE
#include<iostream>
using namespace std;
class Complexe
{
  public:
	Complexe( float Ree,float Imm);
	~Complexe();
	float getRe();
	float getIm();
	void setRe(float Reel);
	void setIm(float Imag);
	string p="i";
  	string plus="+";

	// la methode
	void afficher_comp();
	const Complexe operator+(const Complexe& Com);
	const Complexe operator*(const Complexe& Com);
	const Complexe operator-(const Complexe& Com);
	const Complexe operator/(const Complexe& Com);
	//Complexe operator/(Complexe C1,Complexe C2);
	
  private:
	float Re, Im;
};
//Complexe operator/(Complexe C1,Complexe C2);
#endif
