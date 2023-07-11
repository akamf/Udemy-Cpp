#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account
{
    friend std::ostream& operator<<(std::ostream& os, const Account& account);

public:
    Account(std::string name = default_name, double balance = default_balance);
    ~Account() = default;

    std::string get_name() const { return this->name; }
    void set_name(std::string name) { this->name = name; }
    double get_balance() const { return this->balance; }
    void set_balance(double balance) { this->balance = balance; }

    bool deposit(double amount);
    bool withdraw(double amount);

protected:
    std::string name;
    double balance;

private:
    static constexpr const char* default_name = "Default Base Account";
    static constexpr double default_balance = 0.0;

};

#endif
