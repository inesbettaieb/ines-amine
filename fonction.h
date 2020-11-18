
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
typedef struct 
{
char identifiant[20];
char marque[20];
int type; //0: pour température , 1: pour l'humidité
char position[20];
int etat; //1: en marche , -1:en panne
}Capteur;

int lire_fichier(char filename[],Capteur C[]);
void lire_capteur(Capteur *p_Capteur);
int ajouter_capteur(Capteur C[], int n); // n: la taille 
int enregistrer_fichier(char filename[],Capteur C[], int n);
int chercher_capteur (Capteur C[], int n , char id[]); // retourne l'indice du capteur avec l'id 
void modifier_capteur(Capteur C[], int n, int position); 
int supprimer_capteur(Capteur C[], int n, int position);// change la taille
void afficher_capteurs(Capteur C[], int n);
void changer_etat_capteur(Capteur C[], int n, int pos, int etat);
typedef struct
{
int id;
char nom[20];
char prenom[20];
int tel;
char mail[40];
}client;

int lire_fichier(char filename[],client C[]);
void lireClient(client *pClient);
int ajoutClient(client C[], int n);
int enregistrer_fichier(char filename[],client C[], int n);
int chercherClient (client C[], int n , char id[]); // retourne l'indice du capteur avec l'id 
void modifClient (client C[], int n, int position);
int SuppClient(Capteur C[], int n, int position);// la sortie est la taille modifiée du tableau
void afficherClient(Client C[], int n);
void chercherClient (clients C[], int n , char id[]);

typedef struct 
{
char identifiant[20];
char marque[20];
int prix ;
char type[20];
int nombre_dajout; 
}equipement ;

int lire_fichier(char filename[],equipement e[]);
void lire_capteur(Capteur *p_equipement);
int ajouter_equipement(equipement e[], int n)
int enregistrer_fichier(char filename[],equipement e[], int n);
void chercher_equipement (equipement e[], int n , char identifiant[]); 
void modifier_equipement(equipement e[], int n, int identifiant); 
int supprimer_equipement(equipement e[], int n, char identifiant []);
void afficher_equipements(equipement e[], int n);

