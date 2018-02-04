//client 

#include"Fruit.h"


Fruit::Fruit()

	{

		newAmount =0;
		newName =' ';
		newPrice= 0.0;
	}

	
Fruit::Fruit (int f2,char f3, float f4);
	{
		newAmount= f2;
		newName=f3;
		newPrice=f4;
	}

void Fruit::setnewAmount (int f2);
	{
		newAmount=f2;
	}

int Fruit::getnewAmount();
	{
		return newAmount;
	}

void Fruit::setnewName (char f3);
	{
		newName=f3;
	}

char Fruit::getnewName();
	{
		return newName;
	}
void Fruit::setnewPrice(float f4);
	{
		newPrice=f4;
	}

float Fruit::getnewPrice();
	{
		return newPrice
	}


