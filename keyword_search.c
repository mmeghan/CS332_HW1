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
    int w;
    char words [20];

    printf("Enter the number of words you want to search for: ");
    scanf("%d", &w);

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