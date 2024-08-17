#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main()
{
    int quant = 23; // 11 vetores acima, e 11 vetores abaixo da frequencia de ressonancia
    // alterar o valor de quant para o quanto vcs quiserem

    float xc[quant];
    float cap = 10.155; // capacitancia de vcs
    float res = 1000; // resistencia de vcs

    for (int i = 1; i <= quant; i++)
    {
        xc[i - 1] = (1/(2 * M_PI * (cap * pow(10, -9)) * i * 1000)); // calcula o Xc e joga no vetor
        printf("%.4f\n", ((sqrt(pow(xc[i - 1], 2))) / (sqrt((pow(res, 2)) + (pow(xc[i - 1], 2))))) * 5); // printa direto o Vo de cada capacitacia
    }
    
    /* tirar para ter os valores de Xc
    for (int i = 1; i <= 23; i++)
    {
        printf("%.4f\n", xc[i - 1]);
    }
    */
}