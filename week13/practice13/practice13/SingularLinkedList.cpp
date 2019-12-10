#include <iostream>
using namespace std;
class Node {
public:
	string data;
	Node* next;
	Node(string aData, Node* aNext) {
		data = aData;
		next = aNext;
	}
	//way to get data from the node
	string getData() {
		return data;
	}
	//need function to return next
	Node* Next() {
		return next;
	}
	//append new node function
	void setNext(Node* aNext) {
		next = aNext;
	}
};
class LList
{
public:
	//every linked list must start with a head node
	Node* head;
	LList() {
		//constructor, set head to null
		head = NULL;
	}
	void Append(string data) {
		Node* newNode = new Node(data, NULL);
		//make temp pointer to list
		Node* tmp = head;
		if (tmp != NULL) {
			while (tmp->Next() != NULL) {
				tmp = tmp->Next();
			}
			//put not in right position
			tmp->setNext(newNode);
		}
		else {
			head = newNode; //if not other nodes make new node the head
		}
		
	}
	void Delete(string data) {
		//make temp pointer and point to head
		Node* tmp = head;
		if (tmp == NULL)
			return;
		if (tmp->Next() == NULL)
		{
			//if at end of list
			delete tmp;
			head = NULL;
		}
		else {
			//find previous node
			Node* prev = tmp;
			do {
				if (tmp->getData() == data)
					break;//we are finished then
				prev = tmp;
				tmp = tmp->Next();
			} while (tmp != NULL);
			prev->setNext(tmp->Next());
			delete tmp;
		}
	}
	void Print() {
		//make temp node and set equal to head
		Node* tmp = head;
		//check if empty list
		if (tmp == NULL) {
			cout << "Empty List" << endl;
			return;
		}
		//test if first node next pointer is null then write out data
		if (tmp->Next() == NULL)
		{
			cout << tmp->getData();
			cout << "-->";
			cout << "NULL" << endl;
		}
		else {
			//otherwise more than one node
			do {
				//display data from current node
				cout << tmp->getData();
				cout << "-->";
				tmp = tmp->Next();
			} while (tmp != NULL);
			cout << "NULL" << endl;
		}
	}

};
int main() {

	LList names;
	names.Append("Raymond");
	names.Print();
	names.Append("Steve");
	names.Print();
	names.Append("Joe");
	names.Print();

	names.Delete("Joe");
	names.Print();
	names.Delete("Steve");
	names.Print();
	names.Delete("Raymond");
	names.Print();
	system("pause");
	return 0;
}