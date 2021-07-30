#include <bank.h>
#include<iostream>

using namespace std;

Bank::Bank(void)
{
    accountsNumber = 0;
}

Bank::~Bank(void)
{
}

int Bank::getAccountsNumber()
{
    return accountsNumber;
}

bool Bank::openAccount(string firstName, string lastName, string ssn, int accountNumber, string accountType, double balance)
{
    if (addAccount(firstName, lastName, ssn, accountNumber, accountType, balance, 1))
    {
        int index = findAccount(accountNumber);
        if (index>=0)
        {
            _accounts[index]->open();
        }
        return true;
    }
    return false;
}

bool Bank::addAccount(string firstName, string lastName, string ssn, int accountNumber, string accountType, double balance, int status)
{
    if (accountsNumber<MAX_NUM - 1 && findAccount(accountNumber) == -1)
    {
        Name name(firstName, lastName);
        Customer customer(name, ssn);
        _accounts[accountsNumber] = new Account(customer, balance, accountNumber, accountType, status);
        accountsNumber++;
        return true;
    }
    return false;
}

int Bank::findAccount(int accountNumber)
{
    for (int i = 0; i<accountsNumber; i++)
    {
        if (_accounts[i]->getAccountNumber() == accountNumber)
            return i;
    }
    return -1;
}

int Bank::findAccountSSN(string ssn)
{
    for (int i = 0; i<accountsNumber; i++)
    {
        if (_accounts[i]->getCustomer().getSSN() == ssn)
            return i;
    }
    return -1;
}

Account* Bank::getAccount(int index)
{
    return _accounts[index];
}

bool Bank::deleteAccount(int index)
{
    if (index >= 0 && index<accountsNumber)
    {
        for (int i = index; i<accountsNumber; i++)
            _accounts[i] = _accounts[i + 1];

        accountsNumber--;
        return true;
    }
    else {
        return false;
    }
}




















