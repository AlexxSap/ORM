#ifndef TBASE_H
#define TBASE_H

#include <QObject>

class TBase : public QObject
{
    Q_OBJECT
public:
    explicit TBase(QObject *parent = nullptr);

private slots:
    void TestSimpleSelect();
};

#endif // TBASE_H
