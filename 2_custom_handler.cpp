#include <csignal>
#include <iostream>
#include <unistd.h>
using namespace std;

void signalHandler(int sig) {
    printf("Caught signal %d\n", sig);
    printf("Exiting...\n");
    fflush(stdout);
    exit(0);
}

int main() {
    signal(SIGINT, signalHandler);

    for (int i = 0; i < 5; i++) {
        printf("Running...\n");
        fflush(stdout);
        sleep(1);
    }

    raise(SIGINT);

    return 0;
}
