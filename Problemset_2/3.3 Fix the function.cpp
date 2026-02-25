# include <iostream>

void doubleNumber (int &num) {num=num*2;};

int main () {
 int num = 35;
 doubleNumber(num);
 std::cout << num ; // Should print 70
 return 0;
 }
 
 // by simply making num a reference variable,
 // code give the correct output without & C++
 // creates a copy of the variable and that disappears
 // as the function terminates.