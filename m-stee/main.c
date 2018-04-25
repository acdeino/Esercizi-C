/* Caricare file txt/dat, inserire stringa, cercare stringa nel file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		printf("%s", Ste);
	}
	fclose(fp);
	printf("\n");

	scanf("%s", Edo);
	printf("%s \n", Edo);

	int i = 0;
	int o = 0;

	for (i=0; Edo[i]!='\0'; i++)
	{
	;
    }
	// oppure, al posto del ciclo for:  i = strlen(Edo);

	// printf("%d", i);

	// o = strlen(Ste);
	// printf("%d", o);



	system("PAUSE");
	return 0;
}
