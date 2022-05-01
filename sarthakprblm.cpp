#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            return arr[i];
        }
    }
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}