#include <stdio.h>

int main() {
int H;

    do {
        scanf("height: %i\n", &H); // get the height from the user
    }
    while (H < 1 || H > 8 ); // height between 1 and 8

    for (int i = 0; i < H; i++) { // loop for each row
        for (int z = 0;  z < H - i - 1; z++) { // loop for left tower spaces
            printf(" ");
        }

        for(int e = 0; e < i + 1; e++) { // loop for left side hashes
            printf("#");
        }

        printf("  "); // space in between towers

        for(int e = 0; e < i + 1; e++) { // loop for right side hashes
            printf("#");
        }

        printf("\n");
    }


}