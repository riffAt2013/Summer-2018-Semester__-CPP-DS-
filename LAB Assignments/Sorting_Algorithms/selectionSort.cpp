#include <iostream>
using namespace std;

void printSteps (int arr[], int n)
{
    for (int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

void selectionSort (int arr[], int n)
{
    int i, j;

    for (i = 0; i<n; i++)
    {
        for (j = i; j<n; j++)
        {
            if (arr[i] > arr[j])
                swap (arr[i], arr[j]);
        }
        printSteps (arr, n);
                cout<<endl;
    }
}



int main()
{
    int arr[] = {14, 33, 27,10,35,19,48,44};
    int n =sizeof(arr) / sizeof(arr[0]);

    selectionSort (arr, n);

}

