/* Tipos
Melissa Farina
20190502
*/

#include <iostream>
#include <cassert>

int main() {
   //Ejemplo con int
  int i1 = -2;
  int i2 = 10;
  int res_i = i1 * i2;
  assert(res_i = -20);

   //Ejemplo con double
  double d1 = 1.5;
  double d2 = 3.5;
  double res_d = d1 + d2;
  assert(res_d = 5);
  
  //Ejemplo con unsigned
  unsigned u1 = 200;
  unsigned u2 = 100;
  unsigned res_u = u1 / u2;
  assert(res_u = 2);
  
  //Ejemplo con bool y char
  char char1 = 'a';
  char char2 = 'b';
  bool bool1 = char1 == char2; //('a' == 'b') False
  bool bool2 = char1 != char2; //('a' != 'b') True
  assert(char1 != char2);
  bool bool3 = d1 < d2; // (1.5 < 3.5) True
  assert(d1 < d2);
  
 
 //Ejemplo con string
  std::string str1 = "Hola";
  std::string str2 = "Mundo";
  std::string str3 = str1 + " " + str2;
  assert(str3.length() > 0);

}
