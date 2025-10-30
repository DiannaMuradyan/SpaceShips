#ifndef MYRECT_H
#define MYRECT_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>


class Myrect:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT

public:
    Myrect(QGraphicsItem *parent=nullptr);
    void keyReleaseEvent(QKeyEvent *event);
    void keyPressEvent(QKeyEvent *event);
public slots:
    void createEnemy();
};

#endif // MYRECT_H




