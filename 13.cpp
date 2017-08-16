#include<iostream>

using namespace std;

// This now can be used at compile time.
constexpr int A() { return 3; }

// Faster compile time calculated values.
constexpr int cubed() { return 4 * 4 * 4; }

int main(int argc, char* argv[])
{

	// Create an array of dimension grid[5][6];
	int grid[A()+2][A()+3];	

	// show the calculated value.
	cout << cubed() << endl;

	return(0);
}
