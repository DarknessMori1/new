#include <iostream>

using namespace std;

void foo(){
    static int a;
    int b;
    int c = 0;
    a++;
    b++;
    c++;
    cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
}

int main ()
{
    for (int i = 0; i < 10; i++){
        foo();
    }
}