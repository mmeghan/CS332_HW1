#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
step 1: get keywords from command line 
step 2: read the .txt scanning for the keywords
step 3: add word counts to 2D array
step 4: print out the search words and the number of times they appear  */ 

int get_keywords(int w);

int main (void){
    int* ptr;
    int w;
    char words [20];

    printf("Enter the number of words you want to search for: ");
    scanf("%d", &w);
    char** members=malloc(w *sizeof(members));
    
    if (members == NULL){
        printf("Memory not allocated.\n");
        exit(0);
    }
    else{
        printf("Memory successfully allocated using malloc.\n");
    }
    
    if (w == 0){
        printf("Please enter a number greater than zero");
        return 0; 
    }
    else{
        
        
        for(int i =0; i <w; i++){
            char word = [20];
            printf("Enter a word: ");
            scanf("%s", word);
            ptr[i]= word;
            printf("%s", ptr[i]);
        }
        
    }
    
}
