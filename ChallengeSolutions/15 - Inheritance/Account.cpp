#include "Account.h"

std::ostream& operator<<(std::ostream& os, const Account& account)
{
    os << "[Account: " << account.get_name() << " : " << account.get_balance() << "]";
    return os;
}

Account::Account(std::string name, double balance) : name{name}, balance{balance}
{}

bool Account::deposit(double amount)
{
    if (amount < 0)
        return false;
    
    balance += amount;
    return true;
}
bool Account::withdraw(double amount)
{
    if ((balance - amount) < 0)
        return false;

    balance -= amount;
    return true;
}
