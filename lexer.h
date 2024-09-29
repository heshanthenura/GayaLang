#ifndef LEXER_H
#define LEXER_H

typedef enum
{
    TOKEN_PRINT,
    TOKEN_STRING,
    TOKEN_EOF,
    TOKEN_UNKNOWN
} TokenType;

typedef struct
{
    TokenType type;
    char *value;
} Token;

Token *next_token(const char *input);

#endif
