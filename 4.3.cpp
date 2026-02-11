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
     long accumulator = 1;//changed from int to long
     for (; number > 0; accumulator *= number --);
        cout << accumulator << ".\n";
 }

 return 0;
}
// It doesn't give a correct solution when inputted
// 13 or above it is due to we are storing accumulator
// as int which only store 32 bits of data if we change 
// it to long or long long or int64_t it will produce a correct
// result.