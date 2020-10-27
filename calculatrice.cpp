#include "calculatrice.h"
#include "ui_calculatrice.h"

Calculatrice::Calculatrice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculatrice)
{
    ui->setupUi(this);

    connect(ui->boutonEgal, SIGNAL(clicked()), this, SLOT(calculerOperation()));
}

Calculatrice::~Calculatrice()
{
    delete ui;
}

void Calculatrice::calculerOperation()
{
   double a=ui->nombre1->value();
   QString b=ui->operation->currentText();
   double c=ui->nombre2->value();
   double d;
   if (b=="+")
       d= a + c;
   if (b=="-")
       d= a - c;
   if (b=="*")
        d= a*c;
   if (b=="/")
       d=a/c;
   QString valueAsString = QString::number(d);
   ui->resultat->setText(valueAsString);
}
