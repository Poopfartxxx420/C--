#include <iostream>
#include "SavingsAccount.h"

std::ostream &operator<<(std::ostream &os, const SavingsAccount &account) {
    os << "Saving Account: " << account.name << " : " << account.balance << " , " << account.int_rate << "%";
    return os;
}

SavingsAccount::SavingsAccount(std::string name, double balance, double int_rate) : Account{name, balance},
                                                                                    int_rate{int_rate} {
}

bool SavingsAccount::deposit(double amount) {
    amount += amount * (int_rate / 100);
    return Account::deposit(amount);
}
