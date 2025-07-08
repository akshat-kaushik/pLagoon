#include"function.h"

int totalLines;
char nightmare[MAX] = { 0 };

int java(const char* ddname)
{
    const char* joly = strrchr(ddname,'.');
    int true = strcmp(joly,".java") == 0;
    return true;
}

int c(const char* dename)
{
    const char* joly = strrchr(dename,'.');
    int true = strcmp(joly,".c") == 0;
    return true;
}

int cpp(const char* dfname)
{
    const char* joly = strrchr(dfname,'.');
    int true = strcmp(joly,".cpp") == 0;
    return true;
}

int py(const char* dgname)
{
    const char* joly = strrchr(dgname,'.');
    int true = strcmp(joly,".py") == 0;
    return true;
}

int txt(const char* dhname)
{
    const char* joly = strrchr(dhname,'.');
    int true = strcmp(joly,".txt") == 0;
    return true;
}

int html(const char* diname)
{
    const char* joly = strrchr(diname,'.');
    int true = strcmp(joly,".html") == 0;
    return true;
}

int css(const char* djname)
{
    const char* joly = strrchr(djname,'.');
    int true = strcmp(joly,".css") == 0;
    return true;
}

int js(const char* dkname)
{
    const char* joly = strrchr(dkname,'.');
    int true = strcmp(joly,".js") == 0;
    return true;
}

int h(const char* dlname)
{
    const char* joly = strrchr(dlname,'.');
    int true = strcmp(joly,".h") == 0;
    return true;
}

int json(const char* dmname)
{
    const char* joly = strrchr(dmname,'.');
    int true = strcmp(joly,".json") == 0;
    return true;
}

int xml(const char* dnname)
{
    const char* joly = strrchr(dnname,'.');
    int true = strcmp(joly,".xml") == 0;
    return true;
}

int md(const char* doname)
{
    const char* joly = strrchr(doname,'.');
    int true = strcmp(joly,".md") == 0;
    return true;
}

void lister(const char* name,int logo)
{
    DIR *flymax;
    flymax = opendir(name);

    if(flymax == NULL)
    {
        perror("Error No File Found");
        return;
    }

    struct dirent *sky;
    sky = readdir(flymax);

    while(sky != NULL)
    {

        if(sky->d_type == DT_DIR && strcmp(sky->d_name,".") != 0 && strcmp(sky->d_name,"..") != 0)
        {
            printf("\t\t\t\tDIR :$%hhd %s\n", sky->d_type, sky->d_name);
                
            char shadow[MAX] = { 0 };
            strcpy(shadow,name);
            strcat(shadow,"/");
            strcat(shadow,sky->d_name);
            lister(shadow,logo);
        } 
        else
        {
            switch(logo)
            {
                case 0:
                    {
                        if(sky->d_type == DT_REG)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 1:
                    {
                        if(sky->d_type == DT_REG && DIR_JAVA)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 2:
                    {
                        if(sky->d_type == DT_REG && DIR_C)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 3:
                    {
                        if(sky->d_type == DT_REG && DIR_CPP)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 4:
                    {
                        if(sky->d_type == DT_REG && DIR_CSS)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 5:
                    {
                        if(sky->d_type == DT_REG && DIR_HEADER_C)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 6:
                    {
                        if(sky->d_type == DT_REG && DIR_HTML)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 7:
                    {
                        if(sky->d_type == DT_REG && DIR_JAVASCRIPT)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 8:
                    {
                        if(sky->d_type == DT_REG && DIR_JSON)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 9:
                    {
                        if(sky->d_type == DT_REG && DIR_MD)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 10:
                    {
                        if(sky->d_type == DT_REG && DIR_PYTHON)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 11:
                    {
                        if(sky->d_type == DT_REG && DIR_TXT)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                case 12:
                    {
                        if(sky->d_type == DT_REG && DIR_XML)
                        {
                            strcpy(nightmare,name);
                            strcat(nightmare,"/");
                            strcat(nightmare,sky->d_name);
                            printf("FILE :$%hhd FILE NAME :%s Lines :%d\n", sky->d_type, sky->d_name, countLine(nightmare));
                        }
                        break;
                    }
                default: printf("NO EXTENSION CURRENTLY PRESENT $ffff84\n");
            }
        }
        
        sky = readdir(flymax);
    }

    closedir(flymax);
}

int countLine(const char* n)
{
    int count = 1;
    
    FILE *file;
    file = fopen(n,"r");
    
    if(file == NULL)
    {
        perror("File Not Found");
        return 1;
    }

    char ch = fgetc(file);
    while(ch != EOF)
    {
        if(ch == '\n')
            count++;
        ch = fgetc(file);
    }

    fclose(file);
    totalLines += count;
    return count;
}

int total()
{
    return totalLines;
}