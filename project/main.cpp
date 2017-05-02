#include <QtGui/QApplication>
#include <QTextCodec>
#include "window.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    QFont font("unifont");
    a.setFont(font);
    Window w;
    w.showFullScreen();;
    return a.exec();
}
