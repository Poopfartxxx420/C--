
#include "Checking_account.h"

std::ostream &operator<<(std::ostream &os, const Checking_account &account) {
    os << "Checking account: " << account.name << " : " << account.balance << " , " << account.flat_fee << " $ ";
    return os;
}

Checking_account::Checking_account(std::string name, double balance, double flat_fee) : Account{name, balance},
                                                                                        flat_fee{flat_fee} {
}

bool Checking_account::withdraw(double amount) {
    if(amount>balance){
        return false;
    }
    amount +=  flat_fee;
    return Account::withdraw(amount);

}
