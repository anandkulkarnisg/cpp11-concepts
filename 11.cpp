#include<iostream>
#include<string>

using namespace std;

// in C++ 98/03 the compiler will not generate a default constructor if a parameter constructor is defined.
class SampleClass1
{
	public:
		SampleClass1(int) { };
};


// In C++ 11 it works if requested via the default keyword.
class SampleClass2
{

	public:
		SampleClass2(int) { };
		SampleClass2() = default;
};


int main(int argc, char* argv[])
{
	// In C++ 98 the below will error since no default constructor is available.		
	SampleClass1* test = new SampleClass1();

	// In C++11 with request made to compiler via default keyword it should work now.
	SampleClass2* test2 = new SampleClass2();

	return(0);
}
