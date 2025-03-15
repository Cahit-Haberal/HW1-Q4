#include <stdio.h>

void computeHomeValue();

int main()
{
    computeHomeValue();

    return 0;
}

void computeHomeValue()
{
    int popularity;
    int size;
    int homeValue;

    printf("\nEnter the popularity: ");
    scanf("%d", &popularity);

    printf("\nEnter the size: ");
    scanf("%d", &size);

    homeValue = (popularity * popularity * popularity + size * size) * 10000;

    printf("\nIf the popularity of the neighborhood is %d and the size of the house is %d, the minimum value for your house should be %d TL.", popularity, size, homeValue);

}