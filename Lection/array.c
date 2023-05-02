#include <stdio.h>
#include <stdlib.h>
//#include <conio.h> 
//#define NULL 0

int main(){
    int *array = NULL;
    unsigned length, i;
    

    printf("Enter length of array: ");
    scanf("%d", &length);

    if (length>0)
    {
        if ((array = (int*) malloc(length * sizeof(int)))!= NULL)
        {
            for (i =0; i< length; i++){
                array[i]=i*i;
            }
            printf("Memory allocated\n");
        } else {
            printf("Error: can't allocate memory\n");
        }
    }else{
        printf("ERROR! Length less 0\n");
        exit(-1);
    }

    if (array!=NULL){
        free(array);
        printf("Array free\n");
    }
    //getch();
    
    return 0;

}
