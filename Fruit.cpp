//client 

#include"Fruit.h"
#include <string>

using namespace std;


Fruit::Fruit(){

		Amount=0;
		Name=' ';
		Price=0.0;

};

	
Fruit::Fruit (int f2,string f3, float f4)
	{
		Amount = f2;
		Name = f3;
		Price = f4;
	}

void Fruit::setAmount (int f2)
	{
		Amount=f2;
	}

int Fruit::getAmount()
	{
		return Amount;
	}

void Fruit::setName (string f3)
	{
		Name=f3;
	}

string Fruit::getName()
	{
		return Name;
	}
void Fruit::setPrice(float f4)
	{
		Price=f4;
	}

float Fruit::getPrice()
	{
		return Price;
	}


