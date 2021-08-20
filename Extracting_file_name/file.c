#include <stdio.h>
#include <stdlib.h>

int main()
{

    char *path = "ab/cde/fg.out";

    for (int i = strlen(path) - 1; i >= 0; i--)
    {
        if (path[i] == '/')
        {
            path = &path[i + 1];
            break;
        }
    }

    return 0;
}
