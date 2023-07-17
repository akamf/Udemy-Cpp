#include "CheckAccount.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
#include "utils.h"

#include <iostream>
#include <vector>

int main()
{
    CheckAccount frank {"Frank", 5000};
    std::cout << frank << std::endl;
    
    Account *trust = new TrustAccount("James");
    std::cout << *trust << std::endl;
    
    Account *p1 = new CheckAccount("Larry", 10000);
    Account *p2 = new SavingsAccount("Moe", 1000);
    Account *p3 = new TrustAccount("Curly");
    
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