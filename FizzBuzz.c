#include <stdio.h>
int main(){
  // FizzBuzz is a simple algorithm in which a given integer N is checked for the following properties: 
  // if N is divisible by 3, the program must print out "Fizz"
  // if N is divisible by 5, the program must print out "Buzz"
  // if N is divisible by both 3 and 5, the program must print out "FizzBuzz"
  int n;
  printf("Type an integer: ");
  scanf("%d", n);
  if((n % 3 == 0) && (n % 5 == 0)){
    printf("FizzBuzz");
  }
  else if(n % 3 == 0){
    printf("Fizz");
  }
  else if(n % 5 == 0){
    printf("Buzz");
  }
  else{
    printf("X");
  }
  printf("\n")
  FizzBuzzLoop(n);
  return 0;
}

void FizzBuzzLoop(int n){
  int i;
  printf("FizzBuzz up until %d");
  for(i=0;i<=n;i++){
      if((n % 3 == 0) && (n % 5 == 0)){
          printf("FizzBuzz");
        }
        else if(n % 3 == 0){
          printf("Fizz ");
        }
        else if(n % 5 == 0){
          printf("Buzz ");
        }
        else{
          printf("%d ", n);
        }
  }
}
