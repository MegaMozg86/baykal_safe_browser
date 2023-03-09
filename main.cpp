#include <QApplication>
#include <QWebEngineView>
#include <QPushButton>
#include <QObject>
#include <QDesktopWidget>
#include <QSettings>
#include <QUrl>

#include "pwddialog.h"
#include "optionsdialog.h"
#include "passworddialog.h"
#include "webenginepage.h"

QUrl commandLineUrlArgument()
{
    const QStringList args = QCoreApplication::arguments();
    for (const QString &arg : args.mid(1)) {
        if (!arg.startsWith(QLatin1Char('-')))
            return QUrl::fromUserInput(arg);
    }

       QSettings settings( "settings_minimal.conf", QSettings::IniFormat );

       settings.beginGroup( "Browser" );
       QString url = settings.value( "url", "https://minobrnauki.gov.ru").toString();
       settings.endGroup();
       return QUrl(url);
}

int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));



    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);


    QWebEngineView view;
    view.setContextMenuPolicy(Qt::NoContextMenu);
    //view.setWindowState(Qt::WindowFullScreen);

    view.setUrl(commandLineUrlArgument());
    view.setPage(new WebEnginePage());
   // view.load(commandLineUrlArgument());

    PasswordDialog *pd = new PasswordDialog(&app);
    pd->move(500, 20);

         QPushButton *button = new QPushButton(&view);
         const QSize BUTTON_SIZE = QSize(25, 25);
         button->setFixedSize(BUTTON_SIZE);
         button->move(10, 10);
         button->setIcon(QIcon(":/new/prefix1/gear.png"));
         button->show();

         QObject::connect(button, SIGNAL(clicked()), pd, SLOT(show()));


    view.show();
/*
     QMainWindow mainWindow;
     mainWindow.setCentralWidget(&view);
     mainWindow.setWindowState(Qt::WindowFullScreen);
     mainWindow.show();
     */
    return app.exec();
}
