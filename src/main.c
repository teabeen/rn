#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <old_filename> <new_filename>\n", argv[0]);
        return 1;
    }

    if (rename(argv[1], argv[2]) == 0) {
        printf("Renamed %s to %s successfully.\n", argv[1], argv[2]);
        return 0;
    } else {
        perror("rename failed");
        return 1;
    }
}

