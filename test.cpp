#include <iostream>

int main()
{
    int arr[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] % 2 == 0)
        {
            std::cout << arr[i] << " - Even number \n";
        }
    }
}