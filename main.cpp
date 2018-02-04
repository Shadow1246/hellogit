#include<iostream>
#include<vector>
#include"Fruit.h"
#include<string>

using namespace std ;

int main()
{


Fruit ob;


vector <Fruit> f;

	f.push_back(ob);
	f.push_back(ob);
	f.push_back(ob);
	f.push_back(ob);


for (auto x:f)
	{
		cout << x.getAmount() << x.getName() << x.getPrice() <<endl;
	}

	return 0;
}
