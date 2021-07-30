#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <transaction.h>
#include <customer.h>
#include <QObject>

using namespace std;

class Account
{
    Customer _customer;
    double _balance;
    int _accountNumber;
    string _accountType;
    int _status;

    int capacity;
    int transactionCount;
    Transaction* transactions;
public:
    Account(void);
    Account(Customer& customer, double balance, int accountNumber, string accountType, int status);
    Account(const Account& account);
    ~Account(void);

    void addTransaction(Transaction transaction);
    int getTransactionCount();
    Transaction getTransaction(int index);

    void open();
    void close();
    bool isClosed();

    double getBalance();
    Customer& getCustomer();
    int getAccountNumber();
    string getAccountType();
    void makeDeposit(double amount);
    bool makeWithdrawal(double amount);
};

#endif // ACCOUNT_H
