#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{

    //rintf(1001&1);
    printf("%i",1001);

    return 0;

}

uint32_t bit_reversal_a(uint32_t n)
{ 
    int bin_no=12;
    uint32_t result=0;
    for(int i=0;i<sizeof(n);i++) 
    {
        result<<=1; //left shift the result
        if(n&1>0) //check if the lsb is 1
            {
                result++;//add 1 to result
                n>>=1;//right shift n
            }
    }
    return result;
}

int bit_reversal_b(int n)
{
    int reversed=0;
    for (int i=0;i<sizeof(int);i++)
    {
        reversed|=((n>>i)&1)<<(32-i-1);
    }
    return reversed; 
}