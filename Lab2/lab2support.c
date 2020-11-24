// Include Files
#include <stdio.h>
// Project Includes
#include "lab2header.h"
// Function Implementations

  int reverse_number(int num)
  {
  int reversed = 0;
  while(num > 0)
    {
         reversed = reversed * 10 + num % 10;
	 num = num / 10;
    }
  return reversed;
  }


  int even_odd(int num)
  {
    int even = 1;
    if (num % 2 == 0){
      even = 0;
    }	  
    else{
      even = 1;

    }

    return even;
  }


  int is_prime(int num)
  {
    int flag = 0;
    int i;
    for(i = 2; i < num; i++){
    	if (num % i ==0){
	   flag = 1;
	}
    }
    return flag;
  }

