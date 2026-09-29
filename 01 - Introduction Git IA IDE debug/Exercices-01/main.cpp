#include <iostream>
#include <cstdlib>
#include <array>
#include <limits>

using namespace std;

void pointers() {
   int integer = 12;
   cout << "Integer: " << integer << endl;

   int* address = &integer;
   cout << "Integer address: " << address << endl;

   int dereferencedInteger = *address;

   cout << "Dereferenced integer : " << dereferencedInteger << endl;
   cout << "Are values equal = " << boolalpha << (integer == dereferencedInteger) << endl;
}


void get_ascii_symbol_value(char c) {
   cout << "ASCII value: " << (int)c << endl;
}

int main() {

}