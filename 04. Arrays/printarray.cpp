#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the array size: ";
    int Size;
    cin >> Size;
    int arr[Size];
    cout << "Enter the array elements " << endl;
    for (int i = 0; i < Size; i++)
    {
        cin >> arr[i];
    }
    // printing the array in the correct order
    cout << "Printing the values of inputted array" << endl;
    for (int i = 0; i < Size; i++)
    {
        cout << arr[i] << " ";
    }

return 0;
}