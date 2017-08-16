#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

template<typename T> void filter(T f, vector<int> array)
{
	for(auto i : array)
	{
		if(f(i))
			cout << i << endl;
	}
}

int main(int argc, char* argv[])
{
	vector<int> vec = { 1, 2, 3, 4, 5, 6 };
	filter([] (int x){ return x>3; }, vec); // All items greater than 3.
	filter([] (int x){ return(x<2 || x>3); }, vec); // All items less than 2 or greater than 3.
	filter([] (int x){ return(x%2); }, vec); // Find all odd items. 
	filter([] (int x){ return(x%2==0);}, vec); // Find all even items.

	// One can simplify the coding via below apparoach.
	auto f = ([] (int x){ return x>3; });
	filter(f, vec);	

	// Demo of a variable capture in a lambda function.
	int y=3;
	int z=1;

	// Variable capture is indicated by [&] that tells any variables referenced inside can be picked from the immediate outer scope.
	// In this case y and z.

	cout << "variable capture demo output" << endl;
	filter([&] (int x){ return x>(y+z); }, vec);

	// Using lambda to remove certain items from an array.
	vec.erase(std::remove_if(vec.begin(), vec.end(), [] (int x){ return x>3; }), vec.end());
	cout << "After erasure the vector is now" << endl;
	for(auto iter : vec)
		cout << iter << endl;

	return(0);
}
