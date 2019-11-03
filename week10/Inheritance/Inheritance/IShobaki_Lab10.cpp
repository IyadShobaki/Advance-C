/*  Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Week 10 (Chapter 14 lab) Inheritance
	10 / 30 / 2019
*/
#include <iostream>
#include <string>
using namespace std;

//abstract base class
class House
{
protected:
	string name;
public:
	House(string n)
	{
		name = n;

	}

	void setName(string n)
	{
		name = n;
	}

	string getName() const
	{
		return name;
	}


	//pure virtual function
	virtual double getExpenses() const = 0;
};
//first child class
class DetachedHouse : public House
{
	double taxesPerYear;
	double utilitiesPerMonth;
	

public:
	DetachedHouse(string t, double tax, double util) : House(t)
	{
		taxesPerYear = tax;
		utilitiesPerMonth = util * 12;
	}

	void setTaxes(double tax)
	{
		taxesPerYear = tax;
	}

	double getTaxes() const
	{
		return taxesPerYear;
	}
	void setUtilities(double util)
	{
		utilitiesPerMonth = util * 12;
	}

	double getUtilities() const
	{
		return utilitiesPerMonth;
	}
	virtual double getExpenses() const
	{
		return taxesPerYear + utilitiesPerMonth;
	}

};

//second child class

class Apartment : public House
{
	double rentPerMonth;
	double utilitiesPerMonth;
public:
	Apartment(string n, double r, double u) : House(n)
	{
		rentPerMonth = r * 12;
		utilitiesPerMonth = u * 12;
	}
	void setRent(double r)
	{
		rentPerMonth = r * 12;
	}
	double getRent() const
	{
		return rentPerMonth;
	}
	void setUtilities(double util)
	{
		utilitiesPerMonth = util * 12;
	}

	double getUtilities() const
	{
		return utilitiesPerMonth;
	}
	virtual double getExpenses() const
	{
		return rentPerMonth + utilitiesPerMonth;
	}
};



int main()
{

	House* houses[2] = { new DetachedHouse("Family House", 10000, 1000), 
		new Apartment("Green House Apartment",1000, 500) };

	
	for (int i = 0; i < 2; i++)
		cout << houses[i]->getName() << " Expenses per year = $" << houses[i]->getExpenses() << endl;


	system("pause");
	return 0;
}