#include<bits/stdc++.h>

using namespace std;

// Write a program to check if a given number is power of 2
bool is_power_of2(int num)
{
    return (num && !(num & (num-1)));
}

int main()
{
    cout<<is_power_of2(14);
    return 0;
}