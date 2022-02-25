#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
void f(int* a, int n, int k)
{
    int i, j, temp;
    switch (k)
    {
    case 1:
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
                if (a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
        }break;
    case 2:
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
        }break;
    }



}

int main() {
    int* a, i, k, n;
    cout << "Vvedite kolichestvo" << endl;
    cin >> n;
    a = new int[n];

    cout << "Vvedite elementi" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i]; cin >> k;
    f(a, n, k);
    for (i = 0; i < n; i++)
        cout << a[i] << setw(5);


    delete[]a;
    return 0;
}