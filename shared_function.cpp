#include "shared_functions.h"

void clear_screen()
{
#ifdef WINDOWS
    system("cls");
#else
    // Assume POSIX
    system("clear");
#endif
}

int get_route(){
    char buffer[101];
    cin.get(buffer, 100, '\n');
    int num;
    itoa(num, buffer, 10);
    return num;
}
