#include "customer.h"
#include <customer.h>
#include <iostream>
#include <QString>
using namespace std;
Customer::Customer(void)
{
}

Customer::~Customer(void)
{
}

Customer::Customer(const Customer& customer)
{
    _ssn = customer._ssn;
    _name = customer._name;
}

Customer::Customer(Name& name, string ssn)
{
    _ssn = ssn;
    _name = name;
}

Name& Customer::getName()
{
    return _name;
}

string Customer::getSSN()
{
    return _ssn;
}
