#include "DuScene.h"
#include "DuDefines.h"
#include "DuUtil.h"
#include "DuLine.h"

DuScene::DuScene(QObject *parent)
    : QGraphicsScene(0, 0, X_SIZE, Y_SIZE, parent)
{
}

void DuScene::VonKoch(const QPointF &p0, const QPointF &p4, int level)
{
    if (level <= 0) {
        addItem(new DuLine(p0.x(), p0.y(), p4.x(), p4.y()));
        return;
    }
    QPointF p[5] = { p0, p0, p0, p0, p4 };
    p[1] = intermediate(p[0], p[4], 1.0 / 3.0);
    p[3] = intermediate(p[0], p[4], 2.0 / 3.0);
    p[2] = rotate(p[3], p[1], M_PI / 3.0);
    for (int i = 0; i < 4; ++i) {
        VonKoch(p[i], p[i + 1], level - 1);
    }
}

