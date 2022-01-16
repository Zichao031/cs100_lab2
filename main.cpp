#include "c-echo.h"
#include "c-count.h"

int main(int argv, char** argc) {
    std::cout << "Count of output: " << count(echo(argv,argc)) << std::endl;
>>>>>>> b7c2bc65394d814f1fc81714b42413b78004b367
}
