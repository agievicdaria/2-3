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

Complex Complex::add(const Complex& secondNum) const {
    return Complex(real + secondNum.real, imaginary + secondNum.imaginary);
}

Complex Complex::mul(const Complex& secondNum) const {
    return Complex(real * secondNum.real - imaginary * secondNum.imaginary, real * secondNum.imaginary + imaginary * secondNum.real);
}

bool Complex::equ(const Complex& secondNum) const {
    return (real == secondNum.real) && (imaginary == secondNum.imaginary);
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
    out << "(" << obj.real << ", " << obj.imaginary << ")";
    return out;
}

istream& operator>>(istream& in, Complex& obj) {
    cout << "Enter real part: ";
    in >> obj.real;
    cout << "Enter imaginary part: ";
    in >> obj.imaginary;
    return in;
}

string Complex::ToString() const {
    stringstream sout;
    sout << "(" << real << ", " << imaginary << ")";
    return sout.str();
}