#pragma once
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i);
    Complex();
    Complex(const Complex& number);

    double getReal() const {return real;}
    double getImaginary() const {return imaginary;}
    void SetReal(double value) { real = value; }
    void SetImaginary(double value) { imaginary = value; }

    Complex add(const Complex& secondNum) const;
    Complex mul(const Complex& secondNum) const;
    bool equ(const Complex& secondNum) const;
    string ToString() const;

    Complex& operator++();
    Complex operator++(int);
    Complex& operator--();
    Complex operator--(int);

    friend ostream& operator<<(ostream& out, const Complex& obj);
    friend istream& operator>>(istream& in, Complex& obj);
};
