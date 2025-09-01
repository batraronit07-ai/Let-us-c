#include <stdio.h>

int main()
{

    int nR, nG, nB;
    float white, cyan, magenta, yellow, black, red, blue, green;

    printf("The value of red ccolour is : ");
    scanf("%d", &nR);

    printf("The value of green ccolour is : ");
    scanf("%d", &nG);

    printf("The value of blue ccolour is : ");
    scanf("%d", &nB);

    red = nR/255.0;
    blue = nB/255.0;
    green = nG/255.0;

    if(red > blue && red >green)
		white = red;
	
	else if(green > red && red > blue)
		white = green;
	
	else if(blue > green && blue > red)
		white = blue;


    cyan = ((white - red) / white);
    printf("cyan = %f\n", cyan);

	magenta = ((white - green) / white);
    printf("magenta = %f\n", magenta);

	yellow = ((white - blue) / white);
    printf("yellow = %f\n", yellow);

	black = (1 - white);  
    printf("black = %f\n", black);

    return 0;
}