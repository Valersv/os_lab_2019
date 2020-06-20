#include "revert_string.h"
#include <string.h>
void RevertString(char *str)
{
        size_t ifirst = 0, isecond = strlen(str) - 1;
        char tmp;
        while (ifirst < isecond)
        {
                tmp = str[ifirst];
                str[ifirst] = str[isecond];
                str[isecond] = tmp;
                ++ifirst, --isecond;
        }
        // your code here
}
