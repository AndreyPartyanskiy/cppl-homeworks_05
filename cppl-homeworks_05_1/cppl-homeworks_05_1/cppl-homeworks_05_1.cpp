// cppl-homeworks_05_1.cpp 

#include <iostream>
#include <vector>

template <class T> 
T my_sq (T a)
{
    return (a * a);  
}

template <class T>
T my_sq(std::vector <int>& abc)
{
    for (int i = 0;i<abc.size();i++) abc[i] = abc[i] * abc[i];
    return abc;
}

int main()
{
    int a = 5;
    auto b =my_sq<int>(a);
    std::cout << "[IN]: " << a << std::endl;
    std::cout << "[OUT]: " << b << std::endl;

    std::vector <int> abc = { -1, 4, 8 };
    std::cout << "[IN]: ";
    for (int i = 0; i < abc.size(); i++)
    {
        std::cout << abc[i];
        if (i != abc.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;
    auto abc_= my_sq<std::vector<int>>(abc);
    std::cout << "[OUT]: ";
    for (int i = 0; i < abc_.size(); i++)
    {
        std::cout << abc_[i];
        if (i != abc_.size() - 1) std::cout <<", ";
    }
    std::cout << std::endl;
    return 0;
}
