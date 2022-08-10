#include <iostream>
#include <math.h>  //for sqrt
#include <fstream> //for writing in file
using namespace std;

// program 6.23
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    fstream file;
    file.open("primeList.txt", ios::app);
    if (file.is_open())
    {
        for (int i = 1; i <= 100; i++)
        {
            if (isPrime(i))
            {
                file << i << endl;
            }
        }
    }
    return 0;
}