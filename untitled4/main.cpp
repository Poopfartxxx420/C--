#include <iostream>
#include "Overload.h"
#include "NmfOverload.h"

using namespace std;

void part_1();

void part_2();

int main() {
    //using member functions
    part_1();
    //using non-member functions
   //part_2();

}


void part_2() {
    //non member functions
    Nmfoverload s1{"TEST"}, s2, s3{"Equality"}, s4{"Concatenation"}, s5, s6, s7;
    s1.display();
    s2 = -s1;
    s2.display();
    cout << (s3 == s4) << endl;
    cout << (s3 != s4) << endl;
    s5 = s3 + s4;
    s5.display();
    cout << (s3 < s4) << endl;
    cout << (s3 > s4) << endl;
    s3 += s4;
    s3.display();
    Nmfoverload s8{"oK"}, s9, s10{"repeat assign "}, s11{"finished"};
    s9 = s8 * 8;
    s9.display();
    s10 *= 6;
    s10.display();
    ++s10;
    s10.display();
    s11++;
    s11.display();
}

void part_1() {
    //member functions testing
    Overload test{"TEST"};
    test.display();
    Overload test2 = -test;
    test2.display();
    Overload s3{"MILOSZ"}, s4{"ADAM"};
    cout << (s4 == s3) << endl;
    cout << (s3 != s4) << endl;
    cout << (s3 < s4) << endl;
    cout << (s3 > s4) << endl;
    Overload s5{s3 + s4};
    s5.display();
    Overload s6{"Conca"}, s7{"tinate"};
    s6 += s7;
    s6.display();
    test2 = s4 * 4;
    test2.display();
    s3 *= 3;
    s3.display();
    Overload s8{"just testing upper case"};
    ++s8;
    s8.display();
    Overload s9 = -s8;
    s9.display();
    s9++;
    s9.display();

};
