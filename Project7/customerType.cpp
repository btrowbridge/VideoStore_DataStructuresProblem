#include "customerType.h"

customerType::customerType(string f, string l)
{
	fname = f;
	lname = l;
}

string customerType::getFullName() const
{
	return fname + " " + lname;
}

string customerType::getFirstName() const
{
	return fname;
}

string customerType::getLastName() const
{
	return lname;
}

void customerType::setFisrtName(string name)
{
	fname = name;
}

void customerType::setFirstName(string name)
{
	fname = name;
}

void customerType::checkOut(videoType video)
{
}

void customerType::checkIn(videoType video)
{
	
}
