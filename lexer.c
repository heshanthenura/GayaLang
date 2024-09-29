#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lexer.h"

Token *create_token(TokenType type, const char *value)
{
    Token *token = malloc(sizeof(Token));
    token->type = type;
    token->value = strdup(value);
    return token;
}

void free_token(Token *token)
{
    free(token->value);
    free(token);
}

Token *next_token(const char *input)
{
    static const char *current = NULL;
    if (current == NULL)
    {
        current = input;
    }

    while (*current)
    {
        if (strncmp(current, "print", 5) == 0)
        {
            current += 5;
            return create_token(TOKEN_PRINT, "print");
        }
        if (*current == '"')
        {
            const char *start = ++current;
            while (*current && *current != '"')
            {
                current++;
            }
            if (*current == '"')
            {
                size_t length = current - start;
                char *string_value = malloc(length + 1);
                strncpy(string_value, start, length);
                string_value[length] = '\0';
                current++; // skip closing quote
                return create_token(TOKEN_STRING, string_value);
            }
        }
        current++;
    }

    return create_token(TOKEN_EOF, NULL);
}
