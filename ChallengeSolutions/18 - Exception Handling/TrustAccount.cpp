#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double interest_rate) : SavingsAccount{name, balance, interest_rate}, num_withdrawals{0}
{}

bool TrustAccount::deposit(double amount)
{
    if (amount >= get_deposit_bonus_threshold())
        amount += get_deposit_bonus();
    
    return SavingsAccount::deposit(amount);
}
bool TrustAccount::withdraw(double amount)
{
    if ((this->get_num_withdrawals() >= get_max_withdrawals()) || (amount > (get_balance() * get_withdrawal_limit())))
        return false;

    num_withdrawals++;
    return Account::withdraw(amount);
}
void TrustAccount::print(std::ostream& os) const
{
    os.precision(2);
    os << std::fixed;
    os << "[Trust Account: " << get_name() << " : " << get_balance() << ", " << get_interest_rate() << "%, withdrawals: " << get_num_withdrawals() << "]";
}
