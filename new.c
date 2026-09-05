#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main() {
    int x = 10, y = 10;
    char ch;

    while (1) {
        system("cls");

        // Game Area
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 40; j++) {

                if (i == y && j == x)
                    printf("P");   // Player

                else
                    printf(".");
            }
            printf("\n");
        }

        printf("\nUse W A S D keys to move\n");
        printf("Press Q to quit\n");

        ch = getch();

        if (ch == 'w' || ch == 'W')
            y--;

        else if (ch == 's' || ch == 'S')
            y++;

        else if (ch == 'a' || ch == 'A')
            x--;

        else if (ch == 'd' || ch == 'D')
            x++;

        else if (ch == 'q' || ch == 'Q')
            break;

        // Boundary
        if (x < 0) x = 0;
        if (x > 39) x = 39;
        if (y < 0) y = 0;
        if (y > 19) y = 19;

        Sleep(50);
    }

    printf("Game Over!\n");

    return 0;
}
