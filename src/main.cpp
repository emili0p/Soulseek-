#include <QApplication>
#include "ui/windows/MainWindow.h"
#include "core/connection/ConnectionManager.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    
    ConnectionManager connection;

    
    MainWindow mainWindow(&connection);
    mainWindow.show();

    return app.exec();
}

