#ifndef APPMAIN_H
#define APPMAIN_H

#include <QObject>

class AppMain : public QObject
{
    Q_OBJECT
public:
    explicit AppMain(QObject *parent = nullptr);

signals:

public slots:
};

#endif // APPMAIN_H