#include <stdio.h>



int main(int argc, char *argv[]) {


    if (argc < 2) {
        printf("Usage: %s <filename> <new filename>", argv[1]);
        return 1;

    } else {
        if (rename(argv[1], argv[2])) {
            return 0;
        } else {
            return 1;
        }
    }


    return 0;



}