#include <stdio.h>

int main()
{
    float radius, height;
    float volume, surfaceArea;
    float pi = 3.142;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Enter the height: ");
    scanf("%f", &height);

    volume = pi * radius * radius * height;

    surfaceArea = 2 * pi * radius * radius
                  + 2 * pi * radius * height;
                   
    printf("\n results \n");
    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surfaceArea);

    return 0;
}