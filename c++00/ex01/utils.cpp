#include "utils.hpp"
#include <string>



std::string getShort(std::string str)
{
	std::string copy = str;
	size_t pos;
	while ((pos = copy.find('\t')) != std::string::npos)
		copy.replace(pos, 1, "    ");
	if (copy.length() <= 10)
		return copy;
	return (copy.substr(0, 9) + ".");
}
