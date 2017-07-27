#include<stdio.h>
#include<stdlib.h>

//FUNCTION DECLARATIONS

int getInput();
void triangle(int width);

int main()
{
	int width = getInput();
	//Create triangle
	return EXIT_SUCCESS;

}

int getInput()
{
    int width;
    printf("How wide is the triangle? ");
    scanf("%d", &width);
    return width;
}
