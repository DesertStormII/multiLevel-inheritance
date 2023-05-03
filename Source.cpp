#include <iostream>

using namespace std;

class CatFamily {
public:
	void Claws(){
		cout << " Can scrath" << endl;
	}
	void Climb() {
		cout << " Can climb a tree" << endl;
	}
};

class Cats :public CatFamily {
public:
	void HomeAnimal() {
		cout << " Live at home" << endl;
	}

};
class CanadianSphynx:public Cats {
public:
	void Wool(){
		cout << " Doesn't have wool" << endl;
	}
};
int main()
{
	CanadianSphynx TheCat;
	cout << endl << "        About Canadian Sphynx" << endl;
	TheCat.Claws();
	TheCat.Climb();
	TheCat.HomeAnimal();
	TheCat.Wool();

	return 0;
}