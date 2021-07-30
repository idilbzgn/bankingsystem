#include "name.h"
#include <iostream>
#include <name.h>

using namespace std;

Name::Name(void)
{
}

Name::~Name(void)
{
}

Name::Name(const Name& name)
{
    _firstName = name._firstName;
    _lastName = name._lastName;
}

Name::Name(string firstName, string lastName)
{
    _firstName = firstName;
    _lastName = lastName;
}

string Name::getFirstname()
{
    return _firstName;
}

string Name::getLastname()
{
    return _lastName;
}
