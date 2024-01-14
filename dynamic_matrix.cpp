#include<iostream>
using namespace std;

void matrix_addition(int m1[50][50], int m2[50][50], int m3[50][50], int n, int m)
{
    int i, j;

    cout << "Enter elements of first matrix:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> m1[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> m2[i][j];
        }
    }

    cout << "Sum of both matrices:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
            cout << m3[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n, m;

    cout << "Enter the size of matrices (rows and columns):" << endl;
    cin >> n >> m;

    int m1[50][50], m2[50][50], m3[50][50];

    matrix_addition(m1, m2, m3, n, m);

    return 0;
}
