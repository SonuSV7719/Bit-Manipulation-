#include<bits/stdc++.h>
using namespace std;

void subsetGeneration(char arr[], int n)
{
    for (int i=0; i<(1<<n); i++) // this loop to traverse over up  to (2^n-1)
    {
        for (int j=0; j<n; j++) // to traverse over all element of array
        {
            if (i & (1<<j)) // j th bit is set or not
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}


// ===========explaination========================================
// {1,2,3}
// {} -->> 000 -->>0
// {3} --->> 001 -->> 1
// {2} -->> 010 -->> 2
// {2,3} -->>011 -->> 3
// {1} -->> 100 -->> 4
// {1,3} -->>101 -->> 5
// {1,2} -->> 110 -->> 6
// {1,2,3} -->> 111 -->> 7

int main()
{
    char arr[] = {'a','b','c'};

    subsetGeneration(arr, 3);
    return 0;
}