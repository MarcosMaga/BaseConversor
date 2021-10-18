#include <stdio.h>

int main()
{
    int dc;
    int save=0;
    int length=0;
    int i=0;
    
    printf("Conversor decimal para binario");
    printf("\nInforme o numero decimal: ");
    scanf("%d%*c", &dc);
    printf("\n");
    
    save=dc;
    
    while(dc > 0)
    {
        length++;
        dc /= 2;
    }
    
    int num[length];
    
    while(save > 0)
    {
        num[i] = save%2;
        save /= 2;
        i++;
    }
    
    printf("Valor binario: ");
    
    for(int x=length-1; x >= 0; x--)
    {
        printf("%d", num[x]);
    }
    

    return 0;
}
