#include <iostream>
#include "Overload.h"
#include <cstring>
#include <cctype>


Overload Overload::operator-() const {
    char *buff = new char[strlen(str) + 1];
    strcpy(buff, str);
    for (size_t i = 0; i < strlen(buff); i++) {
        buff[i] = tolower(buff[i]);
    }
    Overload temp{buff};
    delete[] buff;
    return temp;
}

void Overload::display() const {
    std::cout << str << ":" << get_length() << std::endl;
}

int Overload::get_length() const { return strlen(str); }

Overload::Overload(const char *s) {
    if (s == nullptr) {
        str = new char[1];
        *str = '\0'; // indication of the end of the string
    } else {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

Overload::Overload() : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

Overload::~Overload() {
    delete[] str;
}

const char *Overload::get_str() const { return str; }

bool Overload::operator==(const Overload &rhs) const {
    return (std::strcmp(str, rhs.str) == 0);
}

bool Overload::operator!=(const Overload &rhs) const {
    return (std::strcmp(str, rhs.str) != 0);
}

bool Overload::operator<(const Overload &rhs) const {
    if (std::strlen(this->str) < std::strlen(rhs.str))
        return true;
    else
        return false;
}

bool Overload::operator>(const Overload &rhs) const {
    if (std::strlen(this->str) > std::strlen(rhs.str))
        return true;
    else
        return false;
}

Overload Overload::operator+(const Overload &rhs) const {
    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Overload temp{buff};
    delete[] buff;
    return temp;
}

Overload &Overload::operator+=(const Overload &rhs) {
//    char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
//    std::strcpy(buff, str);
//    std::strcat(buff, rhs.str);
//    str = buff;
//    return str;
    std::strcat(this->str, rhs.str);
    Overload temp{this->str};
    return temp;
}

Overload Overload::operator*(int n) const {
    char *buff = new char[std::strlen(str) * n + 1];
    std::strcpy(buff, "");
    for (int i = 0; i < n; i++) {
        strcat(buff, str);
    }
    Overload temp{buff};
    delete[] buff;
    return temp;
}

Overload &Overload::operator*=(int n) {
    *this = *this * n;
    return *this;
}

//pre increment - upper case
Overload &Overload::operator++() {
    for (size_t i = 0; i < std::strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
    return *this;
}

//post increment
Overload Overload::operator++(int) {
    Overload temp(*this);
    operator++();
    return temp;
}


