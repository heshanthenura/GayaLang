#include <stdio.h>

int main(int argc, char *argv[])
{
    // Check if any arguments were provided
    if (argc < 2)
    {
        printf("no source file is provided \n");
        printf("Ex : hesh main.hesh");

        return 1;
    }

    return 0;
}