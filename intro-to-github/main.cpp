#include <iostream>

struct Matrix2i
{
    int a1, b1, a2, b2;
    Matrix2i operator * (const Matrix2i& op)
    {
        return Matrix2i{ 
        a1 * op.a1 + b1 * op.a2,
        a1 * op.b1 + b1 * op.b2,
        a2 * op.a1 + b2 * op.a2,
        a2 * op.b1 + b2 * op.b2 
        };
    }
};


int main()
{
    unsigned int action;
    std::cout << "Select action: \n(1) Get product of integers\n(2) Get sum of integers\n(3) Get product of matrices\n(4) Get sum of matrices\n\n";
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
    case 3:

        break;
    }
}
