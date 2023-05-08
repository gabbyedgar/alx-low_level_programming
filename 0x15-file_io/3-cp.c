#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s file_from file_to\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE* file_from = fopen(argv[1], "rb");
    if (file_from == NULL) {
        perror("Error: Can't read from file");
        exit(EXIT_FAILURE);
    }

    FILE* file_to = fopen(argv[2], "wb");
    if (file_to == NULL) {
        perror("Error: Can't write to file");
        exit(EXIT_FAILURE);
    }

    char buffer[BUFFER_SIZE];
    size_t bytes_read, bytes_written;
    while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, file_from)) > 0) {
        bytes_written = fwrite(buffer, 1, bytes_read, file_to);
        if (bytes_written != bytes_read) {
            perror("Error: Can't write to file");
            exit(EXIT_FAILURE);
        }
    }

    if (ferror(file_from)) {
        perror("Error: Can't read from file");
        exit(EXIT_FAILURE);
    }

    fclose(file_from);
    fclose(file_to);
    return 0;
}
