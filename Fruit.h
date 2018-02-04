#ifndef FRUIT_H
#define FRUIT_H
#include <string>

using namespace std;

class Fruit {

private:

	int Amount;
	std::string  Name;
	float Price;

public:

	Fruit();
	Fruit( int , string, float);


	void setAmount(int );
	int getAmount();
	void setName(string);
	string getName ();
	void setPrice(float );
	float getPrice();

};

#endif
