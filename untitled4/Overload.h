

#ifndef UNTITLED4_OVERLOAD_H
#define UNTITLED4_OVERLOAD_H


class Overload {
private:
    char *str;
public:
    Overload();

    Overload(const char *s);

    Overload operator-() const;
    bool operator==(const Overload &rhs) const;
    bool operator!=(const Overload &rhs) const;
    bool operator<(const Overload &rhs) const;
    bool operator>(const Overload &rhs) const;
    Overload operator+(const Overload &rhs) const;
    Overload &operator+=(const Overload &rhs);
    Overload operator*(int n) const;
    Overload &operator*=(int n);
    Overload &operator++();
    Overload operator++(int);

    ~Overload();

    void display() const;

    int get_length() const;

    const char *get_str() const;
};


#endif //UNTITLED4_OVERLOAD_H
