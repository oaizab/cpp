#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char **argv)
{
	std::string text;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++)
	{
		text += argv[i];
	}
	for (int i = 0; i < (int) text.length(); i++)
	{
		text[i] = toupper(text[i]);
	}
	std::cout << text << std::endl;
	return 0;
}