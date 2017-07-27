#include<stdio.h>
#include<stdlib.h>

//FUNCTION DECLARATIONS

int getInput();
void triangle(int width);

int main()
{
	int width = getInput();
	triangle(width);
	return EXIT_SUCCESS;

}

int getInput()
{
    int width;
    printf("How wide is the triangle? ");
    scanf("%d", &width);
    return width;
}

void triangle(int width)
{
    int i;
    for(int i=0; i<width; i++)
    {
        for (int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

