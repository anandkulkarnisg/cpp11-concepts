#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main(int argc, char* argv[])
{

	// auto can be used to derive the type of variable required without having to explicitly mention it every time.
	pair<int,float> samplePair = make_pair(10, 12.46);

	auto item1 = samplePair.first;  // This is now int.
	auto item2 = samplePair.second; // This is now float.

	cout << item1 << item2 << endl;

	// auto in below example demonstrates the iterator type.
	vector<int> sampleVec = {1, 2, 3, 4, 5, 6};
	for(auto iter : sampleVec)
		cout << iter << endl;	

	return(0);
}
