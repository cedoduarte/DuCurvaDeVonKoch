#ifndef DUSCENE_H
#define DUSCENE_H

#include <QGraphicsScene>

class DuScene : public QGraphicsScene
{
public:
    DuScene(QObject *parent = nullptr);
    void VonKoch(const QPointF &p0, const QPointF &p4, int level);
};

#endif // DUSCENE_H
