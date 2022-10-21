#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex(){
    real = 0;
    imaginary = 0;
}
Complex::Complex(double r, double i){
    real = r;
    imaginary = i;
}
void Complex::Print(){
    cout << "Real = " << real << " and Imaginary = " << imaginary << endl;
}
Complex Complex::operator+(Complex c){
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
}
Complex Complex::operator-(Complex c){
    Complex temp;
    temp.real = real - c.real;
    temp.imaginary = imaginary - c.imaginary;
    return temp;
}
Complex Complex::operator*(Complex c){
    Complex temp;
    temp.real = real * c.real;
    temp.imaginary = imaginary * c.imaginary;
    return temp;
}
Complex Complex::operator/(Complex c){
    Complex temp;
    temp.real = real / c.real;
    temp.imaginary = imaginary / c.imaginary;
    return temp;
}
bool Complex::operator == (Complex c) {
    return (real == c.real) && (imaginary == c.imaginary);
}
bool Complex::operator != (Complex c) {
    return (real != c.real) || (imaginary != c.imaginary);
}
bool Complex::operator < (Complex a) {
    return (real < a.real) || (imaginary < a.imaginary);
}
bool Complex::operator > (Complex a) {
    return (real > a.real) || (imaginary > a.imaginary);
}
