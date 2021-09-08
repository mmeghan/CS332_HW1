#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
step 1: get keywords from command line 
step 2: read the .txt scanning for the keywords
step 3: add word counts to 2D array
step 4: print out the search words and the number of times they appear  */ 


<<<<<<< Updated upstream
int main (void){
    int w;
    char words [20];
=======
>>>>>>> Stashed changes

int main (int argc, char *argv[]){
    //point to line of txt file that starts as null and will be populated as txt file is read 
    // this is the numbe of words the user chooses to input
    int w;
    
    printf("Enter the number of words you want to search for: ");
    scanf("%d", &w);
<<<<<<< Updated upstream

    if (w == 0){
        printf("Please enter a number greater than zero");
        return 0; 
    }
    else{
        get_keywords(w);
        
    }
    
}
int get_keywords(int w){
    printf ("%d\n", w);
    printf("Time to enter words\n");
    char keywords [w][20];
    int i = 0;
    while (i <= (w-1)){
        char word [20];
        printf("Enter a word:");
        scanf("%s", word);
        printf("%s\n", word);
        strcpy( keywords[i], word);
        i++;
    } 
    
    printf("%s\n", keywords[0]);
    printf("%s\n", keywords[1]);
    printf("%s\n", keywords[2]);
    return 0;
}
=======
    
    printf("Pointer\n");
    printf("%p\n", &w);
    printf("Integer\n");
    printf("%d\n", w);
    
    //create 2d array of characters 
    char keywords[w][20];
    for(int i =0; i<w; i++){
        printf("please enter a word: ");
        scanf("%s", keywords[i]);
        printf("\n%p\n", keywords[i]);
    }
    
    //create an array of pointers to each element in the keywords array
    char (*ptrKey)[w][20] = NULL;
    //initialize the pointer
    ptrKey = &keywords;
    //prints the pointer to the first element in the keywords array
    printf("%p\n", ptrKey);

    printf("Reading txt file now\n");
   char str[256];
     FILE *f = fopen("tintTale.txt", "r");
     if (f == NULL){
         perror("Error opening file\n");
         return (-1);
     }
     else{
         fgets(str,256,f);
         puts(str);
     }
     fclose(f);
     return(0);
      
    
}   

     
>>>>>>> Stashed changes
