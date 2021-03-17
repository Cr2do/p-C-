#include<iostream>
#include<stdlib.h>
#include"Complexe.h"
#include<cmath>
#include<string>
 using namespace std;


Complexe::Complexe(float Ree ,float Imm)
{
  Re=Ree;
  Im=Imm;
}

Complexe:: ~Complexe()
{
}

float Complexe::getRe()
{
  return Re;
}

float Complexe::getIm()
{
 return Im;
}

void Complexe::setRe(float Reel)
{
 Re=Reel;
}

void Complexe::setIm(float Imag)
{
 Im=Imag;
}

void Complexe::afficher_comp()
{
  if(Re==0)
   {   
    if(Im<0)
	{
	  if(Im==-1)		
	    cout <<"-" <<p <<endl;
	   else 
	    cout<<Im << p << endl;
	}
    if(Im==0)
	cout<<"Le nombre complexe entre est vide" <<endl;    	
    if(Im>0)
	{
		if(Im==1)
		  cout <<plus <<p <<endl;
		else 
	 	 cout<< Im <<p  <<endl;
	}
   }
   else 
   {
	if(Im<0)
	{
	  if(Im==-1)		
	  cout <<Re <<"-" <<p <<endl;	
	 else
	 cout << Re << Im << p <<endl;
	}
	if(Im==0)
	  cout <<Re <<endl;
	
		
	if(Im>0)
	{
	  if(Im==1)
	  cout <<Re <<plus <<p <<endl;
	  else 
	   cout <<Re <<plus <<Im <<p <<endl;
	}
   }    
   
}

/*Complexe somm_comp(Complexe Comp1,Complexe Comp2)
{
    float Re1=Comp1.getRe();
    float Re2=Comp2.getRe();
    float Im1=Comp1.getIm();
    float Im2=Comp2.getIm();
   
    float f_Re=Re1+Re2;
    float f_Im=Im1+Im2;
  Complexe final_comp(f_Re,f_Im);
return final_comp;	
}*/

const Complexe Complexe::operator+(const Complexe& Com)
{
	this->Re=this->Re + Com.Re;
	this->Im=this->Im + Com.Im;

	return *this;
}

 /*Complexe operator*(Complexe c1, Complexe c2)

{
  float a=c1.getRe(),b=c1.getIm(),x=c2.getRe(),y=c2.getIm();
  float pf_re=(a*x-b*y) , pf_im=(a*y+b*x);

 Complexe produit(pf_re,pf_im);

return produit;
}*/


const Complexe Complexe::operator*(const Complexe& Com)
{
	   float a=this->Re ,b=this->Im,x=Com.Re , y=Com.Im;
	this->Re=(a*x-b*y);
	this->Im=(a*y+b*x);

	return *this;
}
/*Complexe operator-( Complexe C1 , Complexe C2 )
{
     float r1=C1.getRe(), r2=C2.getRe(), i1=C1.getIm(), i2=C2.getIm();
     float f_r=r1-r2 , f_i=i1-i2;

   	Complexe resultat(f_r,f_i);

	return resultat;
}*/
const Complexe Complexe::operator-(const Complexe& Com)
{
	this->Re=this->Re - Com.Re;
	this->Im=this->Im - Com.Im;

	return *this;
}

/*Complexe operator/(Complexe C1,Complexe C2)
{
  float a=C1.getRe(), b=C1.getIm(), x=C2.getRe(), y=C2.getIm();
  float div=(x*x + y*y);
 float reel=((a*x+b*y)/div) ,imaginaire=((b*x-a*y)/div);

 Complexe resultat(reel,imaginaire);

return resultat;
}*/

const Complexe Complexe::operator/(const Complexe& Com)
{
   float div=(Com.Re*Com.Re + Com.Im*Com.Im);
   float a=this->Re ,b=this->Im,x=Com.Re , y=Com.Im;

 this->Re=((a*x+b*y)/div);

 this->Im=((b*x-a*y)/div);

	return *this;
}
