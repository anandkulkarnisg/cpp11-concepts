#include<iostream>

using namespace std;

class TestClass 
{
	private:
		int age;
		int salary;
		int defaultInfo=10; // This will never work. since default constructor will always be called and set the defaultInfo to 99.

	public:
		TestClass()
		{
			defaultInfo=99;			
		}		

		TestClass(const int& ageItem, const int& salaryItem) : TestClass() { age=ageItem; salary=salaryItem; }

	public:
		void show()
		{
			cout << "age = " << age << endl;
			cout << "salary = " << salary << endl;
			cout << "defaultInfo = " << defaultInfo << endl;	
		}
};


int main(int argc, char* argv[])
{
	TestClass item(10, 20);
	item.show();		
}
