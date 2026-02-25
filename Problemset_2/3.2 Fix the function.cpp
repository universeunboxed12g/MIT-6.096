# include <iostream>
 
/*
 
void printNum(int &number) { std :: cout << number ; };
 

 
int main () {
 
 int number = 35;
 
 printNum(number);
 
 return 0;
 
}*/
// This is the first solution and is preferred 
int number = 35;
 
void printNum(){ std :: cout << number ; };
 
 
int main(){
 printNum();
 
 return 0;
 
}
// This is less preferred and causes the function to be
// limited to a single global variable called number.