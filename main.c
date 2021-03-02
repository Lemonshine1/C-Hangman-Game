#include <stdio.h>
void asciiArt(char[]);
int main(void)
{
    asciiArt("titleArt");
    printf("Welcome to the hangman game!\n");
    printf("Please press any key to continue...\n");
    getchar();
    asciiArt("baseArt");
}

void asciiArt(char artNumber[]){
    if (artNumber == "titleArt")
    {
        printf("\n");
        printf("H  H\n"                            );
        printf("H  H\n"                            );
        printf("HHHH  aa nnn  ggg mmmm   aa nnn \n");
        printf("H  H a a n  n g g m m m a a n  n\n");
        printf("H  H aaa n  n ggg m m m aaa n  n\n");
        printf("                g\n"               );
        printf("              ggg\n\n"             );
    }
    else if (artNumber == "baseArt")
    {
        printf("\n");
        printf("    0000000000000       \n");
        printf("    0           0       \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("0000000000              \n\n");
    }
    else if (artNumber == "oneArt")
    {
        printf("\n");
        printf("    0000000000000       \n");
        printf("    0           0       \n");
        printf("    0           1       \n");
        printf("    0          1 1      \n");
        printf("    0           1       \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("0000000000              \n\n");
    }
    else if (artNumber == "twoArt")
    {
        printf("\n");
        printf("    0000000000000       \n");
        printf("    0           0       \n");
        printf("    0           1       \n");
        printf("    0          1 1      \n");
        printf("    0           1       \n");
        printf("    0           2       \n");
        printf("    0           2       \n");
        printf("    0           2       \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("0000000000              \n\n");
    }
    else if (artNumber == "threeArt")
    {
        printf("\n");
        printf("    0000000000000       \n");
        printf("    0           0       \n");
        printf("    0           1       \n");
        printf("    0          1 1      \n");
        printf("    0           1       \n");
        printf("    0          32       \n");
        printf("    0         3 2       \n");
        printf("    0        3  2       \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("0000000000              \n\n");
    }
    else if (artNumber == "fourArt")
    {
        printf("\n");
        printf("    0000000000000       \n");
        printf("    0           0       \n");
        printf("    0           1       \n");
        printf("    0          1 1      \n");
        printf("    0           1       \n");
        printf("    0          324      \n");
        printf("    0         3 2 4     \n");
        printf("    0        3  2  4    \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("0000000000              \n\n");
    }
    else if (artNumber == "fiveArt")
    {
        printf("\n");
        printf("    0000000000000       \n");
        printf("    0           0       \n");
        printf("    0           1       \n");
        printf("    0          1 1      \n");
        printf("    0           1       \n");
        printf("    0          324      \n");
        printf("    0         3 2 4     \n");
        printf("    0        3  2  4    \n");
        printf("    0          5        \n");
        printf("    0         5         \n");
        printf("    0        5          \n");
        printf("    0       5           \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("0000000000              \n\n");
    }
    else if (artNumber == "sixArt")
    {
        printf("\n");
        printf("    0000000000000       \n");
        printf("    0           0       \n");
        printf("    0           1       \n");
        printf("    0          1 1      \n");
        printf("    0           1       \n");
        printf("    0          324      \n");
        printf("    0         3 2 4     \n");
        printf("    0        3  2  4    \n");
        printf("    0          5 6      \n");
        printf("    0         5   6     \n");
        printf("    0        5     6    \n");
        printf("    0       5       6   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("    0                   \n");
        printf("0000000000              \n\n");
    }
    else{
        printf("\nASCII ART NOT IDENTIFIED\n\n");
    }

}