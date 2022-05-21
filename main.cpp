#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a=12;
   // int *b=a;
    printf("num \n");
    //printf("%02x",((unsigned char*)&a)[1]); //  printf("%02x",*((unsigned char*)&a)+1);
    //printf("%02x\n",*(((unsigned char*)&a)+0));
     for (int i=0;i<sizeof(int);i++)
    {
     printf("%02x",*(((unsigned char*)&a)+i));   
    }

    //printf("%i",110001&1);
    //printf("%i",(a<<1));

    /*long long i;
    for (i=0;i<sizeof(int);i++)
    {
        printf("%02hhx",((unsigned char*)&a)[i]);
    }*/

    int reversed=0;
    for (int i=0;i<8;i++)
    {
        reversed|=((a>>i)&1)<<(8-i-1);
    } 
    printf("\ndec:%d\n",reversed);

    for (int i=0;i<sizeof(int);i++)
    {
     printf("%02hhx",*(((unsigned char*)&reversed)+i));   
    }
    



    return 0;

}