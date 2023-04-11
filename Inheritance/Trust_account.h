#ifndef INHERITANCE_TRUST_ACCOUNT_H
#define INHERITANCE_TRUST_ACCOUNT_H
#include "Account.h"
#include <iostream>

class Trust_account:public Account {
    friend std::ostream &operator<<(std::ostream &os,const Trust_account &account);
private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
protected:
    double int_rate;
    int counter{};
public:
    Trust_account(std::string name = def_name,double balance = def_balance,double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
};


#endif //INHERITANCE_TRUST_ACCOUNT_H
