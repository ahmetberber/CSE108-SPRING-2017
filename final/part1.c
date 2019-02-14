#include <stdio.h>
#include <string.h>

void replace_word(char* fname, char* wsrc, char* wdest);

int main()
{

	replace_word("fin.txt","ahmet","ali");

	return 0;	
}

void replace_word(char* fname, char* wsrc, char* wdest)
{
	FILE* fin = fopen(fname,"r");
	FILE* fout = fopen("temp.txt","w");
	char temp[100];
	while(fscanf(fin,"%s", temp) != EOF)
    {
        if(strcmp(temp,wsrc)==0)
        {
        	fprintf(fout,"%s\t",wdest);
        }
        else
        {
        	fprintf(fout,"%s\t",temp);       	
        }
    }
    fclose(fin);
    fclose(fout);
}

