#include <QApplication>
#include <QtWidgets>
#include "calculatrice.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Calculatrice fenetre;
    fenetre.show();

    return app.exec();
}
