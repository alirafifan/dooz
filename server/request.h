

#include <QMainWindow>
#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkReply>
#include <QNetworkAccessManager>

class request : public QMainWindow
{
    Q_OBJECT

public:
    request(QWidget *parent = nullptr);
    ~request();
    QString  apireply(QString );
private:
    QNetworkAccessManager m_manager;
    QNetworkRequest request1;
    QUrl url;
public slots:
    void b (QJsonObject);
signals:
    void a(QJsonObject);
};

