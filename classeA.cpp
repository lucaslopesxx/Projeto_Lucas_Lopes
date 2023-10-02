#include <iostream>
using namespace std;

class A
{
private:
    int A1;
    float A2;

public:
    // Construtor
    A(int a1, float a2) : A1(a1), A2(a2) {}

    // Getters e Setters
    int getA1() const
    {
        return A1;
    }

    void setA1(int a1)
    {
        A1 = a1;
    }

    float getA2() const
    {
        return A2;
    }

    void setA2(float a2)
    {
        A2 = a2;
    }

    // Métodos MA1 e MA2
    void MA1()
    {
        cout << "MA1" << endl;
    }

    void MA2()
    {
        cout << "MA2" << endl;
    }

    void MA3()
    {
        cout << "Alteração a classe A partir do clone" << endl;
    }
};
