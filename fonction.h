
int lire_fichier(char filename[],troupeau);
void ajouter_animal(Troupeau * p_troupeau, int * p_index);
void modifier_animal(Troupeau * p_troupeau, int * p_index);
void supprimer_animal(Troupeau * p_troupeau, int * p_index);
void chercher_animal(Troupeau * p_troupeau, int * p_index);
void afficher_troupeaux(Troupeau * p_troupeau, int * p_index);
int Nombre_brebis(Troupeau * p_troupeau, int * p_index);
int Nombre_veaux(Troupeau * p_troupeau, int * p_index);


typedef struct{
int jour;
int mois;
int annee;
}Date;

typedef struct{
int identifiant;
char type[30];
char sexe[30];
int etat; // 1 bonne santé 0 malade
Date date;
}Troupeau;
