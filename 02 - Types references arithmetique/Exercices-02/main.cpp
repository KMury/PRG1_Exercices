#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

/**
 * Ex 05: Display the number of bytes and bits used to represent a numeric type.
 */
void display_size() {
   using type = int;

   cout << "Taille : " << sizeof(type) << " bytes = " <<
      (numeric_limits<type>::digits + numeric_limits<type>::is_signed ) << " bits" <<
      "\nPlage de valeurs : " << numeric_limits<type>::min() << " -> " <<
      numeric_limits<type>::max() <<
      "\nSigned : " << boolalpha << numeric_limits<type>::is_signed << endl;
}

/**
 * Ex 08: Compute the mantisse and exponent in decimal or binary for a user
 * entered number.
 */
void mantissa() {
   double number;
   cout << "Entrez un nombre reel positif : ";
   cin >> number;

   int decimal_exponent = static_cast<int>(floor(log10(number)));
   double decimal_mantissa = number / pow(10, decimal_exponent);
   cout << number << " = " << decimal_mantissa << " * 10^" << decimal_exponent << endl;

   int binary_exponent = static_cast<int>(floor(log2(number)));
   double binary_mantissa = number / pow(2, binary_exponent);
   cout << number << " = " << binary_mantissa << " * 2^" << binary_exponent << endl;
}

/**
 * Ex 09: Compute the smallest integer that can't be represented with a float.
 */
void smallest_impossible_integer() {
   int number = 1;
   double number_of_digits_float =  numeric_limits<float>::digits;
   double max_value_float = pow(2.0, number_of_digits_float) + 1;
   double number_of_digits_double =  numeric_limits<double>::digits;
   double max_value_double = pow(2.0, number_of_digits_double) + 1;
   cout << boolalpha << setprecision(10);
   cout << max_value_float << endl;
   cout << boolalpha << setprecision(1);
   cout << max_value_double << endl;
}

/**
 * Ex 22: Compute the volume of a bottle given five user entered parameters
 */
void bottle_volume() {
   double r1, r2, h1, h2, h3;
   cout << "Entrez le rayon du cylindre 1 [cm]      :";
   cin >> r1;
   cout << "Entrez le rayon du cylindre 2 [cm]      :";
   cin >> r2;
   cout << "Entrez la hauteur du cylindre 1 [cm]    :";
   cin >> h1;
   cout << "Entrez la hauteur du cylindre 2 [cm]    :";
   cin >> h2;
   cout << "Entrez la hauteur du tronc de cone [cm] :";
   cin >> h3;
   double big_cylinder_volume = M_PI * pow(r1,2.0) * h1;
   double small_cylinder_volume = M_PI * pow(r2,2.0) * h2;;
   double truncated_cone_volume = (pow(r1,2.0) + pow(r2,2.0) + r1 * r2) * h3 * M_PI /
      3.0;
   double total_volume_litre = (big_cylinder_volume + small_cylinder_volume +
      truncated_cone_volume) * 0.001;

   cout << "La contenance de la bouteille est de " << total_volume_litre << " litre." <<
      endl;
}

/**
 *
 */
void convert_meter_to_imperial() {
   double meters;
   cout << "Entrez le nombre de metres a convertir (entier > 0) : ";
   cin >> meters;
   const double meter_to_mile_constant = 0.000621371;
   const double meter_to_feet_constant = 3.2808388799999997;
   const double meter_to_inches_constant = 39.370066559999997935;

   cout << "= " << meters * meter_to_mile_constant << " [mile]" << endl;
   cout << "= " << meters * meter_to_feet_constant << " [feet]" << endl;
   cout << "= " << meters * meter_to_inches_constant << " [inches]" << endl;
}

/**
 *
 * @return a number indicating if the method was successful or not
 */
int main() {
   //mantissa();
   //display_size();
   //smallest_impossible_integer();
   //bottle_volume();
   convert_meter_to_imperial();
}