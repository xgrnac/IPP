#include <QtWidgets/QApplication>
#include <QQuickWindow>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    QQuickWindow window;

    window.resize(1200,720);

    window.show();

    return app.exec();
}
