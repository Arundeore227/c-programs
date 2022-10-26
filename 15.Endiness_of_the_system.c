#include <stdio.h>
int is_little_endian(char , unsigned int);  //funciton prototype

int main()
{
  unsigned int num = 0x1;    //variable defination 
  char *cptr = (char*)&(num);  //variable defination
  is_little_endian(*cptr, num); //calling fun and passing value at cptr as well as num as AP
}

int is_little_endian(char cpt, unsigned int num) //function def 
{
    if(cpt == num)   //cheking if cpt eqauls to num system is liTTle endian
    {
       printf("System is little endian\n");    
    }
}
