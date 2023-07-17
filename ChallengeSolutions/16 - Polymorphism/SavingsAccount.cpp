#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(std::string name, double balance, double interest_rate) : Account{name, balance}, interest_rate{interest_rate}
{}

bool SavingsAccount::deposit(double amount)
{
    amount += amount * (get_interest_rate() / 100);
    return Account::deposit(amount);
}
bool SavingsAccount::withdraw(double amount) { return Account::withdraw(amount); }
void SavingsAccount::print(std::ostream& os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[SavingsAccount: " << get_name() << " : " << get_balance() << ", " << get_interest_rate() << "%]";
}
