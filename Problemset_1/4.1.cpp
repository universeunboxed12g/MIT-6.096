# include <iostream>

using namespace std;

int main ()
 {
 short number ;
 cout << " Enter a number : ";
 cin >> number ;

 cout << "The factorial of " << number << " is ";
 int accumulator = 1;
 for (; number > 0; accumulator *= number --);
 cout << accumulator << ".\n";

 return 0;
 }

The factorial of 0 is 1

The factorial of 1 is 1

The factorial of 2 is 2

The factorial of 0 is 1


The factorial of 9 is 362880

The factorial of 10 is 3628800



