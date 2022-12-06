/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Phone {
    public:
       string Name;
       int Storage;
       
       
    Phone (string name, int storage) {
        Name=name;
        Storage=storage;
    }
    
    Phone (string name) {
        Name=name;
        Storage=256;
    }
};

int main()
{
    Phone phone1 ("Iphone", 128);
    
    cout << "This phone's name is: " << phone1.Name << ", storage is: " << phone1.Storage << endl;
    
    Phone phone2 ("Samsung");
    
    cout << "This phone's name is: " << phone2.Name << ", storage is: " << phone2.Storage << endl;

    return 0;
}