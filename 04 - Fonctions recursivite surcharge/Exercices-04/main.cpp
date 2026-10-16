#include <iostream>
#include <iomanip>

using namespace std;

/**
 * Ex 03 -
 * @param length
 * @param width
 * @param height
 * @return
 */
double volume_pyramid(double length, double width, double height) {
   return length * width * height / 3.0;
}

/**
 * Ex 03 -
 * @param text
 * @param value
 * @param precision
 */
void displayPyramid(const string& text, double value, int precision) {
   cout << fixed << setprecision(precision) << text << value << endl;
}

/**
 * Ex 04 -
 * @param year
 * @return
 */
bool isLeap(int year) {
   return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

/**
 * Ex 04 -
 * @param year
 * @return
 */
void displayLeap(int year) {
   cout << "The year " << year << (isLeap(year) ? " is" : " isn't") << "a leap "
                                                                       "year" << endl;
}

/**
 * Ex 05 -
 * @param start
 * @param end
 * @return
 */
bool listCharacters(char start, char end) {
   if (start > end) return false;
   for (char c = start; c <= end; c++) {
      cout << c;
      if (c == end) break;
   }
   return true;
}

/**
 * Ex 05 -
 * @param start
 * @param end
 */
void displayList(char start, char end) {
   cout << '\t' << boolalpha << listCharacters(start, end) << endl;
}

/**
 * Ex 08 -
 * @param a
 * @param b
 * @param c
 */
void permutation(double& a, double& b, double& c) {
   double temp = c;
   c = b;
   b = a;
   a = temp;
}

/**
 * Ex 08 -
 * @param a
 * @param b
 * @param c
 */
void displayPermutation(double a, double b, double c) {
   cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
   permutation(a, b, c);
   cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

/**
 * Ex 09 -
 * @param withdrawal_attempt
 * @param balance
 * @return
 */
double cashWithdrawal(double withdrawal_attempt, double& balance) {
   double withdrawal_amount;
   if (withdrawal_attempt > balance) {
      withdrawal_amount = balance;
      balance = 0;
   }
   else {
      withdrawal_amount = withdrawal_attempt;
      balance -= withdrawal_amount;
   }
   return withdrawal_amount;
}

/**
 * Ex 10 -
 * @param left_number
 * @param right_number
 * @param operation
 * @param result
 * @return
 */
bool arithmetic(double left_number, double right_number, char operation, double&
                result) {
   switch (operation) {
      case '+': {
         result = left_number + right_number;
         break;
      }
      case '-': {
         result = left_number - right_number;
         break;
      }
      case '*': {
         result = left_number * right_number;
         break;
      }
      case '/': {
         result = left_number / right_number;
         break;
      }
      default: {
         return false;
      }
   }
   return true;
}

/**
 * Ex 12 -
 * @param a
 * @param b
 * @param c
 */
void permutation2(double* a, double* b, double* c) {
   double temp = *c;
   *c = *b;
   *b = *a;
   *a = temp;
}

/**
 * Ex 012 -
 * @param a
 * @param b
 * @param c
 */
void displayPermutation2(double a, double b, double c) {
   cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
   permutation2(&a, &b, &c);
   cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
}

/**
 * Ex 14 -
 * @param a
 * @param b
 * @param c
 * @return
 */
int& min(int& a, int& b, int& c) {
   return a < c ? (a < b ? a : b) : (b < c ? b : c);
   /*
    * OU return min(a,(min(b,c));
   */
}

/**
 * Ex 16 -
 * @param n
 * @return
 */
unsigned int facto(unsigned int n) {
   if (n == 0) return 1;
   return n * facto(n - 1);
}

/**
 * Ex 17 -
 * @param n
 * @return
 */
int fibo(int n) {
   bool negative = n < 0;
   n = abs(n);
   if (n <= 1) return n;
   return (negative ? -1 : 1) * ( fibo(n-1) + fibo(n-2) );
}

int main() {

}
