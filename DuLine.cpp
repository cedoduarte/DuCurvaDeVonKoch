#include "DuLine.h"
#include <QPainter>

DuLine::DuLine(double x1, double y1, double x2, double y2,
               QGraphicsItem *parent)
    : QGraphicsItem(parent)
{
    m_x1 = x1;
    m_y1 = y1;
    m_x2 = x2;
    m_y2 = y2;
}

QRectF DuLine::boundingRect() const
{
    return QRectF();
}

void DuLine::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                   QWidget *widget)
{
    painter->drawLine(QPointF(m_x1, m_y1), QPointF(m_x2, m_y2));
    (void) option;
    (void) widget;
}

