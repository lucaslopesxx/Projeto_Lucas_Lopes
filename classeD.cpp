#include <iostream>
using namespace std;

class D
{
private:
    int D1;
    char D2;

public:
    // Construtor
    D(int d1, char d2) : D1(d1), D2(d2) {}

    // Getters e Setters
    int getD1() const
    {
        return D1;
    }

    void setD1(int d1)
    {
        D1 = d1;
    }

    char getD2() const
    {
        return D2;
    }

    void setD2(char d2)
    {
        D2 = d2;
    }

    // Métodos MD1 e MD2
    void MD1()
    {
        cout << "MD1" << endl;
    }

    void MD2()
    {
        cout << "MD2" << endl;
    }

    void MD3()
    {
        cout << "MD3" << endl;
    }
    void MD4()
    {
        cout << "MD4" << endl;
    }
};
