
// MT, 2016mar30

#include "ProgressBar.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const min = 38573,
        max = 183274,
        step = 200,
        width = 47;
    bool const showAbs = true;

    for(int i = min;i<=max;i += step)
    {
        ProgressBar_print(min, i, max, width, showAbs);
        usleep(500);
    }

    return EXIT_SUCCESS;
}
