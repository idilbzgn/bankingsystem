#include "transaction.h"
#include <iostream>


using namespace std;

Transaction::Transaction()
{
}

Transaction::Transaction(string transactionType, double amount)
{
    _transactionType = transactionType;
    _amount = amount;
}

Transaction::Transaction(string transactionType)
{
    _transactionType = transactionType;
    _amount = 0.0;
}

Transaction::Transaction(const Transaction& transaction)
{
    _transactionType = transaction._transactionType;
    _amount = transaction._amount;
}

Transaction::~Transaction(void)
{
}

string Transaction::getTransactionType()
{
    return _transactionType;
}

double Transaction::getAmount()
{
    return _amount;
}
