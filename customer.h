#include "header_library.h"

class Customer
{
public:
	string name;
	string surname;
	string phone;
	string email;
	Customer(string name, string surname, string phone, string email) : name(name), surname(surname), phone(phone), email(email) {}
	~Customer() = default;
};
