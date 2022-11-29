#pragma once
#include <iostream>
using namespace std;

class Contacts
{
	friend class NodeOfContacts;
	friend class ListOfContacts;
	friend ostream& operator<<(ostream& str, const Contacts& myContact);
private:
	string name;
	int number;

public:
	void setName();
	void setNumber();
	string getName();
	int getNumber();
	Contacts();
};

