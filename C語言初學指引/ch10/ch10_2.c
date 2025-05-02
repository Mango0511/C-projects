#include <stdio.h>
#include <stdlib.h>

enum manufacture {IBM, MAXTOR, WD, SEAGATE};

void main(void){
    enum manufacture HardDisk;

    HardDisk = SEAGATE;
    switch(HardDisk){
        case 0:
            printf("Disk is generate by IBM .\n");
            break;
        case 1:
            printf("Disk is generate by MAXTOR .\n");
            break;
        case 2:
            printf("Disk is generate by WD .\n");
            break;
        case 3:
            printf("Disk is generate by SEAGATE .\n");
            break;
        default:
            break;
    }
}