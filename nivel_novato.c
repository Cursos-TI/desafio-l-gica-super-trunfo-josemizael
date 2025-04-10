#include <stdio.h>

int main(){
    char nome_da_cidade1[100];
    char estado1[100];
     double pib1;
    float area1;
   long long int populacao1;
    int pontos_turisticos1;
   float pib_per_capita1 , densidade_populacional;
   float super_poder1;
  
   printf("pais: Brasil!\n");
   printf("cadastro das cartas:\n");
   printf("escreva o nome da carta\n");
   scanf("%[^\n]", nome_da_cidade1);
   printf("escreva o codigo o estado:\n");
   scanf("%s", estado1);
   printf("escreva o Pib:\n");
   scanf(" %lf", &pib1);
   printf("area da carta:\n");
   scanf("%f", &area1);
   printf("população:\n");
   scanf("%lld", &populacao1);
   printf(" pontos turisticos:\n");
   scanf("%d", &pontos_turisticos1);
  
   // calculo 
   pib_per_capita1 = pib1 / populacao1;
   densidade_populacional = populacao1 / area1;
   //super poder
   super_poder1 =(float) area1 + pib1 + populacao1 + pontos_turisticos1 + pib_per_capita1 + densidade_populacional;
  
   
  
   
  
   // resultado
   printf("nome: %s\n",nome_da_cidade1);
   printf("estado: %s\n", estado1);
   printf("Pib: R$ %.2lf milhões\n", pib1);
   printf("area: %.3f Km²\n", area1);
   printf("populção: %lld\n", populacao1);
   printf("pontos turisticos: %d\n", pontos_turisticos1);
   printf("pib per capita: R$ %.2f\n", pib_per_capita1);
   printf("densidade populacional: %.3f habitante por km²\n", densidade_populacional);
   printf("super poder: %f\n", super_poder1);
  
        //carta 2
       char nome_da_cidade2[100];
       char estado2[100];
        double pib2;
       float area2;
       long int populacao2;
       int pontos_turisticos2;
       long double pib_per_capita2 , densidade_populaciona2;
       long double super_poder2;
  
       printf("pais: Brasil!\n");
       printf("cadastro das cartas:\n");
       printf("escreva o nome da carta:\n");
       scanf(" %[^\n]", &nome_da_cidade2);  
       printf("escreva o codigo o estado:\n");
       scanf("%s", estado2);
       printf("escreva o Pib:\n");
       scanf("%f", pib2);
       printf("area da carta:\n");
       scanf("%f", &area2);
       printf("população:\n");
       scanf("%lld", &populacao2);
       printf(" pontos turisticos:\n");
       scanf("%d", &pontos_turisticos2);
  
       // calculo 
        pib_per_capita2 = pib2 / populacao2;
        densidade_populaciona2 = populacao2 / area2;
       //super poder
        super_poder2 =(float) area2 + pib2 + populacao2 + pontos_turisticos2 + pib_per_capita2 + densidade_populaciona2;
  
        // resultado
        printf("nome: %s\n",nome_da_cidade2);
        printf("estado: %s\n", estado2);
        printf("pib: R$: %.3f milhões",pib2);
        printf("area: %f Km²\n", area2);
        printf("populção: %lld\n", populacao2);
        printf("pontos turisticos: %d\n", pontos_turisticos2);
        printf("pib per capita: R$ %ld\n", pib_per_capita2);
        printf("densidade populacional: %.3f habitante por km²\n", densidade_populaciona2);
        printf("super poder: %lf\n", super_poder2);
  
         
         
   
         
         //comparação
         printf("comparaçao das cartas %s e %s, logo aqui em baixo\n",nome_da_cidade1,nome_da_cidade2);
         
          
         if(pib1 > pib2)
         {
         printf("carta1 - %s valor:%f:venceu\n carta2: %s valor %f:perdeu\n",nome_da_cidade1,pib1,nome_da_cidade2,pib2);
        
         }
         else
         {
         printf("carta1 - %s valor:%f:perdeu\n carta2: %s valor %f:venceu\n",nome_da_cidade1,pib1,nome_da_cidade2,pib2);
         }
             
         
         
         if ( area1>area2)
         {
          printf("carta1 - %s valor:%f:venceu\n carta2: %s valor %f:perdeu\n",nome_da_cidade1,area1,nome_da_cidade2,area2);
         }
         else
         {
          printf("carta1 - %s valor:%f:perdeu\n carta2: %s valor %f:ganhou\n",nome_da_cidade1,area1,nome_da_cidade2,area2);
         }
        
        
         if (populacao1>populacao2)
         {
          printf("carta1 - %s valor:%lld:venceu\n carta2: %s valor %lld:perdeu\n",nome_da_cidade1,populacao1,nome_da_cidade2,populacao2);
         }
         else
         {
           printf("carta1 - %s valor:%lld:perdeu\n carta2: %s valor %lld:venceu\n",nome_da_cidade1,populacao1,nome_da_cidade2,populacao2);
          }
         
         
         
         if (pontos_turisticos1 > pontos_turisticos2)
          {
            printf("carta1 - %s valor:%d:venceu\n carta2: %s valor %d:perdeu\n",nome_da_cidade1,pontos_turisticos1,nome_da_cidade2,pontos_turisticos2);
          }
          else
          {
            printf("carta1 - %s valor:%d:perdeu\n carta2: %s valor %d:venceu\n",nome_da_cidade1,pontos_turisticos1,nome_da_cidade2,pontos_turisticos2);
          }
          
          
          
          if (pib_per_capita1 > pib_per_capita2)
          {
            printf("carta1 - %s valor:%ld:venceu\n carta2: %s valor %ld:perdeu\n",nome_da_cidade1,pib_per_capita1,nome_da_cidade2,pib_per_capita2);
          }
          else
          {
            printf("carta1 - %s valor:%ld:venceu\n carta2: %s valor %ld:perdeu\n",nome_da_cidade1,pib_per_capita1,nome_da_cidade2,pib_per_capita2);
          }
          
         
         
          if (densidade_populacional < densidade_populaciona2)
          {
            printf("carta1 - %s valor:%f:venceu\n carta2: %s valor %f:perdeu\n",nome_da_cidade1,densidade_populacional,nome_da_cidade2,densidade_populaciona2);
          }
          else
          {
            printf("carta1 - %s valor:%f:perdeu\n carta2: %s valor %f:venceu\n",nome_da_cidade1,densidade_populacional,nome_da_cidade2,densidade_populaciona2);
          }
         
         
          if (super_poder1 > super_poder2)
          {
            printf("carta1 - %s valor:%lf:venceu\n carta2: %s valor %lf:perdeu\n",nome_da_cidade1,super_poder1,nome_da_cidade2,super_poder2);
          }
          else
          {
            printf("carta1 - %s valor:%lf:venceu\n carta2: %s valor %lf:perdeu\n",nome_da_cidade1,super_poder1,nome_da_cidade2,super_poder2);
          }
          
          

   return 0;
    }