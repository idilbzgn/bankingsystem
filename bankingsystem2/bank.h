#ifndef BANK_H
#define BANK_H
#define MAX_NUM 100
#include <iostream>
#include <account.h>
#include <QObject>
using namespace std;

#include <QObject>
class Bank
{
    Account* _accounts[MAX_NUM];
    int accountsNumber;
public:
    Bank(void);
    ~Bank(void);

    bool openAccount(string firstName, string lastName, string ssn, int accountNumber, string accountType, double balance);
    bool addAccount(string firstName, string lastName, string ssn, int accountNumber, string accountType, double balance, int status);

    int findAccount(int accountNumber);
    int findAccountSSN(string ssn);
    Account* getAccount(int index);
    bool deleteAccount(int index);
    int getAccountsNumber();


};


#endif // BANK_H
