#include<iostream>
#include<vector>
#include"Fruit.h"
#include<string>

using namespace std ;

int main()
{


Fruit ob;
Fruit ob2=({700,Orange,1.00});

vector <Fruit> f;

	f.push_back(ob);
	f.push_back(ob2);
	f.push_back({250, Bananas,0.75});
	f.push_back({1000,Apples,2.00});


for (auto x:f)
	{
		cout << x.getAmount() << x.getName() << x.getPrice() <<endl;
	}

	return 0;
}
