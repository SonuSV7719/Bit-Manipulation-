#include<bits/stdc++.h>
using namespace std;
 //Q. Write a program to find a unique number in an array 
//  where all numbers except one, are present twice 

// using XOR property
// Explanation XOR or any number with itself is always zero 

// XOR table
// 0 0 -->> 0
// 1 0 -->> 1
// 0 1 -->> 1
// 1 1 -->> 0

int uniqueEle(int arr[], int n)
{
    int xorsum = 0;
    for (int i=0; i<n; ++i)
    {
        xorsum ^= arr[i];
    }
    return xorsum;
}

// explanation

// xor of number by itselft is 0 by using this we can find unique max_element
// like taking xor of each element of array and if it equal to that element then it will be zero 
// otherwise it will give unique element 


// Q. Write program to find 2 unique numbers in an array
// where all numbers except two, are present twice;

int setBit(int n, int pos)
{
    return ((n & (1<<pos)) != 0);
}

void uniqueTwo(int arr[], int n)
{
    int xorsum =0;
    for (int i=0; i<n; ++i)
    {
        xorsum ^= arr[i];
    }
    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while(setbit != 1)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;
    for (int i = 0; i<n; ++i)
    {
        if(setBit(arr[i], pos-1))
        {
            newxor ^= arr[i];
        }
    }

    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
        
    
}


//Q write a program to find a unique number in an array
// where all numbers except one, are present thrice
 
int getBit(int n, int pos)
{
    return ((n & (1<<pos)) != 0);
}

int setBit1(int n, int pos)
{
    return (n | (1<<pos));
}

int uniqueThree(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i<64; ++i)// to traverse all 64 bits
    {
        int sum = 0;
        for (int j = 0; j<n; ++j)
        {
            if(getBit(arr[j], i))
            {
                sum++;
            }
        }
        if(sum % 3 != 0)
        {
            result = setBit1(result, i);
        }
    }
    return result;
}


int main()
{ 
    int arr[] = {1,2,3,1,2};
    int n = 5;
    int arr1[] = {1,2,3,1,2,5};
    cout<<uniqueEle(arr, n)<<endl;
    uniqueTwo(arr1, 6);
    int arr2[] = {1,1,1,2,2,2,3,3,3,4};
    cout<<uniqueThree(arr2, 10);
    return 0;
}