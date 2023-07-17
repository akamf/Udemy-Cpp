#ifndef _CHECKACCOUNT_H_
#define _CHECKACCOUNT_H_

#include "Account.h"

#include <string>

class CheckAccount : public Account
{
public:
    CheckAccount(std::string name = default_name, double balance = default_balance);
    virtual ~CheckAccount() = default;

    double get_withdrawal_fee() const { return withdrawal_fee; }

    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream& os) const override;

private:
    static constexpr double withdrawal_fee = 1.5;
    static constexpr const char* default_name = "Default Check Account";
    static constexpr double default_balance = 0.0;
    
};


#endif
