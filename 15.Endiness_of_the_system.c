#include <stdio.h>
int is_little_endian(char , unsigned int);

int main()
{
  unsigned int num = 0x1;
  char *cptr = (char*)&(num);
  is_little_endian(*cptr, num);
}

int is_little_endian(char cpt, unsigned int num)
{
    if(cpt == num)
    {
       printf("System is little endian\n");    
    }
}
