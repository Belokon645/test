#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter Your name: \n";

	std::string name;
	std::cin >> name;
	
	//create greeteng string
	const std::string greeting = "Hello, " + name + "!";
	//set spaces here
	const int pad = 1;
	//how many lines we have 
	const int rows = pad * 2 + 3;
	//how many symbols in 1 line
	const std::string::size_type cols = greeting.size() + pad * 2 + 2;

	std::cout << std::endl;
	// i know about for, but now use while cycle for output
	int r = 0;
	while (r != rows)
	{
		std::string::size_type c = 0;

		while (c != cols)
		{
			if (r == 0 || r == pad - 1 || c == 0 || c == cols - 1)
			{
				std::cout << "*";
				++c;
			}
			else {

			}
		}
		std::cout << std::endl;
		++r;
	}
	
}
