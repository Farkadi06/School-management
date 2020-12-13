#include "note_abs.h"
#include "widget.h"
#include <QMessageBox>
#include "ui_note_abs.h"

Note_Abs::Note_Abs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Note_Abs)
{
    ui->setupUi(this);
}

Note_Abs::~Note_Abs()
{
    delete ui;
}


void Note_Abs::on_pushButton_ajouter_3_clicked()
{
    Widget conn;
    QString CNE = ui  -> texte_CNE_Abs -> text();
    QString Id_matiere = ui  ->  texte_Id_Abs-> text();
    QString Nbr_h = ui  ->  texte_Nbr_Abs-> text();
    if (!conn.connOpen()){
             qDebug() <<"Failed to open database";
             return;}

conn.connOpen();
QSqlQuery query;

query.exec("CREATE TABLE Abs (CNE VARCHAR(20)	NOT NULL , "
       "Id_matiere INTEGER  NOT NULL , nbr_h INTEGER,PRIMARY KEY (CNE,Id_matiere));");
query.prepare("insert into Abs values('"+CNE+"',"+Id_matiere+","+Nbr_h+");");
qDebug() << query.lastQuery();


if (query.exec()){
    QMessageBox msgBox;
    msgBox.setText("L'étudiant a bien été engregistrer!");
    msgBox.exec();
    conn.connClose();}

else
    QMessageBox::critical(this,tr("ERROR::"),tr("ERRORRRRRRRR"));
}


void Note_Abs::on_pushButton_afficher_3_clicked()
{
    Widget conn;
    QSqlQueryModel *Modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *query = new QSqlQuery(conn.mydb);
    query->prepare("SELECT * FROM Abs");
    query->exec();
    Modal->setQuery(*query);
    ui -> tableView->setModel(Modal);
}


void Note_Abs::on_pushButton_modifier_3_clicked()
{
    Widget conn;
    QString CNE = ui  -> texte_CNE_Abs -> text();
    QString Id_matiere = ui  ->  texte_Id_Abs-> text();
    QString Nbr_h = ui  ->  texte_Nbr_Abs-> text();
    if (!conn.connOpen()){
             qDebug() <<"Failed to open database";
             return;}

    if (!conn.connOpen()){
             qDebug() <<"Failed to open database";
             return;}

conn.connOpen();
QSqlQuery query;

query.prepare("UPDATE Abs SET CNE ='"+CNE+"',Id_matiere="+Id_matiere+",nbr_h="+Nbr_h+" WHERE CNE ='"+CNE+"' AND Id_matiere="+Id_matiere+" ;");
qDebug() << query.lastQuery();


if (query.exec()){
    QMessageBox msgBox;
    msgBox.setText("L'étudiant a bien été modifier!");
    msgBox.exec();
    conn.connClose();}

else
    QMessageBox::critical(this,tr("ERROR::"),tr("ERRORRRRRRRR"));

}

void Note_Abs::on_pushButton_supprimer_3_clicked()
{
    Widget conn;
    QString CNE = ui  -> texte_CNE_Abs -> text();
    QString Id_matiere = ui  ->  texte_Id_Abs-> text();
    QString Nbr_h = ui  ->  texte_Nbr_Abs-> text();

    if (!conn.connOpen()){
             qDebug() <<"Failed to open database";
             return;}

conn.connOpen();
QSqlQuery query;



query.prepare("DELETE FROM Abs WHERE CNE ='"+CNE+"';");
qDebug() << query.lastQuery();


if (query.exec()){
    QMessageBox msgBox;
    msgBox.setText("The student has been deleted.");
    msgBox.exec();
    conn.connClose();}

else
    QMessageBox::critical(this,tr("ERROR::"),tr("ERRORRRRRRRR"));

}

void Note_Abs::on_pushButton_ajouter_4_clicked()
{
    Widget conn;
    QString CNE = ui  -> texte_CNE_Note -> text();
    QString Id_matiere = ui  ->  texte_Id_Note-> text();
    QString Note = ui  ->  texte_Note-> text();
    if (!conn.connOpen()){
             qDebug() <<"Failed to open database";
             return;}

conn.connOpen();
QSqlQuery query;

query.exec("CREATE TABLE Evaluation (CNE VARCHAR(20)	NOT NULL , "
       "Id_matiere INTEGER  NOT NULL , Note INTEGER,PRIMARY KEY (CNE,Id_matiere));");
query.prepare("insert into Evaluation values('"+CNE+"',"+Id_matiere+","+Note+");");
qDebug() << query.lastQuery();


if (query.exec()){
    QMessageBox msgBox;
    msgBox.setText("L'étudiant a bien été engregistrer!");
    msgBox.exec();
    conn.connClose();}

else
    QMessageBox::critical(this,tr("ERROR::"),tr("ERRORRRRRRRR"));
}

void Note_Abs::on_pushButton_afficher_4_clicked()
{
    Widget conn;
    QSqlQueryModel *Modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery *query = new QSqlQuery(conn.mydb);
    query->prepare("SELECT * FROM Evaluation");
    query->exec();
    Modal->setQuery(*query);
    ui -> tableView->setModel(Modal);
}


void Note_Abs::on_pushButton_modifier_4_clicked()
{
    Widget conn;
    QString CNE = ui  -> texte_CNE_Note -> text();
    QString Id_matiere = ui  ->  texte_Id_Note-> text();
    QString Note = ui  ->  texte_Note-> text();
    if (!conn.connOpen()){
             qDebug() <<"Failed to open database";
             return;}

    if (!conn.connOpen()){
             qDebug() <<"Failed to open database";
             return;}

conn.connOpen();
QSqlQuery query;

query.prepare("UPDATE Evaluation SET CNE ='"+CNE+"',Id_matiere="+Id_matiere+",Note="+Note+" WHERE CNE ='"+CNE+"' AND Id_matiere="+Id_matiere+" ;");
qDebug() << query.lastQuery();


if (query.exec()){
    QMessageBox msgBox;
    msgBox.setText("L'étudiant a bien été modifier!");
    msgBox.exec();
    conn.connClose();}

else
    QMessageBox::critical(this,tr("ERROR::"),tr("ERRORRRRRRRR"));
}

void Note_Abs::on_pushButton_supprimer_4_clicked()
{
    Widget conn;
    QString CNE = ui  -> texte_CNE_Note -> text();
    QString Id_matiere = ui  ->  texte_Id_Note-> text();
    QString Note = ui  ->  texte_Note-> text();
    if (!conn.connOpen()){
             qDebug() <<"Failed to open database";
             return;}

conn.connOpen();
QSqlQuery query;



query.prepare("DELETE FROM Evaluation WHERE CNE ='"+CNE+"';");
qDebug() << query.lastQuery();


if (query.exec()){
    QMessageBox msgBox;
    msgBox.setText("The student has been deleted.");
    msgBox.exec();
    conn.connClose();}

else
    QMessageBox::critical(this,tr("ERROR::"),tr("ERRORRRRRRRR"));
}
