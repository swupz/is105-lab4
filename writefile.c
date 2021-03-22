#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    int fd, sz, sx;

    fd = open("bar.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd < 0) {
        perror("feil ved skriving av filen"); exit(1);
    }
    sz = write(fd, "Hello you\0", 10);
  //  sx = write(fd, "Alphabet\0", 8);

    close(fd);
}
