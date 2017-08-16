#include<iostream>
#include<memory>

using namespace std;


// Ex: in C++ 98/03 The below class would allow a SampleClass1(float) to be initialized as well. The float will be casted into an integer and the (int x) constructor will be called.
class SampleClass1
{
	private:
		int age;

	public:
		SampleClass1(int x) { age=x; }			
};


// Ex:- In C++ 11 now it is possible to delete the certain interfaces of class that implementer does not want to be called using delete keyword.
class SampleClass2
{
	private:
		int age;

	public:
		SampleClass2(int x) { age=x; }
		SampleClass2(float) = delete;
		SampleClass2& operator=(const SampleClass2&) = delete;
};



int main(int argc, char* argv[])
{
	// In C++ 98/03
	std::shared_ptr<SampleClass1> testObj(new SampleClass1(12.45));	
	SampleClass1 t1(10);
	SampleClass1 t2(20);
	t1=t2; // This will invoke the compiler provided default assignement operator [ bitwise copy ].

	// In C++ 11
	SampleClass2 test(12.45f); // Will throw error.

	return(0);
}
