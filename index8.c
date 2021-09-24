#include <stdio.h>
#include <time.h>

int main(void)
{
    int msec = 0;
    const int trigger = 500; // ms
    const int printWidth = 4;
    int counter = 0;
    clock_t before = clock();

    while (1)
    {
        fputs("Loading", stdout);
        clock_t difference = clock() - before;
        msec = difference * 1000 / CLOCKS_PER_SEC;
        if (msec >= trigger)
        {
            counter++;
            msec = 0;
            before = clock();
        }
        for (int i = 0; i < counter; ++i)
        {            
            fputc('.', stdout);
        }
        for (int i = 0; i < printWidth - counter; ++i)
        {
            fputc(' ', stdout);
        }
        fputc('\r', stdout);
        fflush(stdout);

        if (counter == printWidth)
        {
            counter = 0;
        }
    }
}