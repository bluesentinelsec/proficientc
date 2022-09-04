/* setmydir -- try to change the DOS environment */

#include <stdio.h>
#include <stdlib.h>
#include "std.h"

void main(int argc, char **argv, char **envp)
{
    register char **p;
    static char var[] = {"MYDIR"};
    static char pgm[MAXNAME + 1] = {"setmydir"};

    extern void fatal(char *, char *, int);
    extern void getpname(char *, char *);

    /* use an alias if one is given to this program */
    if (_osmajor >= 3)
    {
        getpname(*argv, pgm);
    }

    /* try to add the MYDIR variable to the environment */
    if (putenv("MYDIR=C:\\mydir") == -1)
    {
        fatal(pgm, "Error changing environment", 1);
    }

    /* display the environment for this process */
    for (p = environ; *p; p++)
    {
        printf("%s\n", *p);
    }

    exit(0);
}
