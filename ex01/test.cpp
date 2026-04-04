#include <iostream>

// Template simple
template <typename T>
void PrintValue(T &value)
{
	value += 1;
    std::cout << value << std::endl;
}


// Template simple
template <typename T>
void PrintValue(const T &value)
{
    std::cout << value << std::endl;
}

int main()
{
    int a = 42;
    const int b = 99;

    PrintValue(a); // T = int
    PrintValue(b); // T = int (¡OJO!)

    return 0;
}