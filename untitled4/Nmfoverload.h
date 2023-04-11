#ifndef UNTITLED4_NMFOVERLOAD_H
#define UNTITLED4_NMFOVERLOAD_H


class Nmfoverload {
    friend Nmfoverload operator-(const Nmfoverload &obj);
    friend Nmfoverload operator+(const Nmfoverload &lhs, const Nmfoverload &rhs);
    friend bool operator==(const Nmfoverload &lhs, const Nmfoverload &rhs);
    friend bool operator!=(const Nmfoverload &lhs, const Nmfoverload &rhs);
    friend bool operator<(const Nmfoverload &lhs, const Nmfoverload &rhs);
    friend bool operator>(const Nmfoverload &lhs, const Nmfoverload &rhs);
    friend Nmfoverload &operator+=(Nmfoverload &lhs, Nmfoverload &rhs);
    friend Nmfoverload operator*(const Nmfoverload &lhs, int n);
    friend Nmfoverload operator*=(Nmfoverload &lhs,int n);
    friend Nmfoverload &operator++(Nmfoverload &obj); //pre increment
    friend Nmfoverload operator++(Nmfoverload &obj,int); // post increment



private:
    char *str;
public:
    Nmfoverload();

    explicit Nmfoverload(const char *s);

    ~Nmfoverload();

    void display() const;

    [[nodiscard]] int get_length() const;

    [[nodiscard]] const char *get_str() const;
};


#endif //UNTITLED4_NMFOVERLOAD_H
