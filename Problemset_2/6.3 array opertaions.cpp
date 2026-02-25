#include <iostream>
using namespace std;
const int LENGTH=3;
const int WIDTH=3;
void printArray(int array[],int &n) {
	int i=0;

	for(; n>=i; --n) {
		if(n-1==i) {
			cout<<array[i];
			break;
		}
		cout<<array[n-1]<<',';


	}
}
void transpose ( const int input [][LENGTH], int output [][WIDTH]) {
	for(int i=0; i<LENGTH; ++i) {
		for(int x=0; x<WIDTH; ++x) {
			output[x][i]=input[i][x];
		}
	}
}


int main() {
	const int arr[LENGTH][WIDTH]=
	{1,2,3,
	4,5,6,
	7,8,9};
	int out[LENGTH][WIDTH];
	transpose(arr,out);
	for(int i=0;i<LENGTH;++i){
	    for(int z=0;z<WIDTH;++z){
	        cout<<out[i][z]<<' ';
	    }
	}
	
}