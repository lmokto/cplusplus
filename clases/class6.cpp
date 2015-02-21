// Ficha 9b
#include <iostream>
using namespace std;
class Complex{
public :
    double real,imag ;
    Complex (double a, double b)
    { real=a ; imag =b ; }
    ~Complex () {}
    Complex (Complex& a)
    { real = a.real ; imag=a.imag;}
    Complex& operator = (Complex& m)
    {real = m.real; imag = m.imag ; return *this;}

    friend ostream& operator << (ostream& os, Complex& a){
    os << "COMPLEX=";
    os << a.real<<"+"<<a.imag<<"i"<<endl;
    return os;
}
Complex suma_compleja (Complex& a, Complex& b){
Complex c (0.,0.);
c.real = a.real + b.real;
c.imag = a.imag + b.imag;
return c;
}
friend Complex& operator +(Complex& a, Complex& b){
Complex c (0.,0.);
c.real = a.real + b.real;
c.imag = a.imag + b.imag;
return c;
}
friend Complex& operator -(Complex& a, Complex& b){
Complex c (0.,0.) ;
c.real = a.real - b.real;
c.imag = a.imag - b.imag;
return c;
}
};
//
int main (void){
    Complex a (1., 2.); Complex b (0.,6.);
    Complex c (a) ; Complex d=b;
    Complex e = a + b;
    Complex f= c - d;
    cout<<c<<endl; cout<<d<<endl; cout<<e<<endl; cout<<f<<  endl;
    e=e.suma_compleja(a,b);
    cout << " suma como función " << e <<endl;
    return 0;
}