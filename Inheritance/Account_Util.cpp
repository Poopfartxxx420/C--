#include <iostream>
#include "Account_Util.h"



//Accounts
void display(const std::vector<Account> &accounts){
    std::cout<<"Accounts:"<<std::endl;
    for(auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}
void deposit(std::vector<Account> &accounts,double amount){
    std::cout<<"Accounts deposit:"<<std::endl;
    for(auto &acc:accounts){
        if(acc.deposit(amount)){
            std::cout<<"Deposited: "<<amount<<" to "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed deposit of : "<<amount<<" to "<<acc<<std::endl;
        }
    }
}
void withdraw(std::vector<Account> &accounts,double amount){
    std::cout<<"Accounts withdraw:"<<std::endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount)){
            std::cout<<"Withdrew: "<<amount<<" from "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed to withdraw: "<<amount<<" from "<<acc<<std::endl;
        }
    }
}
//Saving accounts
void display(const std::vector<SavingsAccount> &accounts){
    std::cout<<"Accounts:"<<std::endl;
    for(auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}
void deposit(std::vector<SavingsAccount> &accounts,double amount){
    std::cout<<"Accounts deposit:"<<std::endl;
    for(auto &acc:accounts){
        if(acc.deposit(amount)){
            std::cout<<"Deposited: "<<amount<<" to "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed deposit of : "<<amount<<" to "<<acc<<std::endl;
        }
    }
}
void withdraw(std::vector<SavingsAccount> &accounts,double amount){
    std::cout<<"Accounts withdraw:"<<std::endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount)){
            std::cout<<"Withdrew:  "<<amount<<" from "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed to withdraw: "<<amount<<" from "<<acc<<std::endl;
        }
    }
}
//Checking accounts
void display(const std::vector<Checking_account> &accounts){
    std::cout<<"Accounts:"<<std::endl;
    for(auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}
void deposit(std::vector<Checking_account> &accounts,double amount){
    std::cout<<"Accounts deposit:"<<std::endl;
    for(auto &acc:accounts){
        if(acc.deposit(amount)){
            std::cout<<"Deposited: "<<amount<<" to "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed deposit of : "<<amount<<" to "<<acc<<std::endl;
        }
    }
}
void withdraw(std::vector<Checking_account> &accounts,double amount){
    std::cout<<"Accounts withdraw:"<<std::endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount)){
            std::cout<<"Withdrew:  "<<amount<<" from "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed to withdraw: "<<amount<<" from "<<acc<<std::endl;
        }
    }
}
//Trust account
void display(const std::vector<Trust_account> &accounts){
    std::cout<<"Accounts:"<<std::endl;
    for(auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}
void deposit(std::vector<Trust_account> &accounts,double amount){
    std::cout<<"Accounts deposit:"<<std::endl;
    for(auto &acc:accounts){
        if(acc.deposit(amount)){
            std::cout<<"Deposited: "<<amount<<" to "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed deposit of : "<<amount<<" to "<<acc<<std::endl;
        }
    }
}
void withdraw(std::vector<Trust_account> &accounts,double amount){
    std::cout<<"Accounts withdraw:"<<std::endl;
    for(auto &acc:accounts){
        if(acc.withdraw(amount)){
            std::cout<<"Withdrew:  "<<amount<<" from "<<acc<<std::endl;
        }
        else{
            std::cout<<"Failed to withdraw: "<<amount<<" from "<<acc<<std::endl;
        }
    }
}