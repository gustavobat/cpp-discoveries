//
// Created by Gustavo Batistela on 3/1/21.
//

#include <iostream>
#include <thread>

void foo() {
    std::cout << "Hello from foo!\n";
}

void bar(int x) {
    std::cout << "Hello from bar!\n";
}

int main() {
    std::thread first(foo);     // spawn new thread that calls foo()
    std::thread second(bar, 0);  // spawn new thread that calls bar(0)
    // synchronize threads:
    first.join();                // pauses until first finishes
    second.join();               // pauses until second finishes

    std::cout << "foo and bar completed.\n";

    return 0;
}
