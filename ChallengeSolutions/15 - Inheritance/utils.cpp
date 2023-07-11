#include "utils.h"

#include <iostream>

void display(const std::vector<Account>& accounts)
{
    std::cout << "\n=== Accounts ===========================" << std::endl;
    for (const auto& account : accounts)
        std::cout << account << std::endl;
}
void display(const std::vector<CheckAccount>& accounts)
{
    std::cout << "\n=== Check Accounts =====================" << std::endl;
    for (const auto& account : accounts)
        std::cout << account << std::endl;
}
void display(const std::vector<SavingsAccount>& accounts)
{
    std::cout << "\n=== Savings Accounts ===================" << std::endl;
    for (const auto& account : accounts)
        std::cout << account << std::endl;
}
void display(const std::vector<TrustAccount>& accounts)
{
    std::cout << "\n=== Trust Accounts =====================" << std::endl;
    for (const auto& account : accounts)
        std::cout << account << std::endl;
}

void deposit(std::vector<Account>& accounts, double amount)
{
    std::cout << "\n=== Depositing to Accounts =============" << std::endl;
    for (auto& account : accounts)
    {
        if (account.deposit(amount))
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        else
            std::cout << "Failed to deposit " << amount << " to " << account << std::endl;
    }
}
void deposit(std::vector<CheckAccount>& accounts, double amount)
{
    std::cout << "\n=== Depositing to Check Accounts =======" << std::endl;
    for (auto& account : accounts)
    {
        if (account.deposit(amount))
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        else
            std::cout << "Failed to deposit " << amount << " to " << account << std::endl;
    }
}
void deposit(std::vector<SavingsAccount>& accounts, double amount)
{
    std::cout << "\n=== Depositing to Savings Accounts =====" << std::endl;

    for (auto& account : accounts)
    {
        if (account.deposit(amount))
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        else
            std::cout << "Failed to deposit " << amount << " to " << account << std::endl;
    }
}
void deposit(std::vector<TrustAccount>& accounts, double amount)
{
    std::cout << "\n=== Depositing to Trust Accounts =======" << std::endl;
    for (auto& account : accounts)
    {
        if (amount >= 5000.0)
            std::cout << "Your deposit exceeds the amount $5000.0 and a bonus of " << account.get_deposit_bonus() << " will be added" << std::endl;
        
        if (account.deposit(amount))
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        else
            std::cout << "Failed to deposit " << amount << " to " << account << std::endl;
    }
}

void withdraw(std::vector<Account>& accounts, double amount)
{
    std::cout << "\n=== Withdrawing from Accounts ==========" << std::endl;
    for (auto& account : accounts)
    {
        if (account.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << account << std::endl;
        else
            std::cout << "Failed to withdraw " << amount << " from " << account << std::endl;
    }
}
void withdraw(std::vector<CheckAccount>& accounts, double amount)
{
    std::cout << "\n=== Withdrawing from Check Accounts ====" << std::endl;
    for (auto& account : accounts)
    {
        std::cout << "There is a withdrawal fee of " << account.get_withdrawal_fee() << " added to " << amount << std::endl; 
        if (account.withdraw(amount))
            std::cout << "Withdrew " << amount + account.get_withdrawal_fee() << " from " << account << std::endl;
        else
            std::cout << "Failed to withdraw " << amount + account.get_withdrawal_fee() << " from " << account << std::endl;
    }
}
void withdraw(std::vector<SavingsAccount>& accounts, double amount)
{
    std::cout << "\n=== Withdrawing from Savings Accounts ==" << std::endl;
    for (auto& account : accounts)
    {
        if (account.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << account << std::endl;
        else
            std::cout << "Failed to withdraw " << amount << " from " << account << std::endl;
    }
}
void withdraw(std::vector<TrustAccount>& accounts, double amount)
{
    std::cout << "\n=== Withdrawing from Trust Accounts ====" << std::endl;
    for (auto& account : accounts)
    {
        if (account.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << account << std::endl;
        else
            std::cout << "Failed to withdraw " << amount << " from " << account << std::endl;
    }
}