#ifdef FRUIT_H
#define FRUIT_H

class Fruit {

private:

	int newAmount;
	char  newName;
	float newPrice;

public:

	Fruit();
	Fruit( int f2, char f3, float f4);


	void setNewamount(int f2);
	int getNewamount();
	void setNewname(char f3);
	char getNewname ();
	void setNewprice(float f4);
	float getNewprice();

};

#endif
