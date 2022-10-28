#include <stdio.h>
int main() {
    //varible declaartion
    int i, j, cnt=0, max_count=0;
    char str[100], rep_char;
    printf("ENter a string\n");  //mssge for the user
    scanf("%[^\n]", str); //reading string from the user
    for(i=0; str[i]; i++)  //travesing over the string
    {
        cnt = 0;    //ressting count to 0 
        for(j=0; str[j]; j++)  //tarversing inner loop on string
        {
            if(str[i] == str[j])  //if str[i] mateches with str[j] 
            {
                cnt++;     //incrementing the count
            }
        }
        if(max_count < cnt)  //logic to find larest
            {
              max_count = cnt;
              rep_char = str[i];  //storing largest occured char
            }
    }
    if(max_count>1)  //condition to check if char repeted more than one or not
    printf("%c is max repeating char repeted %d time", rep_char, max_count);
    else
       printf("Every character repeted once\n");

}
