#include <iostream>
using namespace std;

int* insertX(int n, int arr[],int x, int pos)
{
    int i;
    n++;
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
        arr[pos - 1] = x;
     return arr;
}

int main() {
    clock_t start, end;
    start = clock();
 
    int arr[100] = { 0 };
    int i, x, pos, n = 10;
 
    for (i = 0; i < 10; i++)
        arr[i] = i + 1;
 
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    insertX(n, arr, 50,5);
    for (i = 0; i < n + 1; i++)
        cout << arr[i] << " ";
    cout << endl;
 
    return 0;
    
 
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "\n\nTime taken by program is : "<< time_taken ;
    cout << " sec " << endl;
    return 0;
}
