#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char* argv[])
{

	// https://en.wikipedia.org/wiki/C%2B%2B11#Null_pointer_constant
	// https://youtu.be/U6mgsPqV32A?t=415

	int* item1 = nullptr;
	float* item2 = nullptr;
	bool testItem = nullptr; // converts to false. Although a very bad programming practice.
	if(!testItem)
		cout << "Yes it is false" << endl;

	// int testItem2 = nullptr;	 This will throw error in C++ 11 since nullptr can only implicitly convert to any type of a pointer item only. This would have worked in earlier C++ 
	int testItem2 = NULL; // Works still for backward compatiability but should be avoided going forward. 
	cout << item1 << endl; // prints zero but does not mean nullptr is zero.
}
