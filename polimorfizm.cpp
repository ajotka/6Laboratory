#include <iostream>

using namespace std;

class Figura
{
public:
   virtual void oblicz_pole()=0;				//virtualna Figura. Wiemy ze to figura, ale nie znamy ksztaltu
};


class Kolo :public Figura						//kolo dziedziczy po figurze
{
   float promien;
public:
   Kolo(float x)
   {
      promien=x;
   }
   virtual void oblicz_pole()					//virtual
   {
      cout<<"Pole kola: "<<3.14*promien*promien<<endl;
   }
};

int main()
{
	int promien;
	cout<<"Podaj promien: "; 
	cin>>promien;
    Kolo kolo(promien); 									//kolo o promieniu 2
	kolo.oblicz_pole();

    return 0;
}
