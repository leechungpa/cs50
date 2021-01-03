#include <stdio.h>

int main(int argc, char *argv[])
{
    // 2 arguments in prompt
    if (argc != 2)
    {
        return 1;
    }

    // open file
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        return 1;
    }

    // reade 3 bytes form file
    unsigned char bytes[3];
    fread(bytes, 3, 1, file);

    // chech jpeg format : 0xff 0xd8 0xff
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("Maybe.\n");
    }
    else
    {
        printf("No.\n");
    }
    fclose(file);
}
