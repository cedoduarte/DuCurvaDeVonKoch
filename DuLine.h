#ifndef DULINE_H
#define DULINE_H

#include <QGraphicsItem>

class DuLine : public QGraphicsItem
{
public:
    DuLine(double x1, double y1, double x2, double y2,
           QGraphicsItem *parent = nullptr);
protected:
    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);
private:
    double m_x1;
    double m_y1;
    double m_x2;
    double m_y2;
};

#endif // DULINE_H
