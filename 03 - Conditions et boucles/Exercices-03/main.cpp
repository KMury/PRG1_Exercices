#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/**
 * Ex: 08
 */
void delivery() {
   char response;
   const double general_swiss_price = 5.0;
   const double exceptional_swiss_price = 7.0;
   const double liechtenstein_price = 7.0;
   const double world_price = 10.0;

   double price = general_swiss_price;

   cout << "Livraison Suisse ? (O/N) ";
   cin >> response;
   if (response == 'O' || response == 'o') {
      cout << "Livraison Grisons ou Tessin ? (O/N) ";
      cin >> response;
      if (response == 'O' || response == 'o') {
         price = exceptional_swiss_price;
      }
   }
   else {
      cout << "Livraison Liechtenstein ? (O/N) ";
      cin >> response;
      if (response == 'O' || response == 'o') {
         price = liechtenstein_price;
      }
      else {
         price = world_price;
      }
   }
}

/**
 * Ex 09 :
 */
void month() {
   int month_number;
   cout << "Entrez un no de mois (1-12): ";
   cin >> month_number;

   //IF version
   cout << "Ce mois comporte ";
   if (month_number == 2) {
      cout << "28 ou 29";
   }
   else if (month_number == 4 || month_number == 6 || month_number == 9 || month_number == 11) {
      cout << "30";
   }
   else {
      cout << "31";
   }

   /*
   //SWITCH version
   switch (month_number) {
      case 2: {
         cout << "28 ou 29";
         break;
      }
      case 4:
      case 6:
      case 9:
      case 11: {
         cout << "30";
         break;
      }
      default: {
         cout << "31";
      }
   }
   */

   /*
   //OTHER version
   cout << (month_number == 2 ? "28 ou 29" :
            month_number == 4 ||
            month_number == 6 ||
            month_number == 9 ||
            month_number == 11 ? "30" : "31");

   cout << " jours." << endl;
   */
}

/**
 *
 */
void grade() {
   double numerical_grade;
   char ects_grade;
   cout << "Entrez la note UNIGE: ";
   cin >> numerical_grade;

   if (numerical_grade < 0. || numerical_grade > 6.) {
      cout << "Error!" << endl;
   }
   else {
      if (numerical_grade < 4.) {
         ects_grade = 'F';
      }
      else if (numerical_grade < 4.25) {
         ects_grade = 'E';
      }
      else if (numerical_grade < 4.5) {
         ects_grade = 'D';
      }
      else if (numerical_grade < 4.75) {
         ects_grade = 'C';
      }
      else if (numerical_grade < 5.25) {
         ects_grade = 'B';
      }
      else {
         ects_grade = 'A';
      }
   }

   cout << "La note ECTS est " << ects_grade;

}

/**
 *
 */
void equation() {
   cout << "Give the values a, b et c of the equation ax^2 + bx + c :";
   double a, b, c;
   cin >> a >> b >> c;


   if (a == 0) {
      if (b == 0) {
         if (c == 0) {
            cout << "There is a solution for any x"<< endl;
         }
         else {
            cout << "There is no solution to your equation." << endl;
         }
      }
      else{
         cout << "It's a first degree equation with one solution. x = " << -c/b <<
            endl;
      }
   }
   else {
      double delta = pow(b, 2) - 4 * a * c;
      if (delta < 0) {
         cout << "There is no solution to your equation." << endl;
      }
      else if (delta == 0) {
         double x = -b / (2*a);
         cout << "There is one solution to your equation : x = " << x << endl;
      }
      else {
         double x1 = (-b + sqrt(delta)) / 2*a;
         double x2 = (-b - sqrt(delta)) / 2*a;
         cout << "There are two solution to your equation, x = " << x1 <<
            ", and x = " << x2 << endl;
      }
   }
}

void bank1() {

   cout << "Enter an initial amount : ";
   double amount;
   cin >> amount;

   cout << "Enter a target amount : ";
   double target_amount;
   cin >> target_amount;

   cout << "Enter a yearly interest rate : ";
   double yearly_interest;
   cin >> yearly_interest;

   unsigned int year = 0;
   while (amount < target_amount) {
      amount *= (1.0 + yearly_interest/100.0);
      year++;
   }
   cout << "The target amount is reached " << year <<  " years." << endl;
}

void bank2() {
   cout << "Enter an initial amount : ";
   double amount;
   cin >> amount;

   cout << "Enter a yearly interest rate : ";
   double yearly_interest;
   cin >> yearly_interest;

   cout << "Enter a number of years : ";
   size_t number_of_years;
   cin >> number_of_years;

   for (size_t year = 1; year <= number_of_years; ++year) {
      amount *= (1.0 + yearly_interest/100.0);
   }
   cout << "After " << number_of_years << ", your fortune is " << amount << " CHF." << endl;
}

void bank3() {

   double amount, yearly_interest;
   size_t number_of_years;

   do {
      cout << "Enter an initial amount (>=1000) : ";
      cin >> amount;
   } while (amount < 1000);

   do {
      cout << "Enter a yearly interest rate (>= -5 & <= 50): ";
      cin >> yearly_interest;
   } while (yearly_interest < -5 || yearly_interest > 50);

   do {
      cout << "Enter a number of years (>0) : ";
      cin >> number_of_years;
   } while (number_of_years > 0);

   for (size_t year = 1; year <= number_of_years; ++year) {
      amount *= (1.0 + yearly_interest/100.0);
   }
   cout << "After " << number_of_years << ", your fortune is " << amount << " CHF." << endl;
}

void test() {
   const unsigned int nombre = 999;
   const unsigned int centaines = nombre / 100;
   const unsigned int dizaines = (nombre % 100) / 10;
   const unsigned int unites = (nombre - centaines * 100) % 10;
   const unsigned int somme = centaines + dizaines + unites;

   cout << "la somme des chiffres de " << nombre << " = " << somme << endl;
}

int main() {
   //delivery();
   //month();
   //grade();
   //equation();
   //bank3();
   test();
}
