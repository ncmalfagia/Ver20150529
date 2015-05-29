#include <stdio.h>
#include <stdlib.h>
#define N 3
#define MAX_STRLEN 25

struct s_ragazza{
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int cellulare;
    int eta;
    int iGradimento;
};
typedef struct s_ragazza ragazza;

void funzione (ragazza selezione[], int n, FILE*, FILE*);

int main(int argc, char** argv) {
    
    int i,j,temp;
    FILE *evitare,*ripetere;
    evitare=fopen("daevitare.csv","w");
    ripetere=fopen("daripetere.csv","w");
    ragazza selezione[N];
    
    for(i=0;i<N;i++){
        printf("inserisci il nome : ");
        scanf("\n%[^\n]",selezione[i].nome);
        printf("inserisci il cognome : ");
        scanf("\n%[^\n]",selezione[i].cognome);
        printf("inserisci il numero di telefono: ");
        scanf("%d",&(selezione[i].cellulare));
        printf("inserisci l'eta' : ");
        scanf("%d",&(selezione[i].eta));
        printf("inserisci il valore di gradimento da 0 a 4 : (<2 da evitare),(>2 da ripetere) ");   
        scanf("%d",&(selezione[i].iGradimento));
        }
    // ordinamento 
    //for(i=0;i<N-1;i++){
        //for(j=0;j<N-1-j;j++){
            //if((strcmp(selezione[j].nome,selezione[j+1].nome)>0){
                
               // temp=selezione[j];
               // selezione[j]=selezione[j+1];
               // selezione[j+1]=temp;
                
           //}
        //}
    
   //}
    
    funzione;
  
    fclose(evitare);
    fclose(ripetere);
    
    return (EXIT_SUCCESS);
}

void funzione(ragazza selezione[], int n,FILE *evitare, FILE *ripetere){
    
    int i;
    
    for(i=0;i<n;i++){
        if( selezione[i].iGradimento<2){
            fprintf(evitare,"%s,%s,%d,%d,%d",selezione[i].nome,selezione[i].cognome,selezione[i].cellulare,selezione[i].eta,selezione[i].iGradimento);             
        }
        else{
            fprintf(ripetere,"%s,%s,%d,%d,%d",selezione[i].nome,selezione[i].cognome,selezione[i].cellulare,selezione[i].eta,selezione[i].iGradimento);  
        }
    
    
    }
    

}