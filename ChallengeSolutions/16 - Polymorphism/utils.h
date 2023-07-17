#ifndef _UTILS_H_
#define _UTILS_H_

#include "Account.h"

#include <iostream>
#include <vector>

void display(const std::vector<Account *>& accounts);
void deposit(std::vector<Account *>& accounts, double amount);
void withdraw(std::vector<Account *>& accounts, double amount);

#endif
