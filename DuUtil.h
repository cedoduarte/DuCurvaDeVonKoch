#ifndef DUUTIL_H
#define DUUTIL_H

#include <QPointF>

QPointF intermediate(const QPointF &a, const QPointF &b, double t);
QPointF rotate(const QPointF &p, const QPointF &cen, double da);

#endif // DUUTIL_H
