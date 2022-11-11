/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "client.h"

/*
 * Fonction d'envoi et de réception de messages
 * Il faut un argument : l'identifiant de la socket
 */

struct etudiant
{
  int note1;
  int note2;
  int note3;
  int note4;
  int note5;
};

int envoie_operateur_numeros(char * fichier){
  int note1;
  char dir[1000] = "../etudiant/";
  strcat(dir,fichier);
  FILE* file = fopen (dir, "r");
  fscanf(file,"%d",&note1);
  fclose(file);
  return(note1);
}

int envoie_recois_message(int socketfd)
{
  struct etudiant etudiants[6]; 
  // permet récupérer toutes les notes et les mettre dans une structure
  for (int i =1; i <=5 ;i++)
  {
    for (int j =1; j <=5 ;j++)
    {
      char lien[124] = "";
      char numeroetudiant[10]  = "";
      char numeronote[10]  = "";
      sprintf(numeroetudiant,"%d",i);
      sprintf(numeronote,"%d",j);
      strcat(lien,numeroetudiant);
      strcat(lien,"/note");
      strcat(lien,numeronote);
      strcat(lien,".txt");
      if (j == 1)
      {
        etudiants[i].note1 = envoie_operateur_numeros(lien);
      }

      if (j == 2)
      {
        etudiants[i].note2 = envoie_operateur_numeros(lien);
      }
        
      if (j == 3)
      {
        etudiants[i].note3 = envoie_operateur_numeros(lien);
      }
        
      if (j == 4)
      {
        etudiants[i].note4 = envoie_operateur_numeros(lien);
      }
        
      if (j == 5)
      {
        etudiants[i].note5 = envoie_operateur_numeros(lien);
      }

    }
  }
  //permet de calculer et d'afficher les moyennes des étudiants
  for (int i =1; i <=5 ;i++)
  {
    int somme = 0;
    
    for (int j =1; j <=5 ;j++)
    {
      char data[1024];
      int note;

      if (j == 1)
      {
        note = etudiants[i].note1;
      }

      if (j == 2)
      {
        note = etudiants[i].note2;
      }
        
      if (j == 3)
      {
        note = etudiants[i].note3;
      } 
      if (j == 4)
      {
        note = etudiants[i].note4;
      }
        
      if (j == 5)
      {
        note = etudiants[i].note5;
      }
      
      char message[100]="";
      strcat(message,"calcule: +");
      char car1[100], car2[100];
      sprintf(car1,"%d", note);
      sprintf(car2,"%d", somme);
      strcat(message, car1);
      strcat(message, " ");
      strcat(message, car2);
      // la réinitialisation de l'ensemble des données
      
      memset(data, 0, sizeof(data));

      strcat(data, message);
      

      int write_status = write(socketfd, data, strlen(data));
      if (write_status < 0)
      {
        perror("erreur ecriture");
        exit(EXIT_FAILURE);
      }
      memset(data, 0, sizeof(data));

      // lire les données de la socket
      



      int read_status = read(socketfd, data, sizeof(data));
	  sscanf(data, "%i", &note);
	  somme=note;
      memset(data, 0, sizeof(data));

      
      if (read_status < 0)
      {
      	perror("erreur lecture");
    	return -1;
  	  }

      //printf("Réponse recu: %s\n", data);
      memset(data, 0, sizeof(data));
    }
    printf("La somme des notes de l'étudiant n°%d est: %d et sa moyenne est de: %f\n",i ,somme ,somme/5.0);
  }

///////////////////////////////////////////////////////////////////////////////////////
  //permet de calculer et d'afficher les moyennes par sujets
 for (int i =1; i <=5 ;i++)
  {
    int somme = 0;
    
    for (int j =1; j <=5 ;j++)
    {
      char data[1024];
      int note;

      if (i == 1)
      {
        note = etudiants[j].note1;
      }

      if (i == 2)
      {
        note = etudiants[j].note2;
      }
        
      if (i == 3)
      {
        note = etudiants[j].note3;
      } 
      if (i == 4)
      {
        note = etudiants[j].note4;
      }
        
      if (i == 5)
      {
        note = etudiants[j].note5;
      }
      
      char message[100]="";
      strcat(message,"calcule: +");
      char car1[100], car2[100];
      sprintf(car1,"%d", note);
      sprintf(car2,"%d", somme);
      strcat(message, car1);
      strcat(message, " ");
      strcat(message, car2);
      // la réinitialisation de l'ensemble des données
      
      memset(data, 0, sizeof(data));

      strcat(data, message);
      

      int write_status = write(socketfd, data, strlen(data));
      if (write_status < 0)
      {
        perror("erreur ecriture");
        exit(EXIT_FAILURE);
      }
      memset(data, 0, sizeof(data));

      // lire les données de la socket
      



      int read_status = read(socketfd, data, sizeof(data));
	  sscanf(data, "%i", &note);
	  somme=note;
      memset(data, 0, sizeof(data));

      
      if (read_status < 0)
      {
      	perror("erreur lecture");
    	return -1;
  	  }

      //printf("Réponse recu: %s\n", data);
      memset(data, 0, sizeof(data));
    }
    printf("La moyenne des étudiants pour le sujet %d est: %f\n",i ,somme/5.0);
  }

//////////////////////////////////////////////////////////////////////////////////////
  //permet de faire l'exo 5.4 et/ou 5.5
  // c'est a dire demander au serveur un calcul ou une réponse à un message
  char data[1024];
  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // Demandez à l'utilisateur d'entrer un message
  char message[1024];
  printf("Votre message (message: ...) ou calcul (calcule: Opé int1 int2): ");
  fgets(message, sizeof(message), stdin);
  //strcpy(data, "message: ");
  strcat(data, message);
  

  int write_status = write(socketfd, data, strlen(data));
  if (write_status < 0)
  {
    perror("erreur ecriture");
    exit(EXIT_FAILURE);
  }

  // la réinitialisation de l'ensemble des données
  memset(data, 0, sizeof(data));

  // lire les données de la socket

  int read_status = read(socketfd, data, sizeof(data));

  if (read_status < 0)
  {
    perror("erreur lecture");
    return -1;
  }

  printf("Réponse recu: %s\n", data);

  return 0;
}

int main()
{
  int socketfd;
  struct sockaddr_in server_addr;
  /*
   * Creation d'une socket
   */
  socketfd = socket(AF_INET, SOCK_STREAM, 0);
  if (socketfd < 0)
  {
    perror("socket");
    exit(EXIT_FAILURE);
  }
  // détails du serveur (adresse et port)
  memset(&server_addr, 0, sizeof(server_addr));
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = INADDR_ANY;
  // demande de connection au serveur
  int connect_status = connect(socketfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
  if (connect_status < 0)
  {
    perror("connection serveur");
    exit(EXIT_FAILURE);
  }
  // appeler la fonction pour envoyer un message au serveur
  envoie_recois_message(socketfd);
  close(socketfd);
}
