# include <iostream>

using namespace std;

 int main ()
 {
 
 short number ;
 cout << " Enter a number : ";
 cin >> number ;
 if(number<0){
     
     long long accumulators = 1;
     cout << "The factorial of " << number << " is ";
     number*=-1;
     for (; number > 0; accumulators *= number --);
       cout << -accumulators << ".\n";
 }
 else{
     cout << "The factorial of " << number << " is ";
     long long accumulator = 1;//changed from int to long
     for (; number > 0; accumulator *= number --);
        cout << accumulator << ".\n";
 }

 return 0;
}
// I guess I should have coded the changes
// now but the above code works for 13! and 
// it also doesn't break when negative numbers
// are inputted.