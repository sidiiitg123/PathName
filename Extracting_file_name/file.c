#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node *next;
}*head;

struct Node *helper(char input[])
{
    for (int i = strlen(input) - 1; i >= 0; i--)
    {

        if (head == NULL)
        {
            head = (struct Node *)malloc(sizeof(struct Node));
            head->data = input[i];
            head->next = NULL;
        }
        else
        {
            if (input[i] == '/')
            {
                break;
            }
            else
            {
                struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
                new_node->data = input[i];
                new_node->next = head;
                head = new_node;
            }
        }
    }
    return head;
}

// char *helper(char input[]){
//     char *p;
//     p = calloc(strlen(input), sizeof(int));

//     if (p == NULL)
//     {
//         printf("memory not allocated");
//     }
//     else
//     {
//         for (int i = strlen(input)- 2; i >= 0; i--)
//         {
//             p[i]=input[i];
//             char c =p[i];
//             int x=0;
//             // if (input[i] == '/')
//             // {
//             //     i++;

//             //     for (int j = 0; j < strlen(input); j++)
//             //     {

//             //         if (input[i] == '\0')
//             //         {
//             //             break;
//             //         }
//             //         else
//             //         {
//             //             p[j] = input[i];
//             //         }
//             //         i++;
//             //     }
//             //     break;
//             // }
//         }
//     }
//    return p;
// }


int main()
{

 char input[] = "C:/Users/Public/123124grdfggfdf";
   struct Node *p=helper(input);
    // for (; *p; p++)
    //     printf("%c", *p);
    while (p != NULL)
    {
        printf("%c", p->data);
        p = p->next;
    }
    return 0;
}


