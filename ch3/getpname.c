/*
        getpname -- extract the base name of a program from the
        pathname string (deletes a drive specifier, any leading
        path node information, and the extension)
*/

#include <stdio.h>
#include <ctype.h>

void getpname(char *path, char *pname)
{
    char *cp;

    /* find the end of the pathname string */
    cp = path; /* start of pathname */
    while (*cp != '\0')
    {
        ++cp;
    }
    --cp; /* went one too far */

    /* find the start of the filename part */
    while (cp > path && *cp != '\\' && *cp != ':' && *cp != '/')
    {
        --cp;
    }

    if (cp > path)
    {
        ++cp; /* move to right of pathname separator */
    }

    /* copy the filename part only */
    while ((*pname = tolower(*cp)) != '.' && *pname != '\0')
    {
        ++cp;
        ++pname;
    }
    *pname = '\0';
}