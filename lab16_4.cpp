#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}


void shuffle(int &x, int &y, int &z , int &k){
	int arr[] {x,y,z,k};
	x = arr[rand()%4];
	do{
	y = arr[rand()%4];
	}while(y == x);
	do{
	z = arr[rand()%4];
	}while(z == y || z == x);
	do{
	k = arr[rand()%4];
	}while(k == z || k == x || k == y);
}
