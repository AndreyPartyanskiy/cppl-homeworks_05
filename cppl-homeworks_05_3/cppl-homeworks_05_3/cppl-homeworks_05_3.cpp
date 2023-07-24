// cppl-homeworks_05_3.cpp 

#include <algorithm>
#include <iostream>


class MyFunctor {
    int sum_;
    int count_;
public:
    MyFunctor() : sum_(0), count_(0) {}
    void operator()(int x) {
        if (x % 3 == 0)
        {
            count_++;
            sum_ += x;
        }
    }
    int get_sum() const { return sum_; }
    int get_count() const { return count_; }
};

int main() {
    MyFunctor count_elem;

    int my_list[] = { 4, 1, 3, 6, 25, 54 };
    
    count_elem = std::for_each(my_list,my_list + sizeof(my_list) / sizeof(my_list[0]),count_elem);
    std::cout << "[IN]: "; for (int i : my_list) std::cout << i << " "; std::cout << std::endl;
    std::cout << "[OUT]: get_sum() = " << count_elem.get_sum() << "\n";
    std::cout << "[OUT]: get_count() = " << count_elem.get_count() << std::endl;

    return 0;
}