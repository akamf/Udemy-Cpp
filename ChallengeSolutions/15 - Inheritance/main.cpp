#include "CheckAccount.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
#include "utils.h"

#include <iostream>
#include <vector>

int main()
{
    std::cout.precision(2);
    std::cout << std::fixed;

    std::vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Inger"});
    accounts.push_back(Account {"Gustav", 2000});
    accounts.push_back(Account {"Bert", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    std::vector<SavingsAccount> save_accounts;
    save_accounts.push_back(SavingsAccount {});
    save_accounts.push_back(SavingsAccount {"Greta"});
    save_accounts.push_back(SavingsAccount {"Joakim", 2000});
    save_accounts.push_back(SavingsAccount {"Sarah", 5000, 5.0});

    display(save_accounts);
    deposit(save_accounts, 1000);
    withdraw(save_accounts, 2000);
    
    std::vector<CheckAccount> check_accounts;
    check_accounts.push_back(CheckAccount {});
    check_accounts.push_back(CheckAccount {"Vegard"});
    check_accounts.push_back(CheckAccount {"Didrik", 2000});
    check_accounts.push_back(CheckAccount {"Nellie", 5000});

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);
    
    std::vector<TrustAccount> trust_accounts;
    trust_accounts.push_back(TrustAccount {});
    trust_accounts.push_back(TrustAccount {"Benny"});
    trust_accounts.push_back(TrustAccount {"Nina", 2000});
    trust_accounts.push_back(TrustAccount {"Tina", 5000});

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    deposit(trust_accounts, 5000);
    withdraw(trust_accounts, 2000);
    withdraw(trust_accounts, 50);
    withdraw(trust_accounts, 1000);
    withdraw(trust_accounts, 100);

    return 0;
}