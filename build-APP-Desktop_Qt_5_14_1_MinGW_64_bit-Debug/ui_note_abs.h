/********************************************************************************
** Form generated from reading UI file 'note_abs.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_ABS_H
#define UI_NOTE_ABS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Note_Abs
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QLineEdit *texte_CNE_Abs;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_10;
    QLineEdit *texte_Id_Abs;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QLineEdit *texte_Nbr_Abs;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_ajouter_3;
    QPushButton *pushButton_modifier_3;
    QPushButton *pushButton_supprimer_3;
    QPushButton *pushButton_afficher_3;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QLineEdit *texte_CNE_Note;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QLineEdit *texte_Id_Note;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_15;
    QLineEdit *texte_Note;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *pushButton_ajouter_4;
    QPushButton *pushButton_modifier_4;
    QPushButton *pushButton_supprimer_4;
    QPushButton *pushButton_afficher_4;
    QTableView *tableView;

    void setupUi(QDialog *Note_Abs)
    {
        if (Note_Abs->objectName().isEmpty())
            Note_Abs->setObjectName(QString::fromUtf8("Note_Abs"));
        Note_Abs->resize(1047, 383);
        tabWidget = new QTabWidget(Note_Abs);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 481, 321));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 441, 181));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_12->addWidget(label_9);

        texte_CNE_Abs = new QLineEdit(groupBox_3);
        texte_CNE_Abs->setObjectName(QString::fromUtf8("texte_CNE_Abs"));

        horizontalLayout_12->addWidget(texte_CNE_Abs);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_13->addWidget(label_10);

        texte_Id_Abs = new QLineEdit(groupBox_3);
        texte_Id_Abs->setObjectName(QString::fromUtf8("texte_Id_Abs"));

        horizontalLayout_13->addWidget(texte_Id_Abs);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_14->addWidget(label_11);

        texte_Nbr_Abs = new QLineEdit(groupBox_3);
        texte_Nbr_Abs->setObjectName(QString::fromUtf8("texte_Nbr_Abs"));

        horizontalLayout_14->addWidget(texte_Nbr_Abs);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayoutWidget_3 = new QWidget(tab);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 200, 441, 71));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        pushButton_ajouter_3 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_ajouter_3->setObjectName(QString::fromUtf8("pushButton_ajouter_3"));

        horizontalLayout_11->addWidget(pushButton_ajouter_3);

        pushButton_modifier_3 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_modifier_3->setObjectName(QString::fromUtf8("pushButton_modifier_3"));

        horizontalLayout_11->addWidget(pushButton_modifier_3);

        pushButton_supprimer_3 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_supprimer_3->setObjectName(QString::fromUtf8("pushButton_supprimer_3"));

        horizontalLayout_11->addWidget(pushButton_supprimer_3);

        pushButton_afficher_3 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_afficher_3->setObjectName(QString::fromUtf8("pushButton_afficher_3"));

        horizontalLayout_11->addWidget(pushButton_afficher_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 441, 181));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_16->addWidget(label_13);

        texte_CNE_Note = new QLineEdit(groupBox_4);
        texte_CNE_Note->setObjectName(QString::fromUtf8("texte_CNE_Note"));

        horizontalLayout_16->addWidget(texte_CNE_Note);


        verticalLayout_4->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_17->addWidget(label_14);

        texte_Id_Note = new QLineEdit(groupBox_4);
        texte_Id_Note->setObjectName(QString::fromUtf8("texte_Id_Note"));

        horizontalLayout_17->addWidget(texte_Id_Note);


        verticalLayout_4->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_18->addWidget(label_15);

        texte_Note = new QLineEdit(groupBox_4);
        texte_Note->setObjectName(QString::fromUtf8("texte_Note"));

        horizontalLayout_18->addWidget(texte_Note);


        verticalLayout_4->addLayout(horizontalLayout_18);

        horizontalLayoutWidget_4 = new QWidget(tab_2);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 200, 441, 71));
        horizontalLayout_20 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        pushButton_ajouter_4 = new QPushButton(horizontalLayoutWidget_4);
        pushButton_ajouter_4->setObjectName(QString::fromUtf8("pushButton_ajouter_4"));

        horizontalLayout_20->addWidget(pushButton_ajouter_4);

        pushButton_modifier_4 = new QPushButton(horizontalLayoutWidget_4);
        pushButton_modifier_4->setObjectName(QString::fromUtf8("pushButton_modifier_4"));

        horizontalLayout_20->addWidget(pushButton_modifier_4);

        pushButton_supprimer_4 = new QPushButton(horizontalLayoutWidget_4);
        pushButton_supprimer_4->setObjectName(QString::fromUtf8("pushButton_supprimer_4"));

        horizontalLayout_20->addWidget(pushButton_supprimer_4);

        pushButton_afficher_4 = new QPushButton(horizontalLayoutWidget_4);
        pushButton_afficher_4->setObjectName(QString::fromUtf8("pushButton_afficher_4"));

        horizontalLayout_20->addWidget(pushButton_afficher_4);

        tabWidget->addTab(tab_2, QString());
        tableView = new QTableView(Note_Abs);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(525, 51, 501, 291));

        retranslateUi(Note_Abs);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Note_Abs);
    } // setupUi

    void retranslateUi(QDialog *Note_Abs)
    {
        Note_Abs->setWindowTitle(QCoreApplication::translate("Note_Abs", "Dialog", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Note_Abs", "Cordonn\303\251es", nullptr));
        label_9->setText(QCoreApplication::translate("Note_Abs", "CNE", nullptr));
        texte_CNE_Abs->setInputMask(QString());
        texte_CNE_Abs->setText(QString());
        label_10->setText(QCoreApplication::translate("Note_Abs", "Id de la mati\303\250re", nullptr));
        label_11->setText(QCoreApplication::translate("Note_Abs", "Nombres d'heures", nullptr));
        pushButton_ajouter_3->setText(QCoreApplication::translate("Note_Abs", "Ajouter", nullptr));
        pushButton_modifier_3->setText(QCoreApplication::translate("Note_Abs", "Modifier", nullptr));
        pushButton_supprimer_3->setText(QCoreApplication::translate("Note_Abs", "Supprimer", nullptr));
        pushButton_afficher_3->setText(QCoreApplication::translate("Note_Abs", "Afficher ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Note_Abs", "Abscence", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Note_Abs", "Cordonn\303\251es", nullptr));
        label_13->setText(QCoreApplication::translate("Note_Abs", "CNE", nullptr));
        texte_CNE_Note->setInputMask(QString());
        texte_CNE_Note->setText(QString());
        label_14->setText(QCoreApplication::translate("Note_Abs", "Id de la mati\303\250re", nullptr));
        label_15->setText(QCoreApplication::translate("Note_Abs", "La note", nullptr));
        pushButton_ajouter_4->setText(QCoreApplication::translate("Note_Abs", "Ajouter", nullptr));
        pushButton_modifier_4->setText(QCoreApplication::translate("Note_Abs", "Modifier", nullptr));
        pushButton_supprimer_4->setText(QCoreApplication::translate("Note_Abs", "Supprimer", nullptr));
        pushButton_afficher_4->setText(QCoreApplication::translate("Note_Abs", "Afficher ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Note_Abs", "Evaluation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Note_Abs: public Ui_Note_Abs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_ABS_H
