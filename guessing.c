GUESSING-THE-NUMBER
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int number, guess,nguesses,n=1000;
srand(time(0));
number=rand()%1000+1; //Generates random number between 1 to 1000
//printf("The number is %d\n",number);
do{
    printf("Guess the number between 1 to 1000 \n");
    scanf("%d",&guess);
    if (guess>n){
        printf("Invalid number \n");
    }
    else if(guess>number){
        printf("Lower number please\n");
    }
    else if(guess<number){
        printf("Higher number please !\n");
    }
    else{
        printf("CONGRATULATIONS!! YOU GUESSED THE NUMBER \n");
        printf("You guessed the number in %d attempts \n",nguesses);
    }
    nguesses++;
} while(guess!=number);
printf("The End...");
return 0;
}
