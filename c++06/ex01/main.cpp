#include <iostream>

struct Data {
	int a;
	int b;
};

std::uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<std::uintptr_t>(ptr);
}

Data *deserialize(std::uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	std::uintptr_t ptr;
	Data data;
	data.a = 1;
	data.b = 2;

	ptr = serialize(&data);
	Data *ptr2 = deserialize(ptr);
	std::cout << ptr2->a << " " << ptr2->b << std::endl;
	
	return 0;
}
