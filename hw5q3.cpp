#include <iostream>
using namespace std;
int dexp(unsigned int x, unsigned int y, unsigned int n)
{
    int solution = 1;
    x = x % n;
    if (x == 0)
    {
        return 0;
    }
    while (y > 0)
    {
        if (y & 1)
            solution = (solution * x) % n;
        y = y / 2;
        x = (x * x) % n;
    }
    return solution;
}
int main()
{
    int answer = dexp(35, 77, 83);
    cout << "(35^77)%83 = " << answer << endl;
    return 0;
}