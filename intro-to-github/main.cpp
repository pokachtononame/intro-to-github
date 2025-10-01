#include <iostream>

int main()
{
    unsigned int action;
    std::cout << "Select action: \n(1) Get product of integers\n(2) Get sum of integers\n\n";
    std::cin >> action;
    switch (action)
    {
    case 1:
        int a, b;
        std::cin >> a;
        std::cin >> b;
        std::cout << "(1): " << a * b << "\n\n";
        break;
    case 2:
        int a, b;
        std::cin >> a;
        std::cin >> b;
        std::cout << "(2): " << a + b << "\n\n";
        break;
    }
}
