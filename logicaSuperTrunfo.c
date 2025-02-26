#include <stdio.h>
//Variavel global 01
    
    char estado[50],cidade[50],codigoCart[50];
    int populacao,pontosTuristico;
    float area,densidade,pib,capita;
    int numero,resultado;

//Variavel global 02
    char estado02[50],cidade02[50],codigoCart02[50];
    int populacao02,pontosTuristico02;
    float area02,densidade02,pib02,capita02;   

int main() {


//Saída de Dados:
    printf("***Cadastro das cartas***\n");
    printf("01 carta\n");
    cadastro01();
    printf("02 carta\n");
    cadastro02();
    menu();
 

   

   return 0;
  
}
   
//Funcao Criando  cartas 01
cadastro01(){
    
//Entrada de Dados   
    printf("Estado: ");
    scanf("%s",&estado);
    printf("Codigo da Carta: ");
    scanf("%s",&codigoCart);
    printf("Nome da Cidade: ");
    scanf("%s",&cidade);
    printf("Populacao: ");
    scanf("%d",&populacao);
    printf("Pontos Turisticos ");
    scanf("%d",&pontosTuristico);
    printf("Area: ");
    scanf("%f",&area);
    printf("PIB: ");
    scanf("%f",&pib);
//Densidade Populacional: População dividida pela área da cidade.
    densidade = populacao / area;
//PIB per Capita: PIB total dividido pela população.    
    capita = populacao / pib;
    printf("Densidade populacional %.1f\n",densidade);
    printf("PIB per Capita %.1f\n",capita);
} 

//Funcao Criando  cartas 02 
cadastro02(){
//Entrada de Dados   
    printf("Estado: ");
    scanf("%s",&estado02);
    printf("Codigo da Carta: ");
    scanf("%s",&codigoCart02);
    printf("Nome da Cidade: ");
    scanf("%s",&cidade02);
    printf("Populacao: ");
    scanf("%d",&populacao02);
    printf("Pontos Turisticos ");
    scanf("%d",&pontosTuristico02);
    printf("Area: ");
    scanf("%f",&area02);
    printf("PIB: ");
    scanf("%f",&pib02);
//Densidade Populacional: População dividida pela área da cidade.
    densidade02 = populacao02 / area02;
//PIB per Capita: PIB total dividido pela população.    
    capita02 = populacao02 / pib02;
    printf("Densidade populacional %.1f\n",densidade02);
    printf("PIB per Capita %.1f\n",capita02); 
}
// Funcao Menu

   //menu
menu(){ 
   printf("Escolha uma Atributo para compara as cartas\n");
   printf(" 1 Codido da Carta\n");
   printf(" 2 Populacao\n");
   printf(" 3 Pontos Turisticos\n");
   printf(" 4 Area\n");
   printf(" 5 PIB\n");  
   
   scanf("%d",&numero);

   switch (numero)
   {
   case 1:
    resultado = codigoCart > codigoCart02 ? 1 : 0;
    resultado = codigoCart == codigoCart02 ? 2 : 2;
    printf("O nome dos dois estado %s, %s\n",estado,estado02);
    printf("O atributo usado na comparacao: Codigo da Carta\n");
    printf("Os valores do atributo para cada carta. carta 01: %d carta 02:  %d \n",codigoCart,codigoCart02);
    /* code */
    break;
   case 2:
    resultado = populacao > pontosTuristico02 ? 1 : 0;
    resultado = populacao == populacao02 ? 2 : 2;
    printf("O nome dos dois estado %s, %s\n",estado,estado02);
    printf("O atributo usado na comparacao: Pontosturistico\n");
    printf("Os valores do atributo para cada carta. carta 01: %d carta 02: %d\n",populacao,populacao02);
    /* code */
    break;
   case 3:
    resultado = pontosTuristico >= pontosTuristico02 ? 1 : 0;
    resultado = pontosTuristico == pontosTuristico02 ? 2 : 2;
    printf("O nome dos dois estado %s, %s\n",estado,estado02);
    printf("O atributo usado na comparacao: Pontosturistico\n");
    printf("Os valores do atributo para cada carta. carta 01: %d carta 02: %d\n",pontosTuristico,pontosTuristico02);
    /* code */
    break;
   case 4:
    resultado = area > area02 ? 1 : 0;
    resultado = area == area02 ? 2 : 2;
    printf("O nome dos dois estado %s, %s\n",estado,estado02);
    printf("O atributo usado na comparacao: Pontosturistico\n");
    printf("Os valores do atributo para cada carta. carta 01: %d carta 02: %d\n",area,area02);
    /* code */
    break;
   case 5:
    resultado = pib > pib02 ? 1 : 0;
    resultado = pib == pib02 ? 2 : 2;
    printf("O nome dos dois estado %s, %s\n",estado,estado02);
    printf("O atributo usado na comparacao: Pontosturistico\n");
    printf("Os valores do atributo para cada carta. carta 01: %d carta 02: %d\n",pib,pib02);
    /* code */
    break;  
   
   default:
   printf("opcao ivalida");
    break;
   }
   if(resultado==1){
    printf("Qual carta venceu. %s\n",estado);

    
   }else if (resultado == 2)
   {
    printf("Enpate");
   }else{
   
    printf("Qual carta venceu. %s\n",estado02);
   }
}
