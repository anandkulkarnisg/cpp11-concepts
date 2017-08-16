#include<iostream>

using namespace std;

enum class Apple { green, red, white };
enum class Orange { green, red, black };

enum Test1 { apple_a, orange_a };
enum Test2 { apple_b, orange_b };

int main(int argc, char* argv[])
{

	Apple apple = Apple::green;
	Orange orange = Orange::green;

	// The below gives error as apple and orange are not just enumerated integer numbers but types in themselves so an unsafe comparison like below will not work.
	/*
	   if(apple == orange)
	   cout << "Yes" << endl;
	   else
	   cout << "No" << endl;
	   */

	// This is how we did in C++ 98/03 which is discouraged going forward. It is not correct to do it logically as apple_a and apple_b are of different type [ of enumerations ].
	if(apple_a == apple_b)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return(0);
}
