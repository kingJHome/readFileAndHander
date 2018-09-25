#include "readFileAndHander.h"

IntArray getFileIntArr(char *filename){
	IntArray result = {NULL,0};
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

			result.elem = (int*)malloc(arrlen * sizeof(int));
			if( result.elem ){
				result.length = arrlen;
				demit = strtok(line," ");
				while( demit ){
					result.elem[curPos++] = atoi(demit);
					demit = strtok(NULL," ");
				}
			}
		}
	}

	return result;
}

int *getFileIntArrMultiple(char *filename){
}

char *getFileCharArr(char *filename){
}

char **getFileStringArr(char *filename){
}
