#ifndef INHERITANCE_ACCOUNT_UTIL_H
#define INHERITANCE_ACCOUNT_UTIL_H
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "Checking_account.h"
#include "Trust_account.h"

//Account
void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts,double amount);
void withdraw(std::vector<Account> &accounts,double amount);
//Savings_account
void display(const std::vector<SavingsAccount> &accounts);
void deposit(std::vector<SavingsAccount> &accounts,double amount);
void withdraw(std::vector<SavingsAccount> &accounts,double amount);
//Checking account
void display(const std::vector<Checking_account> &accounts);
void deposit(std::vector<Checking_account> &accounts,double amount);
void withdraw(std::vector<Checking_account> &accounts,double amount);
//Trust account
void display(const std::vector<Trust_account> &accounts);
void deposit(std::vector<Trust_account> &accounts,double amount);
void withdraw(std::vector<Trust_account> &accounts,double amount);






#endif //INHERITANCE_ACCOUNT_UTIL_H
