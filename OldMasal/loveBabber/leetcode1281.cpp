#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum, product, num;
    sum =  0 ;
    product = 1;
    while (n != 0)
    {
        num = n % 10;
        sum += num;
        product *= num;
        n = n / 10;
    }
    int result = product - sum;
    cout << result;
}