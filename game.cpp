#include "game.h"
#include "enemy.h"
#include "score.h"
#include <QTimer>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QImage>
#include <QApplication>


Game::Game()
{
    // create a scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,900,700);
    setBackgroundBrush(QBrush(QImage(":/images/background.jpg")));

    // create an item
    rect = new Myrect();
    rect->setPos(900,700);

    // add the item to the scene
    scene->addItem(rect);

    // create score
    score = new Score();
    scene->addItem(score);

    // create life
    life = new Health();
    scene->addItem(life);

    // make rect focusable
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    // create Enemies
    QTimer *timer = new QTimer();
    QTimer::connect(timer, SIGNAL(timeout()), rect, SLOT(createEnemy()));
    timer->start(1800);

    //QGraphicsView *view = new QGraphicsView();
    setScene(scene);

    //setFixedSize(800,800);
    //setSceneRect(0,0,800,800);

    //playSound("backgroundMusic.mp3");
    show();
    playSound("backgroundMusic.mp3");

}

void Game::playSound(QString sound) {
    player = new QMediaPlayer();
    audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));
    player->setSource(QUrl::fromLocalFile("C:/Users/Dianna/OneDrive/Документы/spaceships/spaceships/sounds" + sound));
    audioOutput->setVolume(0.1);
    player->play();
}
