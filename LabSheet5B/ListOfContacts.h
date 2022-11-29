#pragma once
#include "Contacts.h"
#include "NodeOfContacts.h"

class ListOfContacts
{
	friend class NodeOfContacts;
	friend ostream& operator<<(ostream& str, const ListOfContacts& myList);
private:
	NodeOfContacts* head;
public:
	ListOfContacts();

	bool insertFront(Contacts);
	void displayList();
	/*ostream& operator<<(ostream& str, const Contacts& myContact);*/
	Contacts deleteFront();


	~ListOfContacts();
};