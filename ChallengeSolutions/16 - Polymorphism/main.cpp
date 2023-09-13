#include "CheckAccount.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
#include "utils.h"

#include <iostream>
#include <vector>

int main()
{
    CheckAccount acc1 {"Anakin", 5000};
    std::cout << acc1 << std::endl;
    
    Account *trust = new TrustAccount("Obi-Wan");
    std::cout << *trust << std::endl;
    
    Account *p1 = new CheckAccount("Padme", 10000);
    Account *p2 = new SavingsAccount("Yoda", 1000);
    Account *p3 = new TrustAccount("Qi-Gonn");
    
    std::vector<Account *> accounts {p1,p2,p3};
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
    
    display(accounts);
    
    delete p1;
    delete p2;
    delete p3;
    return 0;
}