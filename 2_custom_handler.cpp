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
 
    printf("Running...\n");
    raise(SIGINT);
 
    return 0;
}
