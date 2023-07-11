#ifndef _UTILS_H_
#define _UTILS_H_

#include "Account.h"
#include "CheckAccount.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"

#include <vector>

void display(const std::vector<Account>& accounts);
void display(const std::vector<CheckAccount>& accounts);
void display(const std::vector<SavingsAccount>& accounts);
void display(const std::vector<TrustAccount>& accounts);

void deposit(std::vector<Account>& accounts, double amount);
void deposit(std::vector<CheckAccount>& accounts, double amount);
void deposit(std::vector<SavingsAccount>& accounts, double amount);
void deposit(std::vector<TrustAccount>& accounts, double amount);

void withdraw(std::vector<Account>& accounts, double amount);
void withdraw(std::vector<CheckAccount>& accounts, double amount);
void withdraw(std::vector<SavingsAccount>& accounts, double amount);
void withdraw(std::vector<TrustAccount>& accounts, double amount);

#endif
