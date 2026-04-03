#include <csignal>
#include <iostream>
using namespace std;

void signalHandler(int sig) {
    printf("Caught signal %d\n", sig);
    printf("Exiting...\n");
    exit(0);
}

int main() {
    signal(SIGINT, signalHandler);

    while (true) {
        printf("Running...\n");
        for (volatile int i = 0; i < 50000000; i++);
    }

    return 0;
}
