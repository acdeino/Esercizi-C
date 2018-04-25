#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("Does the compiler fucking work? Yes, it does.\n");
	
	char Edo [20];
	char Ste [1000] ="";
	FILE *fp=fopen("lorem.dat", "r");
	if (fp == NULL) {
		printf("File not found \n");
	}
	else {
		while (!feof(fp))
		{
		    fscanf(fp, "%s", Edo);
		    strcat(Ste, Edo);
		    strcat(Ste, " ");
		}
		printf("\n%s\n", Ste);
	}
	fclose(fp);
	printf("\n");
	
	printf("Inserisci la stringa da cercare: ");
	scanf("%s", Edo);
	printf("La stringa inserita e': %s\n", Edo);
	
	int i = 0;
	int o = 0;

	//for (i=0; Edo[i]!='\0'; i++)
	while (Edo[i]!='\0')
	{
	i++;
    }
	// oppure, al posto del ciclo for:  i = strlen(Edo);
	printf("La stringa inserita e' composta da %d caratteri.\n", i);
	
	o = strlen(Ste);
	printf("Il testo in cui cercare e' composto da %d caratteri.\n", o);
	
	
	printf("\n");
	system("PAUSE");
	return 0;
}
