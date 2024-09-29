#include <stdio.h>
#include "parser.h"

void parse(const char *input)
{
    Token *token = next_token(input);
    if (token->type == TOKEN_PRINT)
    {
        token = next_token(input);
        if (token->type == TOKEN_STRING)
        {
            printf("%s\n", token->value); // Print the string value
        }
        else
        {
            printf("Error: Expected string after 'print'\n");
        }
    }
    else
    {
        printf("Error: Expected 'print'\n");
    }
    free_token(token); // Free allocated memory for token
}
