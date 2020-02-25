#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() here 
void shuffle(int &a,int &b, int &c,int &d){
	int *array[] ={&a,&b,&c,&d} ,i,j;
	for(int k=0;k<10;k++){
		i = rand()%4;
		j = rand()%4;
	}

	int temp = *array[i];
	*array[i] = *array[j];
	*array [j] = temp;


}