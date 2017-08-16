#include<iostream>
#include<vector>
#include<string>
#include<utility>

using namespace std;

// Concept 2 : Uniform Initialization. 

class TestClass1 
{

	public:
		int age;
		float salary;

		void show()
		{
			cout << "age = " << age << endl;
			cout << "salary = " << salary << endl;	
		}
};

class TestClass2
{
	private:
		int age;
		float salary;
		vector<int> ageList;
		vector<float> salaryList;

	public:
		TestClass2(const int& ageItem, const float& salaryItem)
		{
			age=ageItem;
			salary=salaryItem;
		}

		TestClass2(const initializer_list<std::pair<int,float>>& initializerList)
		{
			for(auto iter : initializerList)
			{		
				ageList.push_back(iter.first);
				salaryList.push_back(iter.second);	
			}		
		}


		void show()
		{
			cout << "age = " << age << endl;
			cout << "salary = " << salary << endl;
		}

		void showList()
		{
			for(auto iter1 : ageList)
				cout << iter1<< endl;
			for(auto iter2 : salaryList)
				cout << iter2 << endl;	
		}
};


int main(int argc, char* argv[])
{

	// C++ 03/98 had initialization using curly braces only for aggregate/pod type classes.
	TestClass1 item1 = {10, 12};
	item1.show();

	// C++11 extended the scope of initialization using curly braces beyond the aggregates to any class type.
	TestClass2 item2 = {38, 160.5};	
	item2.show();

	// The important concept to remember is below. There are 3 approaches that compiler can during uniform initialization. 
	// 1) initialize using an initializer list 2) initialize using class constructor 3) initialize using aggregate approach.
	// This happens in priority order of 1) -> 2) -> 3) [ i.e if 1) not found then will try 2) so on ].
	TestClass2 item3{ make_pair(12,45.76), make_pair(13,100.17) };
	item3.showList();

}
