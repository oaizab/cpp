#include <fstream>
#include <iostream>

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Usage: ./main <filename> <s1> <s2>" << std::endl;
		std::cout << "Example: ./main test ok ko" << std::endl;
		return (1);
	}
	std::string filename(av[1]);
	filename += ".replace";
	std::ifstream fin(av[1]);
	if (!fin)
	{
		std::cout << "Cannot open file " << av[1] << std::endl;
		return (1);
	}
	std::ofstream fout(filename, std::ofstream::trunc);
	if (!fout)
	{
		std::cout << "Cannot open file " << filename << std::endl;
		return (1);
	}
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::string line;
	while (std::getline(fin, line))
	{
		std::size_t pos;
		while ((pos = line.find(s1)) != std::string::npos)
		{
			line.erase(pos, s1.size());
			line.insert(pos, s2);
		}
		fout << line << std::endl;
	}
	return (0);
}