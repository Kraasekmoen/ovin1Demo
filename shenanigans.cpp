#include <stdlib.h>
#include <stdio.h>

//Start/end indexes of numbers in string
class numLocation {
public:

    int indStart;
    int indEnd;

    void printValues(){
        printf("Start index: ", indStart, "\nEnd index: ", indEnd);
    }
};

int main() {

    numLocation currNumber;
    currNumber.indStart = 54;
    currNumber.indEnd = 59;

    currNumber.printValues();

    return 0;
}