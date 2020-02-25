#include<iostream>
using namespace std;


int main(){
	//Write your code here.
	int a=5;
	char b='A';
	char &c=b;
	int *x =&a;
	char *y =&b;
	int **z = &x;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<*x<<endl;
	cout<<"y = "<<*y<<endl;
	cout<<"z = "<<**z<<endl;
	cout<<"-------------"<<endl;
	*y = 'W';
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<*x<<endl;
	cout<<"y = "<<*y<<endl;
	cout<<"z = "<<**z<<endl;
	cout<<"-------------"<<endl;
	*x=6;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<*x<<endl;
	cout<<"y = "<<*y<<endl;
	cout<<"z = "<<**z<<endl;
	cout<<"-------------"<<endl;
	**z=7;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"x = "<<*x<<endl;
	cout<<"y = "<<*y<<endl;
	cout<<"z = "<<**z<<endl;
	cout<<"-------------"<<endl;

	
	
	return 0;
}
