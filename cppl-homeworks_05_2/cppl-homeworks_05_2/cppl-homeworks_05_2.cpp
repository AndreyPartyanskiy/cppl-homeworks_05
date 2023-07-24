// cppl-homeworks_05_2.cpp 

#include <iostream>
#include <string>
#include <utility>


template <class T>
class simply_array
{
public:
    T** array_elements = nullptr;
    int num_col = 0;
    int num_row = 0;
    simply_array(int in_num_col,int in_num_row) : array_elements(new T*[in_num_col] {}), num_col(in_num_col),num_row(in_num_row)
    {
        for (int y = 0; y < num_col; y++)
        {
            for (int i = 0; i < num_row; i++)
            {
                array_elements[y] = new T[num_row]{};
            }
        }
    };

    void set_element(int in_num_col,int in_num_row, T in_data)
    {
        array_elements[in_num_col][in_num_row] = in_data;
    }
    std::pair<int,int> Size() const
    {
        std::pair <int, int> p1(num_col,num_row);

        return p1;
    }
    T get_element(int in_num_col,int in_num_row)
    {
        return array_elements[in_num_col][in_num_row];
    }
    void print()
    {
        std::cout << "arrey:" << "\n" << "\t";
        for (int y = 0; y < num_col; y++)
        {
            for (int i = 0; i < num_row; i++) std::cout << array_elements[y][i] << " ";
            std::cout << std::endl << "\t";
        }
        std::cout << std::endl;
    }

    int* operator[](const int i) 
    {
		return array_elements[i];
	}
 
    const int* operator[](const int i) const
    {
        return array_elements[i];
    }

    ~simply_array()
    {
        delete[] array_elements;
    }
};

int main()
{
    
    auto test = simply_array <int> (2,3);
    test.set_element(0,0, 5);
    test.set_element(1,1, 15);
    
    test.print();
    test[0][0] = 4;
    std::cout << "col: " << test.Size().first << " row: " << test.Size().second << "\n" << std::endl;
    std::cout << test[0][0] << std::endl;

    return 0;
}
