#include<iostream>

using namespace std;

class SampleClass final
{

};


// This throws error as TestClass can not derive from a final class.
class TestClass : public SampleClass
{
	virtual void A() final; // No derived class can override the A() virtual function as it is final.
};

int main(int argc, char* argv[])
{
	cout << "This code will not compile" << endl;
}

