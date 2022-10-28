//biblioteques
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>

#ifndef MAX
#define MAX 1000
#endif



void lire_dossier(char *argv)
{
    printf("start 1 \n");
    DIR *dp;
    struct dirent *dirp;

    dp = opendir(argv);

    while ((dirp = readdir(dp)) != NULL)
    {
        printf("%s\n", dirp->d_name);
    }

    closedir(dp);
    
}


void lire_dossier_recursif(char * argv)
{
    DIR *dp;
    struct dirent *dirp;

    
    dp = opendir(argv);
    
    

    while ((dirp = readdir(dp)) != NULL)
    {
        printf("%s\n", dirp->d_name);

        
        if ((dirp->d_type == DT_DIR)&&(strcmp(dirp->d_name ,".") != 0 )&&(strcmp(dirp->d_name ,"..") != 0 ))
        {
    
            char * path;

            path = malloc(sizeof(char)*(strlen(dirp->d_name)+strlen(argv)+2));
            path = strcat(path ,argv);
            path = strcat(path ,"/");
            path = strcat(path,dirp->d_name);
            lire_dossier_recursif(path);
            
            free(path);
        }

        

            
    }

    closedir(dp);

}

void lire_dossier_iteratif(char * nom)
{

    char * tableau[MAX];
    tableau[0] = nom;
    int compteur = 1;
   
    DIR *dp;
    struct dirent *dirp;

    for (int i=0; i < compteur; i++)
    {
        

        printf("%s\n",tableau[i]);
        dp = opendir(tableau[i]);
        

        while ((dirp = readdir(dp)) != NULL)
        {
            char * name = dirp->d_name;

            printf("%s\n", name);
            
            if ((dirp->d_type == DT_DIR)&&(strcmp(name ,".") != 0 )&&(strcmp(name ,"..") != 0 ))
            {
              

                char * path;

                path = malloc(sizeof(char)*(strlen(name)+strlen(tableau[i]))+2);
                path = strcat(path ,tableau[i]);
                path = strcat(path ,"/");
                path = strcat(path,name);
                printf("%s\n",path);
                if (compteur < MAX)
                {
                    tableau[compteur] = path;
                    compteur++;
                }
                
            }
        
         
        }
        closedir(dp);
    }
    

}

int main(int argc, char **argv)
{
    if (argc != 2) {
        fprintf(stderr, "Usage: ./program directory_name\n");
        exit(EXIT_FAILURE);
    }

    /*lire_dossier(argv[1]);*/
    /*lire_dossier_recursif(argv[1]);*/
    lire_dossier_iteratif(argv[1]);
    return(0);
}
