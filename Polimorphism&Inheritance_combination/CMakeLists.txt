cmake_minimum_required(VERSION 3.24)
project(Polimorphism_Inheritance_combination)

set(CMAKE_CXX_STANDARD 20)

add_executable(Polimorphism_Inheritance_combination main.cpp Account.cpp Savings_Account.cpp Trust_Account.cpp Checking_Account.cpp Account_Util.cpp I_Printable.cpp I_Printable.h)
