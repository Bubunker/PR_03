#include "math.h"
#include <cmath>
#include "iostream"
#include <string>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <stdio.h>

using namespace std;


class Dog_Person
{
public:
	int numb;
	string color;
	void display_1()
	{
		cout << "numb: " << numb << "\tcolor: " << color << endl;
	}

};
class Dog_Employee : public Dog_Person
{
public:
	string razmer;
	string klich;

	string eat;

	string run;

	void display_2()
	{
		cout << "numb: " << numb << "\tcolor: " << color << "\trazmer: " << razmer << "\tklich: " << klich << endl;
	}

	void Dog_eat()
	{
		cout << klich << " is eating " << eat << endl;
	}

	void Dog_run()
	{
		cout << klich << " is running to the " << run << endl;
	}
};

int main()
{
	/*Dog_Person tom;
	tom.numb = 1;
	tom.color = "grey";
	tom.display();
	*/

	Dog_Employee tom;
	tom.numb = 1;
	tom.color = "grey";
	tom.razmer = "big";
	tom.klich = "Tom";
	tom.eat = "meat";
	tom.run = "park";
	tom.display_2();

	Dog_Employee bob;
	bob.numb = 2;
	bob.color = "black";
	bob.razmer = "small";
	bob.klich = "Bob";
	bob.eat = "dog`s food";
	bob.run = "street";
	bob.display_2();

	tom.Dog_eat();
	bob.Dog_eat();

	tom.Dog_run();
	bob.Dog_run();

	return 0;
}