/*
 *       cp -- a simplified copy command
 */

#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int ch;

    while ((ch = getc(stdin)) != EOF)
    {
        putc(ch, stdout);
    }
    return 0;
}
