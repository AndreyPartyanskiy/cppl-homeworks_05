// cppl-homeworks_05_1.cpp 

#include <iostream>
#include <vector>

template <class T> 
void my_sq (T a)
{
    std::cout << "[IN]: " << a << std::endl;
    std::cout << "[OUT]: " << a*a << std::endl;
}

template <>
void my_sq(std::vector <int> abc)
{
    std::cout << "[IN]: "; 
    for (int i : abc) std::cout << i << " ";
    std::cout << std::endl;
    std::cout << "[OUT]: ";
    for (int i : abc) std::cout << i * i <<" ";
    std::cout << std::endl;
}

int main()
{
    my_sq(4);
    std::vector <int> abc1 = { -1, 4, 8 };
    my_sq(abc1);
    return 0;
}
