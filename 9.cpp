#include<iostream>
#include<vector>
#include<string>

using namespace std;

// In C++ 03/98 an accidental mistake in the signiture of a virtual function [ attempted to be over ridden in the derived class ] of a base class leads to a function defined entirely on its own.
// i.e creates a new function and it will not cause any issues in compilation and will lead to unexpected run time issues.

class Dog
{
public:
	virtual void A(int) { cout << "I am in base A(int)" << endl; }
	virtual void A() const { cout << "I am in the base A() const" << endl; }
};


class YellowDog : public Dog
{
public:
	virtual void A(float) { cout << "I am in the derived yellow dog class" << endl; }
	virtual void A() { cout << "I am in the yellow dog class function" << endl; }
};



class Cpp11ExampleBase
{

public:
	virtual void A(int) { cout << "I am in base A(int)" << endl; }
	virtual void A() const { cout << "I am in the base A() const" << endl; }
};

class Cpp11ExampleDerived : public Cpp11ExampleBase
{

public:
	virtual void A(float) override; // should throw error [ no base class function with same singniture can be found that can be overriden ].
	virtual void A() override;  // should throw error.
};

int main(int argc, char* argv[])
{

	Dog* ptr = new YellowDog();
	ptr->A(12.46);
	ptr->A();	


}



