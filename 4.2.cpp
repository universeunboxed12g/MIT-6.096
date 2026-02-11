# include <iostream>

using namespace std;

 int main ()
 {
 short number ;
 cout << " Enter a number : ";
 cin >> number ;
 if(number<0){
     
     int accumulator = 1;
     cout << "The factorial of " << number << " is ";
     number*=-1;
     for (; number > 0; accumulator *= number --);
       cout << -accumulator << ".\n";
 }
 else{
     cout << "The factorial of " << number << " is ";
     int accumulator = 1;
     for (; number > 0; accumulator *= number --);
        cout << accumulator << ".\n";
 }

 return 0;
}
// In this program I simply introduced an if-else
//statement.