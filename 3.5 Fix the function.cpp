# include <iostream>

int sum ( const int x, const int y, const int z ) {
 return x + y+z;
 }

int main () {
 std :: cout << sum (1, 2, 3); // Should print 6
 return 0;
 }
 // for three digits there should be three arguments
 // for the int sum function.