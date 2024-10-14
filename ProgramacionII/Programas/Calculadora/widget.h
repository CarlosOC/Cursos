#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QDebug"
#include "QFile"
#include "QDir"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void BotonNumericoClickeado();  // Slot para manejar los botones
    void BotonLimpiar();
    void OperacionClickeada();
    void IgualClickeado();
    void initStylesheet();
private:
    Ui::Widget *ui;
    QString     EntradaActual;          // String para almacenar la entrada del usuario
    double      ValorAlmacenado;       // Valor almacenado (primer número)
    QString     OperacionActual;     // Operador seleccionado (+, -, *, /)
};
#endif // WIDGET_H
