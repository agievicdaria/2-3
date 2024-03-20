#include "complex.h"
#include <sstream>
#include <iostream>
using namespace std;

Complex::Complex(double r, double i) {
    real = r;
    imaginary = i;
}

Complex::Complex() {
    real = 0.0;
    imaginary = 0.0;
}

Complex::Complex(const Complex& number) {
    real = number.real;
    imaginary = number.imaginary;
}

Complex operator+(const Complex& firstNum, const Complex& secondNum) {
    return Complex(firstNum.real + secondNum.real, firstNum.imaginary + secondNum.imaginary);
}

Complex operator*(const Complex& firstNum, const Complex& secondNum) {
    return Complex(firstNum.real * secondNum.real - firstNum.imaginary * secondNum.imaginary, firstNum.real * secondNum.imaginary + firstNum.imaginary * secondNum.real);
}

bool operator==(const Complex& firstNum, const Complex& secondNum) {
    return (firstNum.real == secondNum.real) && (firstNum.imaginary == secondNum.imaginary);
}

Complex& Complex::operator++() {
    real++;
    return *this;
}

Complex Complex::operator++(int) {
    Complex c(*this);
    imaginary++;
    return c;
}

Complex& Complex::operator--() {
    real--;
    return *this;
}

Complex Complex::operator--(int) {
    Complex c(*this);
    imaginary--;
    return c;
}

ostream& operator<<(ostream& out, const Complex& obj) {
    out << string(obj);
    return out;
}

istream& operator>>(istream& in, Complex& obj) {
    cout << "Enter real part: ";
    in >> obj.real;
    cout << "Enter imaginary part: ";
    in >> obj.imaginary;
    return in;
}

Complex::operator string () const {
    stringstream ss;
    ss << "(" << real << ", " << imaginary << ")";
    return ss.str();
}

Complex& Complex::operator= (const Complex& c) {
    real = c.real;
    imaginary = c.imaginary;
    return *this;
}