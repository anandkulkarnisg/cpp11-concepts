#include<iostream>
#include<string>
#include<vector>
#include<initializer_list>

using namespace std;

class VectorWrapperClass
{

	private:
		vector<int> vec;

	public:
		VectorWrapperClass(const initializer_list<int>& v)
		{
			for(auto iter : v)
				vec.push_back(iter);	
		}		

		void show()
		{
			for(auto iter : vec)
				cout << iter << endl;	
		}
};


int main(int argc, char* argv[])
{

	// concept 1 : part a) vector can be directly initialized using a initializer list.
	vector<int> v = { 1, 2, 3, 4}; // vector initialization using initializer list.		
	for(auto iter : v)
		cout << iter << endl;


	// concept 2 : part b) vector can be initialized using a initializer list in a class.
	VectorWrapperClass vectorItem {1, 2, 3, 4, 5 };	
	vectorItem.show();
}
