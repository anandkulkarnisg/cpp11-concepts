#include<iostream>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{

	// All we had in C++ 03/98 was the only type of string with char*.
	char* sampleItem = "Anand Apparao Kulkarni";

	// In C++ 11 we have different type of character string literals. unicode support.
	char* a = u8"I am Anand";
	char16_t* b = u"I am a UTF 16 string";
	char32_t* c = U"I am a UTF 32 string";
	char* d = R"(I am a raw literal string \\)";	
	char* e = R"(First line.\nSecond line.\nEnd of message.\n)";	

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	return(0);
}
