#include <iostream>
#include <string>
using namespace std;

string isBinary(int N)
{
    if (N == 1)
    {
        return "1";
    }
    else if (N % 2 == 1)
    {
        return isBinary(N / 2) + "1";
    }
    else
    {
        return isBinary(N / 2) + "0";
    }
}

int main()
{
    int N;
    cin >> N;
    cout << isBinary(N)
         << endl;
}
