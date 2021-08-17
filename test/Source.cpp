#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter Your name: \n";

	std::string name;
	std::cin >> name;
	
	//create greeteng string
	const std::string greeting = "Hello, " + name + "!";

	const int pad = 1;

	const int rows = pad * 2 + 3;

	const std::string::size_type cols = greeting.size() + pad * 2 + 2;

	std::cout << std::endl;

	

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
