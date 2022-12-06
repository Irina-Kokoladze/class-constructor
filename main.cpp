/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class MobilePhone {
        public:
            string Name;
            string System;
            int Storage;
        
        void introduce() {
            cout << "Name: " << Name << endl;
            cout << "System: " << System << endl;
            cout << "Storage: " << Storage << endl;
        }
};

int main()
{
    MobilePhone phone1;
    
    phone1.Name="Iphone";
    phone1.System="ios";
    phone1.Storage=256;
    
    phone1.introduce();
    
    MobilePhone phone2;
    
    phone2.Name="Samsung";
    phone2.System="android";
    phone2.Storage=128;
    
    phone2.introduce();
    
    return 0;
}