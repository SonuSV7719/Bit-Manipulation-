#include<bits/stdc++.h>

using namespace std;

// Write a program to count the number of ones in the binary representation of number
int number_of_ones(int n)
{
    int cnt = 0;
    while(n)
    {
        n = n & (n-1);
        cnt++;
    }
    return cnt;
}

int main()
{
    cout<<number_of_ones(19);
    return 0;
}