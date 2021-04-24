#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<fstream>
#define NULL 0

using namespace std;

    int i = 0,  b, j, rep=0;
    char cadena[700], buscar[500], texto[700];
    char *a , p[30], aux[60], f;
    
    FILE *mytext;
	char ch;
	int d;


	
int main(){
	
	cout<<" *********************************************\n";
	cout<<" **                MENU                     **\n";
	cout<<" * 1. Leer un Archivo                        *\n";
	cout<<" * 2. Buscar la letra dada en un Archivo     *\n";
	cout<<" * 3. Buscar la Palabra dada en un Archivo   *\n";
	cout<<" * 4. Copiar el segundo párrafo a            *\n";
	cout<<" * 5. Buscar un texto en un Archivo          *\n";
	cout<<" *********************************************\n";
	cin>> b;
	cout<<"\n";
	
	
	
	if(b==1){
	int d;
	system("cls");
	cout<<" Que documento quiere abrir "<<endl;
	cout<<" 1. Ingles - Espanol"<<endl;
	cout<<" 2. Italiano - Espanol"<<endl;
	cout<<" 3. Franses - Espanol"<<endl;
	cout<<" 4. Aleman - Espanol"<<endl;
	cin>>d;
	
	
		
	if(d==1){
		system("cls");		
		mytext = fopen("ing.txt" , "r");
	}
	
		
	if(d==2){
		system("cls");
		mytext = fopen("ita.txt" , "r");
	}
	

	if(d==3){
		system("cls");
		mytext = fopen("fran.txt" , "r");
	}
	
	if(d==4){
		system("cls");
		mytext = fopen("fran.txt" , "r");
	
	if(mytext == NULL)
		printf("Error al abrir archivo \n");
		}
		
	else {
		ch = getc(mytext);
		while(ch != EOF){
			putchar(ch);
			ch = getc(mytext);
		}
				
		fclose(mytext);
			}

}
}


/*	if(d==4){
	FILE *mytext;
	char ch;
	mytext = fopen( "ita.txt" , "r");
	}
*/
			
	
/*	if(b==2){
	char l;
		mytext=fopen("espa.txt","r");
		printf("\nEscriba la letra a buscar: ");
		scanf("%s", &l);
			if(mytext!=NULL) {
				while(!feof(mytext)){
					i = fgetc(mytext);
					if(i == l){
					j++;
			}

		}
		printf("\nLas coincidencias en el texto:%d", j);
		
	}
	else{
		printf("Error al abrir archivo");
		}
	}	
	
	 
    if (b==3){
    if (mytext != NULL)
    {      
        printf("\n Escriba la palabra que desea buscar:\n\n ");
		scanf("%s",&p);
			mytext=fopen("espa.txt","r");
	
			if(mytext!=NULL) {
				while( fscanf(mytext, "%s", aux)!=EOF ){
					if(strcmp(aux, p) ==0){
				rep++;
				}
			}
       		 printf("\nLa palabra se repite:\t %d",rep);
			
		}else
		{
		printf("Error en la apertura");
		}
	
		}
	}


	if(b==4){
		FILE *nuevoarch;
		char archivonuevo[50];
		char fila[600];
				
		mytext=fopen("espa.txt","r");
			printf("\n Ingrese el nombre del nuevo fichero seguido de .txt\n");
			scanf("%s", &archivonuevo);
			printf("\n Que numero de fila desea copiar\n");
			scanf("%d", &f);
				
				nuevoarch= fopen(archivonuevo, "w");
					while(fgets(fila,600,mytext)){
						i++;
						if(i==f){
							fprintf(nuevoarch,"%s",&fila);
						}
					}

		}
		
	*/



