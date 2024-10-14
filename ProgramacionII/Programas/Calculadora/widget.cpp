#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("Calculadora");
    // Inicializamos la Hoja de Stylo (CSS)
    initStylesheet();
    // Numeros
    connect(ui->Boton_0, &QPushButton::clicked, this, &Widget::BotonNumericoClickeado);
    connect(ui->Boton_1, &QPushButton::clicked, this, &Widget::BotonNumericoClickeado);
    connect(ui->Boton_2, &QPushButton::clicked, this, &Widget::BotonNumericoClickeado);
    connect(ui->Boton_3, &QPushButton::clicked, this, &Widget::BotonNumericoClickeado);
    connect(ui->Boton_4, &QPushButton::clicked, this, &Widget::BotonNumericoClickeado);
    connect(ui->Boton_5, &QPushButton::clicked, this, &Widget::BotonNumericoClickeado);
    connect(ui->Boton_6, &QPushButton::clicked, this, &Widget::BotonNumericoClickeado);
    connect(ui->Boton_7, &QPushButton::clicked, this, &Widget::BotonNumericoClickeado);
    connect(ui->Boton_8, &QPushButton::clicked, this, &Widget::BotonNumericoClickeado);
    connect(ui->Boton_9, &QPushButton::clicked, this, &Widget::BotonNumericoClickeado);
   //Limpiar Pantalla
    connect(ui->Boton_C,&QPushButton::clicked,this,&Widget::BotonLimpiar);
    //Operaciones
    connect(ui->Boton_Suma,           &QPushButton::clicked,this,&Widget::OperacionClickeada);
    connect(ui->Boton_Resta,          &QPushButton::clicked,this,&Widget::OperacionClickeada);
    connect(ui->Boton_Division,       &QPushButton::clicked,this,&Widget::OperacionClickeada);
    connect(ui->Boton_Multiplicacion, &QPushButton::clicked,this,&Widget::OperacionClickeada);
    connect(ui->Boton_Signo,          &QPushButton::clicked,this,&Widget::OperacionClickeada);
    connect(ui->Boton_Igual,          &QPushButton::clicked,this,&Widget::IgualClickeado);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::BotonNumericoClickeado()
{
    // Obtener el botón que fue presionado
    QPushButton *Boton = qobject_cast<QPushButton*>(sender());   
    if (Boton)
    {
        // Obtener el texto del botón (número o símbolo)
        QString BotonTexto = Boton->text();
        // Concatenar al input actual
        EntradaActual += BotonTexto;
        // Mostrar el valor en el display
        ui->Display->setText(EntradaActual);
    }
}
void Widget::BotonLimpiar()
{
    EntradaActual = "";
    ValorAlmacenado = 0;
    OperacionActual = "";
    ui->Display->setText("0");  // Restablecer el display
}
void Widget::OperacionClickeada()
{
    QPushButton *Boton = qobject_cast<QPushButton*>(sender());
    if (Boton)
    {
        // Almacenar el valor actual como `ValorAlmacenado`
        ValorAlmacenado = EntradaActual.toDouble();
        EntradaActual = "";  // Limpiar la entrada para el segundo número
        // Almacenar el operador seleccionado
        OperacionActual = Boton->text();
        qDebug()<<"OperacionActual: "<<Boton->text();
    }
}

void Widget::IgualClickeado()
{
    double SegundoValor = EntradaActual.toDouble();  // Obtener el segundo número
    // Realizar la operación en base al operador seleccionado
    char auxOperacion;
    if(OperacionActual=="+/-") auxOperacion = 's';
        else auxOperacion=OperacionActual.toStdString()[0];

    switch (auxOperacion)
    {
    case '+':
        ValorAlmacenado += SegundoValor;
        break;
    case '-':
        ValorAlmacenado -= SegundoValor;
        break;
    case '*':
        ValorAlmacenado *= SegundoValor;
        break;
    case 's':
        ValorAlmacenado *= (-1);
        break;
    case '/':
        if (SegundoValor != 0) {
            ValorAlmacenado /= SegundoValor;
        } else {
             ui->Display->setText("Error: Div 0");
            return;
        }
        break;
    }
    // Mostrar el resultado
    ui->Display->setText(QString::number(ValorAlmacenado));
    // Limpiar la entrada actual y el operador
    EntradaActual = QString::number(ValorAlmacenado);
    OperacionActual = "";
}

void Widget::initStylesheet()
{
    QFile style(":/src/stylesheet/stylesheet_03.css");
    bool styleOK = style.open(QFile::ReadOnly);
    qDebug()<<"Apertura de Archivo: "<<styleOK;
    QString stringStyle = QString::fromLatin1(style.readAll());
    this->setStyleSheet(stringStyle);

}

