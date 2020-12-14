# LA GESTION DES ETUDIANTS D’UNE ECOLE 
## La problématique et motivation :

De nos jours, la gestion des données d'une façon automatisée occupe une place privilégiée dans le monde de l'informatique. Grâce à cette technologie, le temps de recherche des données a chuté de manière considérable, ce qui laisse croire qu'elle a encore de beaux jours devant elle. C’est dans ce contexte que plusieurs sociétés essayent de profiter au maximum possible de ces technologies afin d’améliorer leurs productivités et de faire face à quelques problèmes pénibles qui peuvent constituer un obstacle de progression. Pour ce projet j’ai opté pour le cas d’une école qui aura besoin de gérer l’ensemble de ces étudiants à travers une interface simple et pratique .

Alors , Mon bute se focalise sur la conception et le développement d'une application pour gérer ces étudiants , en utilisant la technologie ***orientée objet ( C++ )*** . Cette gestion sera bien sûr traitée à travers une base de données stockée sur le local ou sur un serveur privé de l’établissement. Ceci passe par une réflexion sur la sécurité et l'organisation de l'information et la gestion du système .

## C’est quoi Le besoin traité par le projet ?

Si le besoin du projet est fixé . Les étapes suivantes de la conception deviennent plus clair . Dans mon cas ce besoin , au début a été juste l’enrichissement de mes connaissances en orienté objet et surtout à travers une interface graphique (--une API orientée objet et développée en C++ « Qt »--) . Mais de plus en plus j’ai aimé l’idée de projet , donc j’ai voulait poussé le projet plus loin , j’ai contacté quelque écoles dans ma ville pour présenter mon projet . Alors , le besoin derrière est devenu la réalisation d’un produit qui sera offert aux clients.

 Une fois les besoins derrière la réalisation de l’application sont connus, on peut donc entamer la partie la plus importante de la conception de l’application, qui est la réalisation du Modèle fonctionnel et les règles de gestion de cette application.
 
 ## Le Modèle Fonctionnel :
 
 Le modèle fonctionnel montre comment les valeurs sortantes sont obtenues à partir des valeurs entrantes, et de mettre les règles de gestion en claire , sans se préoccuper de l'ordre dans lequel elles sont obtenues. Dans mon cas le modèle de l’application sera modeste mais en même temps qui répond à beaucoup de critère de gestion. Car , je suis dans la phase d’apprentissage (pas de grand expectation sur un modèles parfaite) . 
 
 Le but général est de gérer l’ensemble des étudiants , professeurs et matière d’une école. Le but général est de gérer l’ensemble des étudiants , professeurs et matière d’une
école. Dans la gestion des étudiants on traitera :

* La liste des étudiants du lycée
* La gestion des absences
* La note d’un étudiant dans une matière

## Les Règles de Gestion : 

Réaliser une application Qt pour gérer l’ensemble des étudiants, des professeurs et des matières de votre école. L’application doit gérer :
* La liste des étudiants de l’école.
* La liste des professeurs de l’école.
* La liste des matières enseignées.
* les notes d’un étudiant dans une matière donnée.

Pour chaque catégorie (étudiant, professeur, matière, …) l’utilisateur doit avoir la possibilité de :
- Ajouter un élément
- Modifier un élément
- Supprimer un élément
- Afficher la liste de tous les éléments

Pour des raisons de sécurité on ajoutera une table d’administrateurs pour que seuls les personnels ayant le droit de se connecter puissent accéder à l’interface et faire les changements cité dessus sur la base de données.


## Modèle Logique de Donnée

