#define __POSIX__SOURCE
#include<dirent.h>
#include<sys/types.h>
#define __POSIX__SOURCE
#include<stdio.h>
#include<string.h>

int main()
{
    DIR *dir;
    struct dirent *entry;
    char caminho_pasta[300], ficheiro[300], caminho_pasta_ficheiro[600];
    char barra = '/';
    int count;
    int flag = 0;

    printf("Informe o caminho: ");scanf("%[^\n]s",caminho_pasta);

    if((dir = opendir(caminho_pasta)) == NULL)
    {
        perror("Opendir() error");
    }
    else
    {
        count = 0;
        printf("informe o ficheiro: ");scanf(" %[^\n]s",ficheiro);

        while((entry = readdir(dir)) != NULL)
        {
            if( strcmp(entry->d_name,ficheiro) == 0){

                strcpy(caminho_pasta_ficheiro, caminho_pasta);
                count = strlen(caminho_pasta_ficheiro);
                strcpy(caminho_pasta_ficheiro[count+1], barra);
                strncat(caminho_pasta_ficheiro, ficheiro, 600);
                printf("%s\n",caminho_pasta_ficheiro);
                //remove(caminho_pasta_ficheiro);
                printf(" %s\n",caminho_pasta_ficheiro);
                flag = 1;
                printf("ficheiro excluido com sucesso!");
                break;
            }
        }
        closedir(dir);
    }
    if(flag == 0)
    {
        printf("\nficheiro não existe\n\n");
    }
}