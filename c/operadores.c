#include <stdio.h>

int main()
{
    /*
    int a, b;
    printf("Digite um numero inteiro: ");
    scanf("%i", &a);
    printf("Digite outro numero inteiro: ");
    scanf("%i", &b);
    
    // Soma
    printf("%i + %i = %i\n", a, b, a + b);

    //divisão
    float c = (float)a/b;
    printf("%i / %i = %f\n", a, b, c);
    */

    //contador
    int counter = 0;
    counter++;
    printf("%i\n",counter);
    counter+=10;
    printf("%i\n",counter);

    //sinais de comparação/ condição
    int x = 5;
    int y = 10;
    if(x<y){
        printf("X eh menor do que Y\n");
    }
    else{
        printf("Y eh menor do que X\n");
    }

    //estruturas de repetição
    int i = 0;
    while(i<5){
        printf("hello world!\n");
        i++;
    }

    for(int c=0;c<3;c++){
        printf("%i\n",c);
    }

}