#include <stdio.h>

main()
{
    int c, nl, nb, nt;

    nl = nb = nt = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            ++nl;
        }
        if(c == '\t')
        {
            ++nt;
        }
        if(c == ' ')
        {
            ++nb;
        }
    }

    printf("%d\t%d\t%d\n", nb, nt, nl);

}