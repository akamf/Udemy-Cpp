#pragma once

#include "Account.h"

#include <iostream>
#include <string>

class SavingsAccount : public Account
{
public:
    SavingsAccount(
        std::string name = default_name,
        double balance = default_balance,
        double interest_rate = default_interest_rate
    );
    virtual ~SavingsAccount() = default;

    double get_interest_rate() const { return this->interest_rate; }
    void set_interest_rate(double interest_rate) { this->interest_rate = interest_rate; }

    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream& os) const override;

protected:
    double interest_rate;

private:
    static constexpr const char* default_name = "Default Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;

};

