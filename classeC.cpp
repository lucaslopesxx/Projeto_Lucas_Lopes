#include <iostream>
using namespace std;

class C
{
private:
    string C1;
    int C2;

public:
    // Construtor
    C(const string &c1, int c2) : C1(c1), C2(c2) {}

    // Getters e Setters
    const string &getC1() const
    {
        return C1;
    }

    void setC1(const string &c1)
    {
        C1 = c1;
    }

    int getC2() const
    {
        return C2;
    }

    void setC2(int c2)
    {
        C2 = c2;
    }

    // Métodos MC1 e MC2
    void MC1()
    {
        cout << "MC1" << endl;
    }

    void MC2()
    {
        cout << "MC2" << endl;
    }

    void MC3()
    {
        cout << "MC3" << endl;
    }
};
