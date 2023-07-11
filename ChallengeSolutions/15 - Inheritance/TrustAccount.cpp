#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double interest_rate) : SavingsAccount{name, balance, interest_rate}
{}

bool TrustAccount::deposit(double amount)
{
    if (amount >= get_deposit_bonus_threshold())
        amount += get_deposit_bonus();
    
    return SavingsAccount::deposit(amount);
}
bool TrustAccount::withdraw(double amount)
{
    if ((this->get_num_withdrawals() >= get_max_withdrawals()) || (amount > (balance * get_withdrawal_limit())))
        return false;

    num_withdrawals++;
    return Account::withdraw(amount);
}
