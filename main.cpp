#include <iostream>
using namespace std;

//Za unešeni broj x treba izračunati i ispisati y ako važi jednačina 5y-3x=0

int main() {
 int x, y;

 cout<<"Unesite neki cijeli pozitivni broj:"<<endl;
 cin>> x;
 
 y=(3*x)/5;

cout<<"Y je "<<y;

return 0;
}