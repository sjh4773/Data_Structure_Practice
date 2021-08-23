#include "QtWidgetsMy.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgetsMy w;
    w.show();
    return a.exec();
}
