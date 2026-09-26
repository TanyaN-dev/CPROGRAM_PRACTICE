#include <stdio.h>
int main() {
    int N = 242;
    int notes[] = {100,50,20,10,5,2,1};
    int size = sizeof(notes)/sizeof(int); //for calculating int byte size
    int minNotes = 0;
    for(int i=0;i< size;i++){
        int count = N/notes[i];
        N = N % notes[i];
        minNotes = minNotes+count;
    }
    printf("Minimum number of required notes are: %d",minNotes);
return 0;
}
