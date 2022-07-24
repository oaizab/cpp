#include <iostream>
#include <string>

bool is_char(const std::string &str)
{
	if (str.size() == 1)
		return true;
	return false;
}

bool is_int(const std::string &str)
{
	unsigned int i = 0;
	while (i < str.size() && str[i] >= '0' && str[i] <= '9')
		i++;
	if (i == str.size())
		return true;
	return false;
}

bool is_double(const std::string &str)
{
	unsigned int i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '.')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (i == str.size())
		return true;
	return false;
}

bool is_float(const std::string &str)
{
	unsigned int i = 0;
	if (str[0] == '-')
		i++;
	while (i < str.size() && str[i] >= '0' && str[i] <= '9')
		i++;
	if (i < str.size() && str[i] == '.')
		i++;
	while (i < str.size() && str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == 'f' && i != 0)
		i++;
	if (i == str.size())
		return true;
	return false;
}

void print_int(int nb_i)
{
	if (nb_i >= 32 && nb_i <= 127)
		std::cout << "char: " << static_cast<char>(nb_i) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << nb_i << std::endl;
	std::cout << "float: " << static_cast<float>(nb_i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb_i) << ".0" << std::endl;
}

void print_float(float nb_f)
{
	if (nb_f >= 32 && nb_f <= 127)
		std::cout << "char: " << static_cast<char>(nb_f) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(nb_f) << std::endl;
	if ((nb_f - static_cast<int>(nb_f)) == 0)
	{
		std::cout << "float: " << nb_f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(nb_f) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << nb_f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(nb_f) << std::endl;
	}
}

void print_double(double nb_d)
{
	if (nb_d >= 32 && nb_d <= 127)
		std::cout << "char: " << static_cast<char>(nb_d) << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(nb_d) << std::endl;
	if ((nb_d - static_cast<int>(nb_d)) == 0)
	{
		std::cout << "float: " << static_cast<float>(nb_d) << ".0f" << std::endl;
		std::cout << "double: " << nb_d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(nb_d) << "f" << std::endl;
		std::cout << "double: " << nb_d << std::endl;
	}
}

int main(int argc, char const *argv[])
{
	int nb_i;
	float nb_f;
	double nb_d;
	char nb_c;
	if (argc < 2)
	{
		std::cout << "Usage: ./a.out <number>" << std::endl;
		return (0);
	}
	std::string str = argv[1];
	if (str.size() == 0)
	{
		std::cout << "Usage: ./a.out <number>" << std::endl;
		return (0);
	}
	if (is_int(str))
	{
		nb_i = std::stoi(str);
		print_int(nb_i);
	}
	else if (is_double(str))
	{
		nb_d = std::stod(str);
		print_double(nb_d);
	}
	else if (is_float(str))
	{
		nb_f = std::stof(str);
		print_float(nb_f);
	}
	else if (is_char(str))
	{
		nb_c = str[0];
		print_int(nb_c);
	}
	else if (str == "nan" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else
		std::cout << "Error: invalid number" << std::endl;
	return 0;
}
