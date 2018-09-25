#include "readFileAndHander.h"

int *getFileIntArr(char *filename){
	int *arr = NULL;
	FILE *fp = fopen(filename,"r");

	if( fp ){
		char *line = NULL;
		char setNum = 0;

		if( getline(&line, &setNum, fp) != -1 ){
			int arrlen = 0,curPos = 0;
			char *demit = NULL;

			for(int i = 0; line[i]!='\0'; ++i){
				if( line[i] == ' ' ){
					arrlen++;
				}
			}

			arr = (int*)malloc(arrlen * sizeof(int));
			if( arr ){
				demit = strtok(line," ");
				while( demit ){
					arr[curPos++] = atoi(demit);
					demit = strtok(NULL," ");
				}
			}
		}
	}

	return arr;
}

int *getFileIntArrMultiple(char *filename){
}

char *getFileCharArr(char *filename){
}

char **getFileStringArr(char *filename){
}
