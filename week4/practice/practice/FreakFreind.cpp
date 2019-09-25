#include <iostream>
using namespace std;

class SuperFreak {
public:
	SuperFreak() { stuff = 0; }
private:
	int stuff;

	friend void freakFriend(SuperFreak &otherStuff);
};
void freakFriend(SuperFreak &otherStuff)
{
	otherStuff.stuff = 99;
	cout << otherStuff.stuff << endl
}
void main() {

	SuperFreak bob;
	freakFriend(bob);

}