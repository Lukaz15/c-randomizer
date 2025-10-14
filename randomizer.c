#include <stdio.h>
#include <sys/time.h>

int main() {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    long seed = tp.tv_usec;
    const long long M = 1LL << 32;
    const long long A = 1664525;
    const long long C = 10001;
    long random = (A * seed + C) % M;
    printf("result %ld\n", (random % 300) + 1);
    return 0;
}
