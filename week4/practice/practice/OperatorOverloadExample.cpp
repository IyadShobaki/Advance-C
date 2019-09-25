//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//	void setLength(int pLength)
//	{
//		length = pLength;
//	}
//	void Display()
//	{
//		cout << "Combined volume is " << volume << endl;
//	}
//	void Display2()
//	{
//		cout << "Length is " << length << endl;
//		cout << "Height is " << height << endl;
//	}
//	void setHeight(int pHeight)
//	{
//		height = pHeight;
//	}
//	// overload + operator to add two rectangle objects
//	Rectangle operator +(const Rectangle& bRect)
//	{
//		Rectangle pRect;
//		int rect1, rect2;
//		//Volume of one rectangle
//		rect1 = this->length * this->height;
//		rect2 = bRect.height * bRect.length;
//		pRect.volume = rect1 + rect2;
//		return pRect;
//	}
//	bool operator <(const Rectangle& bRect)
//	{
//		int rect1, rect2;
//		rect1 = this->length * this->height;
//		rect2 = bRect.height * bRect.length;
//		if (rect1 < rect2) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	void operator ++()
//	{
//		this->height++;
//		this->length++;
//	}
//
//private:
//	int length;
//	int height;
//	int volume;
//};
//int main() {
//
//	Rectangle newRect1, newRect2, newRect3;
//	newRect1.setLength(2);
//	newRect1.setHeight(2);
//	
//	newRect2.setLength(3);
//	newRect2.setHeight(2);
//
//	//here we add with the overload +
//	newRect3 = newRect1 + newRect2;
//	newRect3.Display();
//
//	if (newRect1 < newRect2) {
//		cout << "The volume of the first rectangle is less\n";
//	}
//
//	newRect1.Display2();
//	++newRect1;
//	newRect1.Display2();
//	system("pause");
//	return 0;
//}