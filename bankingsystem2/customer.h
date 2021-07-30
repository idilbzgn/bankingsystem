#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <QObject>
#include <QString>
#include <name.h>
using namespace std;
class Customer
{
    string _ssn;
    Name _name;
public:
    Customer(void);
    Customer(const Customer& customer);
    Customer(Name& name, string ssn);
    ~Customer(void);

    Name& getName();
    string getSSN();
};

#endif // CUSTOMER_H
