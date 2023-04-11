#include "Trust_account.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const Trust_account &account) {
    os << "Trust account: " << account.name << " : " << account.balance << " , " << account.int_rate << "%";
    return os;
}

Trust_account::Trust_account(std::string name, double balance, double int_rate) : Account{name, balance},
                                                                                  int_rate{int_rate} {
}

bool Trust_account::deposit(double amount) {
    amount += amount * (int_rate / 100);
    if (amount >= 5000) {
        amount += 50;
    }
    return Account::deposit(amount);
}

bool Trust_account::withdraw(double amount) {
    if (counter == 3) {
        std::cout << "Too many withdrawals !" << std::endl;
        return false;
    }

    if (balance * 0.2 < amount) {
        return false;
    } else {
        if (amount > balance) {
            return false;
        } else {
            balance -= amount;
            counter++;
            return true;
        }
    }
}

