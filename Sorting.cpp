#include<iostream>
using namespace std;
#define MAX 100

int main()
{
    //array declartion
    int arr[MAX];
    int n,i,j;
    int temp,option;

    //read total number of elements to read
    cout<< "Enter total number of elements to read: ";
    cin>>n;

    //check bound
    if(n<0 || n>MAX)
    {
        cout << "Input valid range!!!\n";
        return -1;
    }

    //print input elements
    cout <<"Unsorted Array elements: "<<endl;
    for(i=0;i<n;i++)
        cout << arr[i]<<"\t";
    cout<<endl;

    //sorting in either ascending or descending order
    cout << "Choose to sort in either ascending or descending order\nEnter 1 for ascending or 2 for descending ";
    cin >> option;
    if(option == 1)
    {
        for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //print the elements
    cout << "Sorted array elements in ascending order: "<<endl;
    for(i=0;i<n;i++)
        cout <<arr[i]<<"\t";
    cout<<endl;
    }
    else if(option == 2)
    {
        for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //print the elements
    cout << "Sorted array elements in descending order: "<<endl;
    for(i=0;i<n;i++)
        cout <<arr[i]<<"\t";
    cout<<endl;
    }


    return 0;
}

