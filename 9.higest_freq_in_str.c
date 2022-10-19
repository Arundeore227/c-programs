#include <stdio.h>
int main() {
    int i, j, cnt=0, max_count=0;
    char str[100], rep_char;
    printf("ENter a string\n");
    scanf("%[^\n]", str);
    for(i=0; str[i]; i++)
    {
        cnt = 0;
        for(j=0; str[j]; j++)
        {
            if(str[i] == str[j])
            {
                cnt++;
            }
        }
        if(max_count < cnt)
            {
              max_count = cnt;
              rep_char = str[i];
            }
    }
    if(max_count>1)
    printf("%c is max repeating char repeted %d time", rep_char, max_count);
    else
       printf("Every character repeted once\n");

}
