//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class HotDogsStands {
//public:
//	HotDogsStands(string id, int soldNumber);
//
//	void justSold();
//	int numberOfHotDogsSold();
//	string getIdNumber();
//	static int getTotal();
//private:
//
//	string idNumber;
//	int soldHotDogs;
//	static int totalHotDogsSold;
//
//};
//
//int HotDogsStands::totalHotDogsSold = 0;
//
//int main() {
//	HotDogsStands stand1("123",3), stand2("456",5), stand3("789",7);
//	cout << "Stand with ID number: '" << stand1.getIdNumber() << "' has sold: "
//		 << stand1.numberOfHotDogsSold() << endl;
//
//	cout << "Stand with ID number: '" << stand2.getIdNumber() << "' has sold: "
//		<< stand2.numberOfHotDogsSold() << endl;
//
//	cout << "Stand with ID number: '" << stand3.getIdNumber() << "' has sold: "
//		<< stand3.numberOfHotDogsSold() << endl;
//
//	cout << "Total number of hot dogs sold: " << HotDogsStands::getTotal() << endl;
//	stand1.justSold();
//	stand1.justSold();
//
//	cout << "Stand with ID number: '" << stand1.getIdNumber() << "' has sold: "
//		<< stand1.numberOfHotDogsSold() << endl;
//
//	cout << "Total number of hot dogs sold: " << HotDogsStands::getTotal() << endl;
//
//	HotDogsStands stand4("9999", 20);
//
//	cout << "Stand with ID number: '" << stand4.getIdNumber() << "' has sold: "
//		<< stand4.numberOfHotDogsSold() << endl;
//	cout << "Total number of hot dogs sold: " << HotDogsStands::getTotal() << endl;
//
//	system("pause");
//	return 0;
//}
//HotDogsStands::HotDogsStands(string id, int soldNumber)
//	:idNumber(id), soldHotDogs(soldNumber)
//{
//	totalHotDogsSold += soldHotDogs;
//}
//void HotDogsStands::justSold() {
//
//	soldHotDogs++;
//	totalHotDogsSold++;
//}
//int HotDogsStands::numberOfHotDogsSold() {
//	return soldHotDogs;
//}
//int HotDogsStands::getTotal() {
//	return totalHotDogsSold;
//}
//string HotDogsStands::getIdNumber() {
//	return idNumber;
//}