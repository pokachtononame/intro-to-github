#include <iostream>
#include <conio.h>

struct Matrix2i
{
    int a1, b1, a2, b2;
    void input()
    {
        char in;
        std::cout << "| "; in = _getch(); a1 = (int)(in - 48); std::cout << in << " "; in = _getch(); b1 = (int)(in - 48); std::cout << in << " |\n";
        std::cout << "| "; in = _getch(); a2 = (int)(in - 48); std::cout << in << " "; in = _getch(); b2 = (int)(in - 48); std::cout << in << " |\n";
    }
    void output()
    {
        std::cout << "| " << a1 << ", " << b1 << " |\n";
        std::cout << "| " << a2 << ", " << b2 << " |\n";
    }
    Matrix2i operator * (const Matrix2i& op)
    {
        return Matrix2i{ 
            a1 * op.a1 + b1 * op.a2,
            a1 * op.b1 + b1 * op.b2,
            a2 * op.a1 + b2 * op.a2,
            a2 * op.b1 + b2 * op.b2 
        };
    }

    Matrix2i operator + (const Matrix2i& op)
    {
        return Matrix2i{
            a1 + op.a1, b1 + op.b1,
            a2 + op.a2, b2 + op.b2
        };
    }
};

struct Complexi
{
    int r;
    int i;
    void input()
    {
        std::cin >> r; std::cout << "i * "; std::cin >> i;
    }
    void output()
    {
        const char* sign = (i < 0) ? "-" : "+";
        std::cout << r << " " << *sign << " " << abs(i) << "i\n";
    }
    Complexi operator * (const Complexi& op)
    {
        return Complexi{
            r * op.r - i * op.i,
            r * op.i + i * op.r
        };
    }
};


int main()
{
    while (1) {
        system("cls");
        unsigned int action;
        std::cout <<
            "Select action: \n"
            "(1) Get product of integers\n"
            "(2) Get sum of integers\n"
            "(3) Get product of matrices\n"
            "(4) Get sum of matrices\n"
            "(5) Get product of two complex numbers\n"
            "(6) Exit\n\n";
        std::cin >> action;
        int a, b;
        Matrix2i mat1;
        Matrix2i mat2;
        Matrix2i res;
        Complexi cint1;
        Complexi cint2;
        Complexi complex_res;
        switch (action)
        {
        case 1:
            std::cout << "\n";
            std::cin >> a;
            std::cin >> b;
            std::cout << "\n(1): " << a * b << "\n\n";
            break;
        case 2:
            std::cout << "\n";
            std::cin >> a;
            std::cin >> b;
            std::cout << "\n(2): " << a + b << "\n";
            break;
        case 3:
            std::cout << "\n";
            mat1.input();
            std::cout << std::endl;
            mat2.input();
            res = mat1 * mat2;
            std::cout << "(3:)\n";
            res.output();
            std::cout << "\n";
            break;
        case 4:
            std::cout << "\n";
            mat1.input();
            std::cout << std::endl;
            mat2.input();
            res = mat1 + mat2;
            std::cout << "(4:)\n";
            res.output();
            std::cout << "\n";
            break;
        case 5:
            std::cout << "\n";
            cint1.input();
            std::cout << "\n";
            cint2.input();
            std::cout << "\n";
            complex_res = cint1 * cint2;
            std::cout << "(5:)\n";
            complex_res.output();
            std::cout << "\n";
            break;
        case 6:
            return 0;
            break;
        default:
            std::cout << "Error: Invalid input\n";
            break;
        }
        system("pause");
    }
}
