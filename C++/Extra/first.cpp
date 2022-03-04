
// #include <iostream> //header file for print and scan like stdio.h
// #include <cstring>	//string.h has now cstring name
// #include <iomanip>	//setw() header file

#include<bits/stdc++.h>


using namespace std;

int c=45;
int i = 34;
void su()
{
	cout << "value of i is " << i << endl;
	
}

/*We will see that each object in C++ (as an object-oriented language) has a name. The
monitor connected to our computer also has a name in C++. It is called std :: cout. */

// std ::endl for new line

int main()
{
	/*cout << "hello world "; // cout for print the massage
	// std :: cout <<"hello world ";*/

	/*int sum = 6;
	cout << "sum is " << sum << endl; // endl is for new line

	int i = 24;
	cout << "value of i is " << i << endl;
	su();  // for global inisilization.*/

	/*int num1, num2;
	cout<<"Enter the value of num1:\n";                            //'<<' is called Insertion operator
	cin>>num1;                                                      // '>>' is called Extraction operator
	cout<<"Enter the value of num2:\n";
	cin>>num2;

	cout<<"The sum is "<< num1+num2;*/

	/**************Build in Data types****************
	int a, b, c;
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<"Enter the value of b:"<<endl;
	cin>>b;
	c = a + b;
	cout<<"The sum is "<<c<<endl;
	cout<<"The global c is "<<::c;                            // :: for taking value of global variable.
*/

	/************** Float, double and long double Literals****************
	float d=34.4F;
	long double e = 34.4L;
	cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
	cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
	cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
	cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
	cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
	cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
	 */

	//*************Reference Variables****************
	/*
	Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
	float x = 455;
	float & y = x;
	cout<<x<<endl;
	cout<<y<<endl;*/

	// *************Typecasting****************
	int a = 45;
	float b = 45.46;
	cout << "The value of a is " << (float)a << endl;
	cout << "The value of a is " << float(a) << endl;
	cout << "The value of b is " << (int)b << endl;
	cout << "The value of b is " << int(b) << endl;
	int c = int(b);
	cout << "The expression is " << a + b << endl;
	cout << "The expression is " << a + int(b) << endl;
	cout << "The expression is " << a + (int)b << endl;
	std::cout << "hello" << std::endl;

	return 0;
}
