
#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

extern int __stdcall asmfunc(int* array, int size);

#ifdef __cplusplus
}
#endif


int main() {
   // system("cls");
    int numbers[] = {12,-7,5,-3,8,-2};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = asmfunc(numbers, size) ;
    printf("Sum of all positive numbers: %d\n",sum);
getch();

    
    //asmfunc(3,5); //assembly proc calling
   
  //getch();
    
    
   // printf("back to  C! \n"); // printing in c
    
  
    
    return 0;
}
// sum_positive_numbers.c
//#include <stdio.h>

// Declaration of the assembly function
//extern int sum_positive_asm(int* array, int size);

//int main() {
    // Declare and initialize the array
   // int numbers[] = {12, -7, 5, -3, 8, -2};
   // int size = sizeof(numbers) / sizeof(numbers[0]);

    // Call the assembly function to compute the sum of positive numbers
   // int sum = sum_positive_asm(numbers, size);

    // Display the result
  //  printf("Sum of positive numbers: %d\n", sum);

   // return 0;
//}
