#include "CheckAccount.h"

CheckAccount::CheckAccount(std::string name, double balance) : Account{name, balance}
{}

bool CheckAccount::withdraw(double amount)
{
    amount += get_withdrawal_fee();
    return Account::withdraw(amount);
}