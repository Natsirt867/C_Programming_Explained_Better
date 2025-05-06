//C9E4menu.c    Constructs a menu system with nested if statements
#include <stdio.h>

int main() {
    int choice;
    int select;

    do {
        puts("\nWhat would you like to see?\n");
        puts("1. Novels");
        puts("2. Video Games");
        puts("3. Exit");
        printf("\nEnter your choice: ");
        scanf(" %d", &choice);

        if (choice == 1) {
            puts("\nWhich author?");
            puts("1. Terry Brooks");
            puts("2. Margaret Weis and Tracy Hickman");
            printf("\nEnter your choice: ");
            scanf(" %d", &select);
            puts("");
            if (select == 1) {
                puts("Faxanadu, Legacy of The Wizard, and Simon's Quest.\n");
            }
            if (select == 2) {
                puts("Super Metroid, Secret of Mana, and Castlevania IV.\n");
            }
        }

        if (choice == 2) {
            puts("\nWhich game system?\n");
            puts("1. Nintendo");
            puts("2. Super Nintendo");
            printf("\nEnter your choice: ");
            scanf(" %d", &select);
            puts("");
            if (select == 1) {
                puts("Faxanadu, Legacy of The Wizard, and Simon's Quest.\n");
            }
            if (select == 2) {
                puts("Super Metroid, Secret of Mana, and Castlevania IV.\n");
            }
        }
    } while (choice != 3);
}
