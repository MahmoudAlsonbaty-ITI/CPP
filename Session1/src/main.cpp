#include "T.h"

#include <iostream>
 
using namespace std;

class Base{
    public:
        int m = 9;
};

class Sec: public Base{
    public:
        int x = 10;
};

int main()
{
    Base* b = new Base();
    Sec* s = static_cast<Sec*>(b);

    cout << s->x << endl;
    cout << "Template File"<<endl;
    return 0;
}