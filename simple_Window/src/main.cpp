#include <QGuiApplication>
#include <QQuickWindow>

int main(int argc, char** argv)
{
   QGuiApplication app(argc, argv);


   QQuickWindow qw;
   qw.resize(800, 600);

   qw.show();


   return app.exec();
}