#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class I_Printable
{
    friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj);
    
public:
    virtual void print(std::ostream& os) const = 0;
    virtual ~I_Printable() = default;

};

class Account : public I_Printable
{
public:
    Account(std::string name = default_name, double balance = default_balance);
    virtual ~Account() = default;

    std::string get_name() const { return this->name; }
    void set_name(std::string name) { this->name = name; }
    double get_balance() const { return this->balance; }
    void set_balance(double balance) { this->balance = balance; }

    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual void print(std::ostream& os) const override;

protected:
    std::string name;
    double balance;

private:
    static constexpr const char* default_name = "Default Base Account";
    static constexpr double default_balance = 0.0;
};

#endif
