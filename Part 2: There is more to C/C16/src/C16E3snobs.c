//C16E3snobs.c      Program combines several relation tests together
#include <stdio.h>

int main()
{
    char gender = 'm';
    char upper = 'n';
    char recom = 'y';
    int age = 29;
    int score = 88;
    int eligible = 0;

    //---------------------1---------------------
    if (gender == 'm' && age >= 24 && score >= 75 && (upper == 'y' || recom == 'y'))
    {
        eligible = 1;
    }
        
    //---------------------2---------------------
    /* The relational tests can be broken up into separate statements.*/
    if (gender == 'm' && age >= 24 && score >= 75)
    {
        if (upper == 'y' || recom == 'y') // An if statement nested within another
        {                                 // if statement performs an AND operation
            eligible = 1;
        }
    }

    //---------------------3---------------------
    if (gender == 'm')
    {
        if (age >= 24)
        {
            if (score >= 75)
            {
                if (upper == 'y') // "Parallel" if statements that harbor the same block
                {                 // block statement carries out an OR operation
                    eligible = 1;
                }

                if (recom == 'y')
                {
                    eligible = 1;
                }
            }
        }
    }
    if (eligible)
    {
        puts("Yay! You can be a frat boy!\n");
    }

    if (!eligible)
    {
        puts("Well, you ain't a hipster. You're just a hipster wannabe.\n");
    }
    
    return 0;
}
