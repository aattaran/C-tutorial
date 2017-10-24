/*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/


#include <iostream>
using namespace std;

int main()
{
    int a;
    short b;
    long c;
    char d;
    float e;
    double f;
    bool g;
    cout<< sizeof(a) <<endl;
    cout<< sizeof(b)<<endl;
    cout<< sizeof(c)<<endl;
    cout<< sizeof(d)<<endl;
    cout<< sizeof(e)<<endl;
    cout<< sizeof(f)<<endl;
    cout<< sizeof(g);
}