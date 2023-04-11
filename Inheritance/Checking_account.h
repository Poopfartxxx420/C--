#ifndef INHERITANCE_CHECKING_ACCOUNT_H
#define INHERITANCE_CHECKING_ACCOUNT_H
#include "Account.h"

class Checking_account : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_account &account);

private:
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_flat_fee = 0;
protected:
    double flat_fee;
public:
    Checking_account(std::string name = def_name,double balance = def_balance,double flat_fee = def_flat_fee);
    bool withdraw(double amount);
};


#endif //INHERITANCE_CHECKING_ACCOUNT_H
