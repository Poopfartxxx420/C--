#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "Account_Util.h"
#include "Checking_account.h"
#include "Trust_account.h"

using namespace std;


int main() {

    cout.precision(2);
    cout << fixed;

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"Account_1"});
    accounts.push_back(Account{"Account_2", 2000});
    accounts.push_back(Account{"Account_3", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    // Savings

    vector<SavingsAccount> sav_accounts;
    sav_accounts.push_back(SavingsAccount{});
    sav_accounts.push_back(SavingsAccount{"Account_1"});
    sav_accounts.push_back(SavingsAccount{"Account_2", 2000});
    sav_accounts.push_back(SavingsAccount{"Account_3", 5000, 5.0});

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    //Checking
    vector<Checking_account> check_accounts;
    check_accounts.push_back(Checking_account{});
    check_accounts.push_back(Checking_account{"Account_1"});
    check_accounts.push_back(Checking_account{"Account_2", 2000});
    check_accounts.push_back(Checking_account{"Account_3", 5000, 1.5});

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    //Trust account
    vector<Trust_account> trust_accounts;
    trust_accounts.push_back(Trust_account{});
    trust_accounts.push_back(Trust_account{"Account_1"});
    trust_accounts.push_back(Trust_account{"Account_2", 2000});
    trust_accounts.push_back(Trust_account{"Account_3", 9000, 1.5});

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 600);
    withdraw(trust_accounts, 600);
    withdraw(trust_accounts, 600);
    withdraw(trust_accounts, 600);
    return 0;

}
