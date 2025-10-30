#include "myrect.h"
#include "bullet.h"
#include "enemy.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDebug>
#include <QKeyEvent>


QSet<int> key;
int countRight = 0;
int countLeft = 0;


Myrect::Myrect(QGraphicsItem *parent): QGraphicsPixmapItem(parent){}

void Myrect::keyReleaseEvent(QKeyEvent *event) {
 key.remove(event->key());
}

void Myrect::keyPressEvent(QKeyEvent *event) {
 key.insert(event->key());
 if (key.contains(Qt::Key_Left)){
     if (key.contains(Qt::Key_Space)){
         countLeft++;
         if(countLeft >5){
             Bullet *bullet = new Bullet();
             bullet->setPos(x() + 10, y());
             scene()->addItem(bullet);
             countLeft = 0;
         }
     }
     if (x()>20){
         setPos(x()-10, y());
     }
 }
 else if (key.contains(Qt::Key_Right)){
     if (key.contains(Qt::Key_Space)){
         countRight++;
         if(countRight > 5){
             Bullet *bullet = new Bullet();
             bullet->setPos(x() + 10, y());
             scene()->addItem(bullet);
             countRight = 0;
         }
     }
     if (x()>0){

             setPos(x()+10, y());
        }
 }
 else if (key.contains(Qt::Key_Space)){
     Bullet *bullet = new Bullet();
     bullet->setPos(x() + 10, y());
     scene()->addItem(bullet);
 }
}
void Myrect::createEnemy()
{
 Enemy *enemy = new Enemy();
 scene()->addItem(enemy);
}
