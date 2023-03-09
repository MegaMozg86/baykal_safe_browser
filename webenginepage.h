#ifndef WEBENGINEPAGE_H
#define WEBENGINEPAGE_H

#include <QtWebEngineWidgets>
#include <QStringList>
#include <QDebug>

class QWebEngineView;
class QApplication;

class WebEnginePage: public QWebEnginePage{
    Q_OBJECT
public:
    QStringList urls;
    using QWebEnginePage::QWebEnginePage;

    WebEnginePage()
    {

        urls << "https://minobrnauki.gov.ru"
             << "https://obrnadzor.gov.ru"
             << "https://fipi.ru"
             << "http://rustest.ru"
             << "https://nic.gov.ru"
             << "https://citis.ru"
             << "http://nica.ru"
             << "https://fioco.ru"
             <<  "http://gov.ru"
             << "http://government.ru"
             << "https://edu.ru"
             << "https://edu.gov.ru";
    }
protected:
    QWebEnginePage *createWindow(WebWindowType ){
        WebEnginePage *page = new WebEnginePage(this);
        connect(page, &QWebEnginePage::urlChanged, this, &WebEnginePage::onUrlChanged);
        return page;
    }
private Q_SLOTS:
    void onUrlChanged(const QUrl & url){
        bool ok = false;
        if(WebEnginePage *page = qobject_cast<WebEnginePage *>(sender())){
            for(int i = 0; i < urls.count(); ++i)
            {
                if(url.url().contains(urls[i]))
                    ok = true;
            }

            if(ok)
            {
                qDebug() << "Good Url";
                setUrl(url);
            }
            else {
                qDebug() << "Bad Url";
                setUrl(urls[0]);
            }
            page->deleteLater();
        }
    }
};

#endif // WEBENGINEPAGE_H
