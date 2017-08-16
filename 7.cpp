#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main(int argc, char* argv[])
{

	// This would throw error during compile time itself.
	static_assert(sizeof(int) == 8);

}


