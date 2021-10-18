#include <stdio.h>
#include <math.h>

int main()
{
    long long int binario;
    long long int value=0;
    int save;
    int lenght=0;
    int i=0;
    
    printf("Conversor binario para decimal");
    printf("\nInforme o numero binario: ");
    scanf("%lld%*c", &binario);
    save=binario;
    
    while(binario>0)
    {
        lenght++;
        binario = binario/10;
    }

    int num[lenght];
    
    while(save > 0)
    {
        num[i] = save%10;
        save = save/10;
        i++;
    }
    
    for(int y=0; y < lenght; y++)
    {
        value += pow(2,y) * num[y];
    }
    printf("\nValor decimal: %lld", value);
    
    return 0;
}