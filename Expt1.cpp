#include<iostream>
using namespace std;

void read(int[], int &);
void display(int[], int);
void swap(int &, int &);
void sort(int[], int &);

int main() 
{
    int n, arr[100];
    read(arr, n);
    display(arr, n);
    sort(arr, n);

    cout<<"After Sorting : "<<endl;
    display(arr, n);

    return 0;
}

void read(int arr[], int &n) 
{
    cout<<"Enter the number of elements of array : "<<endl;
    cin>>n;

    cout<<"Enter data : "<<endl;

    for (int i = 0; i < n; i++) 
    {
        cin>>arr[i];
    }

}

void display(int a[], int n) 
{
    cout<<endl<<"Array is : "<<endl;

    for (int i = 0; i < n; i++) 
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl<<"------------------"<<endl;
}

void swap(int &i, int &j) 
{
    int temp;
    temp = i;
    i = j;
    j = temp;
}

void sort(int a[], int &n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < (n-i-1); j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);

            }
        }
    }
}