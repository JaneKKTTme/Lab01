#include <stdio.h>

int main()
{
    double temp, kel, cel, farn;
    char scale;

    scanf("%lf", &temp);
    scanf("%c", &scale);

    switch(scale)
    {
        case 'C':
            case 'c':
                if ( temp > -273,15 )
                {
                    farn = temp*9/5+32;
                    kel = temp+273.15;
                    printf("%.2lf F\n%.2lf K\n", farn, kel);
                }
                else
                {
                    printf("Absolute zero");
                }
                break;
        case 'K':
            case 'k':
                if ( temp > 0 )
                {
                    cel = temp-273.15;
                    farn = cel*9/5+32;
                    printf("%.2lf F\n%.2lf C\n", farn, cel);
                }
                else
                {
                    printf("Absolute zero");
                }
                break;
        case 'F':
            case 'f':
                if ( temp > -459,67 )
                {
                    cel = (temp-32)*5/9;
                    kel = cel-273.15;
                    printf("%.2lf C\n%.2lf K\n", cel, kel);
                }
                else
                {
                    printf("Absolute zero");
                }
                break;
        default:
            if ( temp > -273,15 )
                {
                    farn = temp*9/5+32;
                    kel = temp+273.15;
                    printf("%.2lf C:\n%.2lf F\n%.2lf K\n\n", temp, farn, kel);
                }
                else
                {
                    printf("Absolute zero");
                }
            farn=0; kel=0;

            if ( temp > 0 )
                {
                    cel = temp-273.15;
                    farn = cel*9/5+32;
                    printf("%.2lf K:\n%.2lf F\n%.2lf C\n\n", temp, farn, cel);
                }
                else
                {
                    printf("Absolute zero");
                }
            farn=0; cel=0;

            if ( temp > -459,67 )
                {
                    cel = (temp-32)*5/9;
                    kel = cel-273.15;
                    printf("%.2lf F:\n%.2lf C\n%.2lf K\n\n", temp, cel, kel);
                }
                else
                {
                    printf("Absolute zero");
                }
            break;
    }
    return 0;
}
