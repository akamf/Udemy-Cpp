#include "CheckAccount.h"

CheckAccount::CheckAccount(std::string name, double balance) : Account{name, balance}
{}

bool CheckAccount::deposit(double amount) { return Account::deposit(amount); }
bool CheckAccount::withdraw(double amount)
{
    amount += get_withdrawal_fee();
    return Account::withdraw(amount);
}
void CheckAccount::print(std::ostream& os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Check Account: " << get_name() << " : " << get_balance() << "]";
}
