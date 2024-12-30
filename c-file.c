
#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

int __stdcall asmfunc(int* array, int size);

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
       // Declare and initialize the array
    int numbers[] = {12,-7,5,-3,8,-2};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = asmfunc(numbers, size) ;
    //Display the result
    printf("Sum of all positive numbers: %d\n",sum);
getch();

    
    //asmfunc(3,5); //assembly proc calling
   
  //getch();
    
    
   // printf("back to  C! \n"); // printing in c
    
  
    
    return 0;
}
