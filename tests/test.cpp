#include <iostream>
#include "../include/resource.h"
using namespace std;

int main() {
    Resource r1(101, "Projector", "Equipment","Room A", 50, true);

    r1.display();
    return 0;
}