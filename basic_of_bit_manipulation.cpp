#include<bits/stdc++.h>

using namespace std;

//Get bit at perticular position
int get_bit(int n, int posi)
{
    return ((n & (1<<posi)) != 0);
}

// Set bit at perticular position 
int set_bit(int num, int posi)
{
    return (num | (1<<posi));
}

// Clear bit at particular position
int clear_bit(int n, int posi)
{
    int mask = ~(1<<posi);
    return (n & mask);
}

// Update given position of bit -->> first clear bit then set bit
int update_bit(int n, int posi, int value)
{
    int mask = ~(1<<posi);
    n = n & mask;
    return (n | (value<<posi));
}


int main()
{
    cout<<get_bit(5, 2)<<endl;
    cout<<set_bit(5, 1)<<endl;
    cout<<clear_bit(5, 2)<<endl;
    cout<<update_bit(5,1, 1);
    return 0;
}