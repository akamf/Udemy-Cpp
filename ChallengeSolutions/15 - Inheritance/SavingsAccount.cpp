#include "SavingsAccount.h"

std::ostream& operator<<(std::ostream& os, const SavingsAccount& account)
{
    os << "[Savings Account: " << account.get_name() << " : " << account.get_balance() << ", " << account.get_interest_rate() << "]";
    return os;
}

SavingsAccount::SavingsAccount(std::string name, double balance, double interest_rate) : Account{name, balance}, interest_rate{interest_rate}
{}

bool SavingsAccount::deposit(double amount)
{
    amount += (amount * interest_rate / 100);
    return Account::deposit(amount);
}