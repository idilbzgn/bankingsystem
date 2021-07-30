#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QObject>
#include<QString>

using namespace std;
class Transaction

{
    string _transactionType;
    double _amount;
public:
    Transaction();
    Transaction(string transactionType, double amount);
    Transaction(string transactionType);
    Transaction(const Transaction& transaction);
    ~Transaction(void);

    string getTransactionType();
    double getAmount();
};
#endif // TRANSACTION_H
