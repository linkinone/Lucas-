/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{

  int cont, num, fat;
  printf ("\n Qual fatorial ? ");
  scanf (" %s", &num);
  fat = num;
  cont = 1;

  while (cont <= 4)
    {				//contagem para o fatorial 
      fat = fat * cont;		//calculo do fatorial
      printf ("\n rodada resultado : %d", fat);	//em cada rodada no looping mostra o fat 
      printf ("\n rodada contagem : %d", cont);	//em cada rodada no looping mostra o fat 
      cont++;			//a volta do ciclo e continuo calculo
    }				//while
  /* Depois do looping ele sai a apresenta esses prints */
  printf ("\n\n\n fatorial: %d ", num);
  printf (" Resultado final C)  : %d ", fat);

  return 0;
}
