#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
      count = count + a[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(a[i] > a[i+1]) swap(a[i], a[i+1]);
        }

    }
    cout << (double)count/n << endl;
    cout << "max: " << a[n-1] << endl;
    cout << "min: " << a[0] << endl;

}
