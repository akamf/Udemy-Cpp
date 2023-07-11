#ifndef _TRUSTACCOUNT_H_
#define _TRUSTACCOUNT_H_

#include "SavingsAccount.h"

#include <string>

class TrustAccount : public SavingsAccount
{
public:
    TrustAccount(
        std::string name = default_name,
        double balance = default_balance,
        double interest_rate = default_interest_rate
    );
    ~TrustAccount() = default;

    int get_num_withdrawals() const { return this->num_withdrawals; }
    void reset_withdrawal_counter() { this->num_withdrawals = 0; }

    double get_deposit_bonus_threshold() const { return deposit_bonus_threshold; }
    double get_deposit_bonus() const { return deposit_bonus; }
    double get_withdrawal_limit() const { return withdrawal_limit; }
    int get_max_withdrawals() const { return max_withdrawals; }

    bool deposit(double amount);
    bool withdraw(double amount);

protected:
    int num_withdrawals;

private:
    static constexpr double deposit_bonus_threshold = 5000.0;
    static constexpr double deposit_bonus = 50.0;
    static constexpr double withdrawal_limit = 0.2;
    static constexpr int max_withdrawals = 3;

    static constexpr const char* default_name = "Default Trust Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;

};

#endif
