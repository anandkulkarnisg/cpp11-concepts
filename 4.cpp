#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{

	vector<int> vec = { 1, 2, 3, 4, 5, 6 };
	// In c++ 03/98 we needed to do explicit looping like below.

	for(vector<int>::iterator it = vec.begin(); it!= vec.end(); ++it)
		cout << *it << endl;

	// In C++ 11 we can do this with foreach loop syntax and far fewer keywords.
	
	for(auto iter : vec) // Esentially means loop over all items of vec until end is reached.
		cout << iter << endl;	

	return(0);

}
