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
			//check all places where * must be
			if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
			{
				std::cout << "*";
				++c;
			}
			else 
			{
				//if it must be not *, check place for output message
				if (r == pad + 1 && c == pad + 1)
				{
					std::cout << greeting;
					c += greeting.size();
				}
				// if symbol not * or message, it must be only " "
				else
				{
					std::cout << " ";
					++c;
				}
			}
		}
		std::cout << std::endl;
		++r;
	}
	
}
