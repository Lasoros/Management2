#include <iostream>
#include <iomanip>
using namespace std;

float average(int num1, int num2, int num3) //renamed
{
	return (num1 + num2 + num3) / 3.0f; //added () so order of ops. was followed
}

int main()
{
	int n1 =0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three (whole) numbers. . ." << endl; //made more descriptive
	cout << "Please Enter the first number: "; cin >> n1;
	cout << "Please Enter the second number: "; cin >> n2;
	cout << "Please Enter the third number: "; cin >> n3; // fixed n2 to n2

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	//cout << "Number 1: " << n1;
	//cout << "Number 2: " << n2;
	//cout << "Number 3: " << n3; didnt see that line three had n2 again, used this to trouble shoot

	return 0;
}