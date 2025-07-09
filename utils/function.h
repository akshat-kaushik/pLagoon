#include<stdio.h>
#include<string.h>
#include<dirent.h>
#define MAX 1024

int java(const char* ddname);
int c(const char* dename);
int cpp(const char* dfname);
int py(const char* dgname);

int txt(const char* dhname);
int html(const char* diname);
int css(const char* djname);
int js(const char* dkname);

int h(const char* dlname);
int json(const char* dmname);
int xml(const char* dnname);
int md(const char* doname);

void lister(const char* name,int logo);
int countLine(const char *n);
int total();

#define DIR_JAVA java(sky->d_name)
#define DIR_C c(sky->d_name)
#define DIR_CPP cpp(sky->d_name)
#define DIR_PYTHON py(sky->d_name)

#define DIR_TXT txt(sky->d_name)
#define DIR_HTML html(sky->d_name)
#define DIR_CSS css(sky->d_name)
#define DIR_JAVASCRIPT js(sky->d_name)

#define DIR_HEADER_C h(sky->d_name)
#define DIR_JSON json(sky->d_name)
#define DIR_XML xml(sky->d_name)
#define DIR_MD md(sky->d_name)