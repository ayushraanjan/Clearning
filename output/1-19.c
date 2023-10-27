#include <stdio.h>
#include <string.h>

void reverse(char c[])
{
    int i, j;
    char temp;
    for(i = 0, j = strlen(c) - 1; i < j; i++, j--)
    {
        temp = c[i];
        c[i] = c[j];
        c[j] = temp;
    }

}
int main ()
{
    char line[1000];

    while(fgets(line, sizeof(line), stdin) != NULL)
    {
        reverse(line);
        printf("%s", line);

    }
    return 0;
}