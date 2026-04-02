#include <stdio.h>
void find_track(char search_for[])
{
    int i;
    for (i=0; i<5; i++) {

        if(strstr(tracks[i], search_for))
        printf("Песня номер %i: '%s'\n", i, tracks[i]);
    }
}
int main() {
    char search_for[80];
    printf("Искать: ");
    fgets
}