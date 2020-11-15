#include <string>
#include <iostream>
int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *ptr = &s;
	std::string &ref = s;

	std::cout << "From the var : " << s << std::endl;
	std::cout << "From the ptr : " << *ptr << std::endl;
	std::cout << "From the var : " << ref << std::endl;

	return 0;
}