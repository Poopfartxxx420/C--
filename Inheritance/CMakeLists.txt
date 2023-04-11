cmake_minimum_required(VERSION 3.25)
project(Inheritance)

set(CMAKE_CXX_STANDARD 20)

add_executable(Inheritance main.cpp Account.cpp Account.h SavingsAccount.cpp SavingsAccount.h Checking_account.cpp Checking_account.h Trust_account.cpp Trust_account.h Account_Util.cpp Account_Util.h)