* Etudiant (numapp,cne,cin,nom,prenom,adresse,date_naissance)
* Matiere (id_matiere,libelle,coefficient,#id_prof)
* Professeur (id_prof,nom,prenom)
* Abscence (#numapp,#id_matiere,date_abscence)
* Evaluation (#numapp,#id_matiere,note)


## Overview sur les outils utilisé :

### La relation entre C++ et Qt : 

Pour ce projet j'ai essayé d’utiliser des technologies diverses de développement d’application professionnel, tout d’abord on travaillera avec la programmation Orienté Objet et comme environnement de développement on a choisi le langage C++.

Qt est un Framework orienté objet et développé en C++ par QtDevelopmentFrameworks, filiale de Digia. Il offre des composants d'interface graphique (widgets), d'accès aux données, de connexions réseaux, de gestion des fils d'exécution, d'analyse XML, etc. Qt est par certains aspects un framework lorsqu'on l'utilise pour concevoir des interfaces graphiques ou que l'on architecture son application en utilisant les mécanismes des signaux etslots par exemple. Qt permet la portabilité des applications qui n'utilisent que ses composants par simple recompilation du code source. Les environnements supportés sont les Unix (dont Linux) qui utilisent le système graphique X Window System ou Wayland, Windows, Mac OS X et également Tizen. Le fait d'être une bibliothèque logicielle multiplate-forme attire un grand nombre de personnes qui ont donc l'occasion de diffuser leurs programmes sur les principaux OS existants. Qt est notamment connu pour être la bibliothèque sur laquelle repose l'environnement graphique KDE, l'un des environnements de bureau les plus utilisés dans le monde Linux.

### La relation entre C++ et le SGBD : 

Le module Qt SQL fournit une couche pilote, une couche API SQL et une couche d'interface utilisateur pour les bases de données SQL. SQLite est une bibliothèque in-process qui implémente un moteur de base de données SQL transactionnel autonome, sans serveur et sans configuration. Fondamentalement, une base de données stockée dans un seul fichier (ou mémoire).
Qt offre un support (pilotes) pour d'autres bases de données populaires comme MySQL et PostgreSQL, mais SQLite est l'option la plus simple et la plus rapide pour une application simple et elle devrait être plus que suffisante dans la plupart des cas. Alors , à travers ce code je manipule ma connexion à la base donné local : 
  
`#include <QSqlDatabase>`
`#include <QSqlDriver>`
`#include <QSqlError>`
`#include <QSqlQuery>`

  * connOpen() //Pour se connécté à la base de donnée « database.db »
  * connClose() //Pour férmé la connection à la base de donnée .

 ```QSqlDatabase mydb;

void connClose(){
 mydb.close();
 mydb.removeDatabase(QSqlDatabase::defaultConnection);}

bool connOpen(){
 mydb = QSqlDatabase::addDatabase("QSQLITE");
 mydb.setDatabaseName("C:/Users/hp/Desktop/Projet/Database/D
atabase.db");
 if (!mydb.open()){
 qDebug() << "Failed to open the database";
 return false;}
 else{
 qDebug()<<"Conneted...";
 return true;}
 ```

## L’administration :

Pour garder la sécurité et avoir un contrôle sur les droits d’accès à cette application on aura besoin d’une interface d’administration, à partir de laquelle on doit se connecté avant de pouvoir accéder au contenue de l’application. Pour cela on a ajouté une autre table d’administrateurs qui aura les attributs suivants :
* Login
* Mot de passe

<img src="/Login.png">

## Le Résultat Final :

Presque la totalité du trajet est déjà effectué, il ne reste donc qu’à mettre pour chaque entité de la base de donnée les quatre fonctions qu’on a définie. Puis on obtient le projet Final suivant :

<img src="/APP.png"> 

## Fonctionalité non implimanté : 

Le travail effectuer est assez important, il reste extensible .Voila quelques idées proposées pour l'amélioration :

* ajouter la gestion des niveaux et des classes.
* Ajouter une interface séparé pour les professeurs, permettant la saisi des notes.
* Ajouter l’option de rédaction et impression automatique des bulletins de chaque
étudiant.
* Elargir notre application afin de gérer un établissement du niveau supérieur tel
que notre école. 
