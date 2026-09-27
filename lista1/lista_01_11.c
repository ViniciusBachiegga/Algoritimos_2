#include <stdio.h>
void calcular(int a , int b , int c){
    
    if((((a > (b - c)) && (a < b + c)) || ((b > (a - c)) && (b < a + c))) || (((c > (a - b)) && (c < a + b))))
    {
    printf("\nEste triangulo e");
    
    if((a == b) && (a == c))
      {
      printf(" equilatero\n");
      }
      
    if(((a != b) && (a != c))  && ((b != c)))
      {
      printf(" escaleno\n");
      }
    if ((((a == b) && (a != c)) || ((a == c) && (a != b))) || (((b == c) && (b != a))))
      {
      printf(" isoceles\n");
      }
    } 
  else
    {
    printf("\nNao e um triangulo\n");
    }                  
}
int main(){
    int a , b , c;

    printf("Digite o valor do lado A:");
    scanf("%d", &a);
    printf("\n");
    
    printf("Digite o valor do lado B:");
    scanf("%d", &b);
    printf("\n");

    printf("Digite o valor do lado C:");
    scanf("%d", &c);

    calcular(a , b , c);

    return 0;
    
}