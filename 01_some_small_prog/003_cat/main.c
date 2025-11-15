#include <stdio.h>

FILE *openFile(const char *filename);
void catFile(FILE *file);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("error: missing file\nusage: cat <filename>\n");
        return -1;
    }

    FILE *file = openFile(argv[1]);
    if (!file) {
        printf("error: file (%s) not found\n", argv[1]);
        return -2;
    }

    catFile(file);

    fclose(file);

    return 0;
}

FILE *openFile(const char *filename) {
    FILE *file;

    file = fopen(filename, "r");
}

void catFile(FILE *file) {
    char buf[512];
    while (fgets(buf, 512, file)) {
        printf("%s", buf);
    }
}
