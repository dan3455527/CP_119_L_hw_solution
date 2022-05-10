#include <stdio.h>
int main(void)
{
    FILE *outPtr;

    outPtr = fopen("datasize.dat", "w");

    fprintf(outPtr, "%s%16s\n", "Data type", "Size");
    fprintf(outPtr, "%s%21lu\n", "char", sizeof(char));
    fprintf(outPtr, "%s%12lu\n", "unsigned char", sizeof(unsigned char));
    fprintf(outPtr, "%s%16lu\n", "short int", sizeof(short int));
    fprintf(outPtr, "%s%7lu\n", "unsigned short int", sizeof(unsigned short int));
    fprintf(outPtr, "%s%22lu\n", "int", sizeof(int));
    fprintf(outPtr, "%s%13lu\n", "unsigned int", sizeof(unsigned int));
    fprintf(outPtr, "%s%17lu\n", "long int", sizeof(long int));
    fprintf(outPtr, "%s%8lu\n", "unsigned long int", sizeof(unsigned long int));
    fprintf(outPtr, "%s%20lu\n", "float", sizeof(float));
    fprintf(outPtr, "%s%19lu\n", "double", sizeof(double));
    fprintf(outPtr, "%s%14lu\n", "long double", sizeof(long double));
    fclose(outPtr);
}