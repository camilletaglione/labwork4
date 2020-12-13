#include <iostream>
using namespace std;
class Rectangle{
    private:
        double E1, E2;
    public:
        Rectangle(double e1, double e2):E1(e1),E2(e2){};
        double Area(){return this->E1*this->E2;}}     

class EX2{
    public:
        int V1, V2;
        EX2(int v1 = 0, int v2 = 0):V1(v1),V2(v2){};}

class Complex_Numbers{
    public:
        double real, imaginary;
        Complex_Numbers()=default;
        Complex_Numbers(double r, double i):real(r),imaginary(i){};
        Complex_Numbers Addition(Complex_Numbers number2)
        {
            Complex_Numbers tmp;
            tmp.real = this->real + number2.real;
            tmp.imaginary = this->imaginary + number2.imaginary;
            return tmp;}}

int main(){
    Rectangle rect(3.2, 5.3);
    cout << rect.Area() << endl;
    int I1,I2;
    cout << "input 2 integers" << endl;
    cin >> I1 >> I2; 
    EX2 ex2(in1, in2);
    cout << "addition of these 2 integers is :" << ex2.V1 + ex2.V2 << endl;
    Complex_Numbers num1, num2 ,tmp;
    cout << "input first complex number (a bi)" << endl;
    cin >> num1.real >> num1.imaginary; 
    cout << "input second complex number (a bi)" << endl;
    cin >> num2.real >> num2.imaginary; 
    tmp = num1.Addition(num2);
    if(tmp.imaginary >= 0)
        cout << "addition of " << num1.real << "+" << num1.imaginary << "i and " << num2.real << "+" << num2.imaginary << 
        "i is: " << tmp.real << "+" << tmp.imaginary << "i" << endl;
    else 
        cout << "addition of " << num1.real << "+" << num1.imaginary << "i and " << num2.real << "+" << num2.imaginary << 
        "i is: " << tmp.real << " " << tmp.imaginary << "i" << endl;
}
