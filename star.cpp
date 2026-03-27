#include <iostream>
using namespace std;
int main()
{
    cout << "Hello, World!" << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "tomorrow is our physics paper that's why i am not learning it" << endl;
    cout << "but still i am learning c++" << endl;
    return 0;
}