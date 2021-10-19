#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    bool flag = false;


    cout << "Enter q to quit" << endl;
    do
    {
        char input;
        cin >> input;
        flag = input == 'q' || input == 'Q';

    } while (!flag);

    return 0;
}