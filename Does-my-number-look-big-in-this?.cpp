#include <cmath>

bool narcissistic( int value ){

    double numberL = 0;
    int c=0;

    int valueC = value;
    while (valueC>0) {
        ++c;
        valueC/=10;
    }

    valueC = value;

    while (value>0) {
        int numberR = value % 10;
        numberL += pow(numberR, c);
        value=value/10;
    }

    if (valueC == numberL) {
        return true;
    }
    return false;

}
