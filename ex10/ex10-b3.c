#include <stdio.h>
// aceita mais de um argumento

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("ERROR: You need one or more arguments.\n");
        // this is how you abort a program
        return 1;
    }

    int i = 0;
    int j = 1;
    
    for (j = 1; j < argc; j++) {
        for (i = 0; argv[j][i] != '\0'; i++) {
            char letter = argv[j][i];
            // Minimiza as letras
            if (letter > 64 && letter < 91)
            {
                letter += 32;
            }
            
            if (letter ==  'a') {
                printf("%d: 'A'\n", i);
            } else if (letter == 'e') {
                printf("%d: 'E'\n", i);
            } else if (letter == 'i') {
                printf("%d: 'I'\n", i);
            } else if (letter == 'o') {
                printf("%d: 'O'\n", i);
            } else if (letter == 'u'){
                printf("%d: 'U'\n", i);
            } else if (letter == 'y') {
                if (i > 2) {
                        // it's only sometimes Y
                        printf("%d: 'Y'\n", i);
                }
            } else {
                printf("%d: %c is not a vowel\n", i, letter);
            }
        } // fim do segundo for
    } // fim do primeiro for
    return 0;
}
