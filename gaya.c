#include <stdio.h>
#include "parser.h"

int main()
{
    const char *input = "print \"hello world\"";
    parse(input);
    return 0;
}
