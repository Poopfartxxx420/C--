#include "Nmfoverload.h"
#include <iostream>
#include <cstring>
#include <cctype>

Nmfoverload::Nmfoverload() {
    str = new char[1];
    *str = '\0';
}

Nmfoverload::Nmfoverload(const char *s) {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0'; // indication of the end of the string
    } else {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

Nmfoverload::~Nmfoverload() {
    delete[] str;
}

void Nmfoverload::display() const {
    std::cout << str << ":" << get_length() << std::endl;
}

int Nmfoverload::get_length() const { return std::strlen(str); }


const char *Nmfoverload::get_str() const { return str; }


Nmfoverload operator-(const Nmfoverload &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (int i = 0; i < std::strlen(obj.str); i++) {
        buff[i] = std::tolower(buff[i]);
    }
    Nmfoverload temp{buff};
    delete[] buff;
    return temp;
}

Nmfoverload operator+(const Nmfoverload &lhs, const Nmfoverload &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Nmfoverload temp{buff};
    delete[] buff;
    return temp;
}

bool operator==(const Nmfoverload &lhs, const Nmfoverload &rhs) {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

bool operator!=(const Nmfoverload &lhs, const Nmfoverload &rhs) {
    return (std::strcmp(lhs.str, rhs.str) != 0);
}

bool operator<(const Nmfoverload &lhs, const Nmfoverload &rhs) {
    if (std::strlen(lhs.str) < std::strlen(rhs.str)) {
        return true;
    } else {
        return false;
    }
}

bool operator>(const Nmfoverload &lhs, const Nmfoverload &rhs) {
    if (std::strlen(lhs.str) > std::strlen(rhs.str)) {
        return true;
    } else {
        return false;
    }
}

Nmfoverload &operator+=(Nmfoverload &lhs, Nmfoverload &rhs) {
    lhs = lhs + rhs;
    return lhs;
}

Nmfoverload operator*(const Nmfoverload &lhs, int n) {
//    Nmfoverload temp;
//    for (int i = 0; i < n; i++) {
//        temp = temp + lhs;
//    }
//    return temp;
    char *buff = new char[std::strlen(lhs.str) * n + 1];
    std::strcpy(buff, "");
    for (int i = 0; i < n; i++) {
        strcat(buff, lhs.str);
    }
    Nmfoverload temp{buff};
    delete[] buff;
    return temp;
}

Nmfoverload operator*=(Nmfoverload &lhs, int n) {
    Nmfoverload temp{lhs};
    lhs = lhs * n;
    return temp;
}

//pre increment
Nmfoverload &operator++(Nmfoverload &obj) {
    for (int i = 0; i < std::strlen(obj.str); i++) {
        obj.str[i] = std::toupper(obj.str[i]);
    }

    return obj;
}

//post increment
Nmfoverload operator++(Nmfoverload &obj, int) {
    Nmfoverload temp(obj);
    ++obj;
    return temp;
}
