/*  Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Week 4 (Chapter 8 lab)
	9 / 22 / 2019
*/
#include<iostream>
#include<cmath>  // This library is needed because...(to perform mathematical operations)
using namespace std;
class Complex
{
public:
	Complex();   //There are no parameters because... its a default constructor
	Complex(double); //There is one parameter because...its a constructor with one argument
	Complex(double, double);//There are two parameters because...its a constructor with two argument
	double get_Real();
	void set_Real(double);
	double get_Imaginary();
	void set_Imaginary(double);
	friend ostream& operator << (ostream& out, Complex& r); // << operator function is made friend of this class so 
															// that it can access private members (overload output function)
	friend istream& operator >> (istream& in, Complex& r);// >> operator function is made friend of this class so 
														// that it can access private members (overload input function)
private:
	double real;
	double imaginary;
};

const Complex operator + (Complex& cl, Complex& c2); //Declare overload operator + (adding) function 
const Complex operator - (Complex& c1, Complex& c2); //Declare overload operator - (subtracting) function 
const Complex operator * (Complex& c1, Complex& c2); //Declare overload operator * (multiplying) function 
const Complex operator / (Complex& c1, Complex& c2); //Declare overload operator / (dividing) function 
bool operator == (Complex& c1, Complex& c2); //Declare overload operator == ( equality comparison operator ) function 

Complex::Complex() //Initialize the class variables in the default constructor
{
	real = 0;
	imaginary = 0;
}

Complex::Complex(double r, double i) //Two arguments constructor. Assign the class variables values
									//to the parameters values
{
	real = r;
	imaginary = i;
}
Complex::Complex(double realPart) //One argument constructor. Assign one class variable value to the parameter
								//and initialize the other one
{
	real = realPart;
	imaginary = 0;
}

double Complex::get_Real() //get method to access the private variable "real" and return its value
{
	return real;
}

void Complex::set_Real(double r) //set method to acces the private variable "real" and change its value
{
	real = r;
}

double Complex::get_Imaginary() //get method to access the private variable "imaginary" and return its value
{
	return imaginary;
}

void Complex::set_Imaginary(double i) //set method to acces the private variable "imaginary" and change its value
{
	imaginary = i;
}

const Complex operator + (Complex& c1, Complex& c2)  //Define the overload operator + (adding) function
{
	double a = c1.get_Real() + c2.get_Real();
	double b = c1.get_Imaginary() + c2.get_Imaginary();
	return Complex(a, b);
}

const Complex operator - (Complex& c1, Complex& c2) //Define the overload operator - (subtracting) function
{
	double a = c1.get_Real() - c2.get_Real();
	double b = c1.get_Imaginary() - c2.get_Imaginary();
	return Complex(a, b);
}

const Complex operator * (Complex& c1, Complex& c2) //Define the overload operator * (multiplying) function
{
	double a = (c1.get_Real() * c2.get_Real()) - (c1.get_Imaginary() * c2.get_Imaginary());
	double b = (c1.get_Real() * c2.get_Imaginary()) + (c1.get_Imaginary() * c2.get_Real());
	return Complex(a, b);
}

const Complex operator / (Complex& c1, Complex& c2) //Deifne the overload operator / (dividing) function
{
	double b = c1.get_Imaginary() * c2.get_Real();
	double a = c1.get_Real() * c2.get_Imaginary();
	return Complex(a, b);
}

bool operator == (Complex& c1, Complex& c2) //Define the overload operator == (equality comparison operator) function
{
	if (c1.get_Real() == c2.get_Real() && c1.get_Imaginary() == c2.get_Imaginary())
		return true;
	else
		return false;
}

ostream& operator << (ostream& out, Complex& r) //Define the overload operator << (output) function
{
	double a = r.get_Real();
	double b = r.get_Imaginary();

	if (a != 0)out << a;

	if (b < 0) out << "-" << abs(b) << "i";
	if (b > 0 && b != 1) out << "+" << b << "i";
	if (b == 0) out << "0";
	if (b == 1 && a != 0) out << "+" << "i";
	if (b == 1 && a == 0) out << "i";
	return out;
}

istream& operator >> (istream& in, Complex& r) //Define the overload operator >> (input) function
{
	double a, b;
	char plus, i;
	in >> a;
	in >> plus;
	in >> b;
	in >> i;
	if (plus != '+' && plus != '-')
	{
		cout << "No plus or minus found " << endl;
	}
	if (i != 'i')
	{
		cout << "no i found " << endl;
	}
	r.set_Real(a);
	r.set_Imaginary(b);
	return in;
}

void main()
{
	const Complex i(0, 1);
	Complex c1;
	Complex c2;

	cout << "Enter complex 1 in ths format ---> #+#i " << endl;
	cin >> c1;
	cout << "Enter complex2" << endl;
	cin >> c2;

	cout << "\t c1 is: " << c1 << "\t c2 is:  " << c2 << endl << endl;
	cout << "Adding " << c1 << " plus " << c2 << endl;

	Complex t = c1 + c2;
	cout << c1 << " plus" << endl << c2 << endl << "equals \t" << t << endl << endl;

	cout << "Subtracting " << c1 << " minus " << c2 << endl;
	t = c1 - c2;
	cout << c1 << " minus" << endl << c2 << endl << "equals \t" << t << endl << endl;

	cout << "Multiplying " << c1 << " times " << c2 << endl;
	t = c1 * c2;
	cout << c1 << " times" << endl << c2 << endl << "equals \t" << t << endl << endl;

	cout << "Evaluating ..." << endl;
	if (c2 == c1)
		cout << "They are equal" << endl;
	else
		cout << "They are not equal" << endl;

	system("pause");
	return;
}

