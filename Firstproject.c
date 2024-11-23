#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
  
  
  int main (){
      srand(time(0));
        
        
        int randomnumber = (rand()%100) + 1 ;
        int no_of_guesses = 0 ;
        int guessed ; 
        
      do{
       printf("guess the number b/t (1 to 100\n");
      scanf("%d",&guessed);
        if(guessed > randomnumber){
            printf("too high\n");}
            
            else {
                printf("too low\n");
            
            }
