/*

# include <iostream>

using namespace std;

int main ()
{
	int arg1 ;
	arg1 = -1;
	int x, y, z;
	char myDouble ='5';
	
	char arg1 ='A';
	cout << arg1 << "\n";
	return 0;
}
the program doesn't compile and give an error which states that we can't
define the variables of same names with different data types and values although by creating 
a new code block we can remove the error*/

//QUESTION # 2


/*# include <iostream>
using namespace std;

 int main ()
 {
 int arg1 ;
 arg1 = -1;
 {
 char arg1 = 'A';
 cout << arg1 << "\n";
 }
 return 0;
 }
 the program outputs A because the variable isn't defined in
 single block twice*/
 
 
 // Question # 3
 
 
/*
# include <iostream>
using namespace std;

 int main ()
 {
 int arg1 ;
 arg1 = -1;
 {
 char arg1 = 'A';
 cout << arg1 << "\n";
 }
 return 0;
 }
If the variable is accessed in the inner block then
the variable defined in the inner block will be called so ee can
say that the inner declaration will be called*/

// Question # 4

/*
# include <iostream>

using namespace std;

 int main ()
 {
 int arg1 ;
 arg1 = -1;
 {
 char arg1 = 'A';
 }
 cout << arg1 << "\n";
 return 0;
}

In this example the outer declaration is being accessed*/


// Question # 5
/*
using namespace std;

 int main ()
 {
 cout << "Hello , World !\n";
 return 0;
 }

# include <iostream>
The program doesn't run because a preprocessor should be present 
in the first line of the program because it pastes the content of a particular file
file in place of "# include" so if it is written at the bottom the functions in that file will not
be accessible to the code above it. By moving the last last line to the first line the program will work.*/