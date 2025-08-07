//C10E1switch.c     Introduces teh switch. This program needs fixing.
#include <stdio.h>

int main()
{
    switch (2)
    {
    case 1: puts("Light bulb 1 turns on.\n");
    case 2: puts("Light bulb 2 turns on.\n"); // Falls through to case 3.
    case 3: puts("Light bulb 3 turns on.\n\n\n");
    }

    return 0;
}
