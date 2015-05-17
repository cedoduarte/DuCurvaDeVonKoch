#include "DuUtil.h"
#include <QtMath>

QPointF intermediate(const QPointF &a, const QPointF &b, double t)
{
    return QPointF(a.x() * (1 - t) + b.x() * t,
                   a.y() * (1 - t) + b.y() * t);
}

QPointF rotate(const QPointF &p, const QPointF &cen, double da)
{
    double dx, dy, r, a;
    dx = p.x() - cen.x();
    dy = p.y() - cen.y();
    r = qSqrt(dx * dx + dy * dy);
    a = qAtan2(dy, dx);
    a -= da;
    return QPointF(cen.x() + r * qCos(a), cen.y() + r * qSin(a));
}
