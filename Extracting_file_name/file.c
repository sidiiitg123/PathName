#include <stdio.h>
#include <stdlib.h>

char *helper(char input[]){
    char *p;
    p = calloc(strlen(input), sizeof(int));

    if (p == NULL)
    {
        printf("memory not allocated");
    }
    else
    {
        for (int i = strlen(input)- 1; i >= 0; i--)
        {
            if (input[i] == '/')
            {
                i++;

                for (int j = 0; j < strlen(input); j++)
                {

                    if (input[i] == '\0')
                    {
                        break;
                    }
                    else
                    {
                        p[j] = input[i];
                    }
                    i++;
                }
                break;
            }
        }
    }
   return p;
}


int main()
{

 char input[] = "C:/Users/Public/123124grdfggfdf";
    char *p=helper(input);
    for (; *p; p++)
        printf("%c", *p);
   
    return 0;
}


