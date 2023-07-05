#include <iostream>


int* apply_all(const int* arr1, const size_t size_arr1, const int* arr2, const size_t size_arr2);
void print(const int* arr, const size_t size_arr);

int main()
{
    int array1[]{1,2,3,4,5}, array2[]{10,20,30};

    std::cout << "Array 1: "; print(array1, 5);
    std::cout << "Array 2: "; print(array2, 3);

    int* results = apply_all(array1, 5, array2, 3);
    std::cout << "Result: "; print(results, 15);

    return 0;
}

int* apply_all(const int* arr1, const size_t size_arr1, const int* arr2, const size_t size_arr2)
{
    int* p_arr = new int[size_arr1 * size_arr2];
    int counter{0};

    for (size_t i=0; i < size_arr1; i++)
    {
        for (size_t j=0; j < size_arr2; j++)
        {
            p_arr[counter] = arr1[i] * arr2[j];
            counter++;
        }
    }
    return p_arr;
}
void print(const int* arr, const size_t size)
{
    std::cout << "[ ";
    for (size_t i=0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << "]\n";
}