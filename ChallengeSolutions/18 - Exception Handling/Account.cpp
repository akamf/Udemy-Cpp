#include "Account.h"


std::ostream& operator<<(std::ostream& os, const I_Printable& obj)
{
    obj.print(os);
    return os;
}

Account::Account(std::string name, double balance) : name{name}, balance{balance}
{
    if (balance < 0)
        throw IllegalBalanceException();
}

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
        throw InsufficientFundsException();

    balance -= amount;
    return true;
}
void Account::print(std::ostream& os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Account: " << get_name() << " : " << get_balance() << "]";
}
