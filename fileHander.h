#ifndef _SELF_DEFINE_FILEHANDLE
#define _SELF_DEFINE_FINEHANDLE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//读取文件，并获取整形数据列表(只读取文件的一行)
int *getFileIntArr(char *filename);

//读取文件，并获取整形数据列表(读取文件的多行)
int *getFileIntArrMultiple(char *filename);

//读取文件，并获取字符列表
char *getFileCharArr(char *filename);

//读取文件，并获取字符串列表
char **getFileStringArr(char *filename);

#endif
