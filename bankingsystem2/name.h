#ifndef NAME_H
#define NAME_H
#include <QObject>
#include <QString>
using namespace std;

class Name
{
    string _firstName;
    string _lastName;
public:
    Name(void);
    Name(const Name& name);
    Name(string firstName, string lastName);
    ~Name(void);

    string getFirstname();
    string getLastname();
};
#endif // NAME_H
