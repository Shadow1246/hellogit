//client 

#include"Fruit.h"


Fruit :: Fruit()

	{

		newAmount =0;
		newName =' ';
		newPrice= 0.0;
	}

	
Fruit :: Fruit (int f2,char f3, float f4);
	{
		newAmount= f2;
		newName=f3;
		newPrice=f4;
	}

void Fruit :: setAmount (int f2)
	{
		newAmount=f2;
	}

int Fruit :: getAmount()
	{
		return newAmount;
	}

void Fruit :: setName (char f3)
	{
		newName=f3;
	}

char Fruit:: getName ()
	{
		return newName;
	}
void Fruit:: setPrice(float f4);
	{
		newPrice=f4;
	}

float Fruit:: getPrice()
	{
		return newPrice
	}


