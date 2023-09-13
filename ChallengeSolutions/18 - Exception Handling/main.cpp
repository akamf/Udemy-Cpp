#include "CheckAccount.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
#include "Exceptions.h"
#include "utils.h"

#include <iostream>
#include <memory>
#include <vector>

int main()
{
    std::unique_ptr<Account> acc1;
    std::unique_ptr<Account> acc2;
    try {
        acc2 = std::make_unique<SavingsAccount>("Obi-Wan", -2000.0);
        std::cout << *acc2 << std::endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }

    try {
        acc1 = std::make_unique<SavingsAccount>("Anakin", 1000.0);
        std::cout << *acc1 << std::endl;
        acc1->withdraw(500.0);
        std::cout << *acc1 << std::endl;
        acc1->withdraw(1000.0);
        std::cout << *acc1 << std::endl;
        
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (const InsufficientFundsException &ex) {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}
