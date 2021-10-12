#include <stdio.h>



//Verificar se eh perfeito
// numero natural eh perfeito se eh igual à soma de todos os seus fatores (divisores), excluindo ele próprio
int ehPerfeito(int n)
{
    int i, soma = 0, resto = 0;
    for (i = 1; i <= (n-1); i++)
    {
      resto = n%i;
        if (resto == 0)
            soma += i;
    }

    if (soma == n)
    {
        return 1; //eh perfeito
    }
    else
    {
        return 0; // nao eh perfeito
    }
}
//Verificar se abundante
//Abundante eh quando um número eh menor do que a soma de seus divisores próprios 
int abundante(int n){
  int soma = 0, i;
  for(i = 1; i <n; i++){
    if(n%i==0){
      soma+=i;
    }
  }
  int verifica = n^2;

  if(soma>verifica){
    return 1;
  }else{
    return 0;
  }
}
//verifica deficiente
//São aquelas que cuja a soma dos seus divisores eh menor que esse numero
int deficiente(int n){
  int i, a = 0;
  for(i = 1;i<n;i++){
    if(n%i==0){
      a+=1;
    }
  }
  if(a<n){
    return 1;
  }else{
    return 0;
  }
   
}

int main()
{

    int n;
    int qtd = 0;
    int perfeito;
    int abd;
    

    printf("Quantos numeros deseja cadastrar?");
    scanf("%d", &n);
    perfeito = ehPerfeito(n);
    
      if(perfeito==1){
        printf("Perfeito\n");
      }else{
        printf("Nao eh perfeito\n");
      }
      abd = abundante(n);
       if(abd==1){
        printf("Abundante\n");
      }else{
        printf("Nao eh Abundante\n");
      }
      int dfc = deficiente(n);
       if(dfc==1){
        printf("Deficiente\n");
      }else{
        printf("Nao eh Deficiente\n");
      }
        
        
      
    return 0;
}