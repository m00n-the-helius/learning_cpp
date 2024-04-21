#include <iostream>
using namespace std;
int main ()
{
int n1, n2;
cout <<"The numbers are: ";
cin >>n1 >>n2;
int add= n1+n2;
int sub= n1-n2;
int prod= n1*n2;
int div= n1/n2;
int mod= n1%n2;
int inc1= ++n1;
int inc2= ++n2;
int dec1= --n1;
int dec2= --n2;

cout <<"RESULT OF ADDITION IS " << add << endl;
cout <<"RESULT OF SUBTRACTION IS " << sub << endl;
cout <<"RESULT OF MULTIPLY IS " << prod << endl;
cout <<"RESULT OF DIVISION IS " << div << endl;
cout <<"RESULT OF MODULUS IS " << mod << endl;
cout <<"RESULT OF INCREMENT OF N1 IS " << inc1 << endl;
cout <<"RESULT OF INCREMENT OF N2 IS " << inc2 << endl;
cout <<"RESULT OF DECREMENT OF N1 IS " << dec1 << endl;
cout <<"RESULT OF DECREMENT OF N2  IS " << dec2 << endl;
return 0;
}