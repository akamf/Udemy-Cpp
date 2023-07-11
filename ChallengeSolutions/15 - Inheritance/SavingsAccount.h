#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_

#include "Account.h"

#include <iostream>
#include <string>

class SavingsAccount : public Account
{
    friend std::ostream& operator<<(std::ostream& os, const SavingsAccount& account);

public:
    SavingsAccount(
        std::string name = default_name,
        double balance = default_balance,
        double interest_rate = default_interest_rate
    );
    ~SavingsAccount() = default;

    double get_interest_rate() const { return this->interest_rate; }
    void set_interest_rate(double interest_rate) { this->interest_rate = interest_rate; }

    bool deposit(double amount);

protected:
    double interest_rate;

private:
    static constexpr const char* default_name = "Default Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;

};

#endif
