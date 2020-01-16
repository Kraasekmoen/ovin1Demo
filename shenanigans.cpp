#include <stdlib.h>
#include <stdio.h>

//Start/end indexes of numbers in string
class numLocation {
public:

    int indStart;
    int indEnd;

    numLocation(int start){
        printf("Parametrized constructor 1 called \n");
        indStart = start;
        indEnd = start + 1;
    }

    numLocation(int start, int end){
        printf("Parametrized constructor 2 called \n");
        indStart = start;
        indEnd = end;
    }

    void printValues(){
        printf("Start index: ", indStart, "End index: ", indEnd);
    }
};

int main() {

    numLocation currNumber(23, 74);
    currNumber.indStart = 54;
    currNumber.indEnd = 59;

    currNumber.printValues();

    return 0;
}