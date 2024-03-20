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

    friend Complex operator+(const Complex& firstNum, const Complex& secondNum);
    friend Complex operator*(const Complex& firstNum, const Complex& secondNum);
    friend bool operator==(const Complex& firstNum, const Complex& secondNum);
    operator string() const;
    Complex& operator= (const Complex&);

    Complex& operator++();
    Complex operator++(int);
    Complex& operator--();
    Complex operator--(int);

    friend ostream& operator<<(ostream& out, const Complex& obj);
    friend istream& operator>>(istream& in, Complex& obj);
};
