# include <stdio.h>

int main(int argc, char *argv[])
{
    char *states[] = {"California", "Whashington", "Pensilvania", "Oregon"};
    int i = 0;
    for (i = 0; i < argc; i++){
        printf("arg %d: %s\n", i, argv[i]);
    }
    i = 0;
    while (i <  4) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}
