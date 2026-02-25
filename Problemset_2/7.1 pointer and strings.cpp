#include <iostream>
using namespace std;

int length(const char* str){
    int i=0;
    while(*str!='\0'){
        
        i+=1;
        str++;
            
            

        }
    return i;
    
}
int main(){
    const char* str="hello bfnf h y g g h ";
    cout<<length(str);
}