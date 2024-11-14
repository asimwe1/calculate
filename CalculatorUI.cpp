#include "CalculatorUI.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

CalculatorUI::CalculatorUI(QWidget *parent) : QWidget(parent) {

    // int one = 1;


    input1 = new QLineEdit(this);
    input2 = new QLineEdit(this);
    result = new QLineEdit(this);
    result->setReadOnly(true);

    operation = new QComboBox(this);
    operation->addItem("+");
    operation->addItem("-");
    operation->addItem("*");
    operation->addItem("/");


    QPushButton *key1 = new QPushButton("1", this);
    QPushButton *key2 = new QPushButton("2", this);
    QPushButton *key3 = new QPushButton("3", this);
    QPushButton *key4 = new QPushButton("4", this);
    QPushButton *key5 = new QPushButton("5", this);
    QPushButton *key6 = new QPushButton("6", this);
    QPushButton *key7 = new QPushButton("7", this);
    QPushButton *key8 = new QPushButton("8", this);
    QPushButton *key9 = new QPushButton("9", this);
    QPushButton *key0 = new QPushButton("0", this);

    QPushButton *calculateButton = new QPushButton("Calculate", this);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QHBoxLayout *inputLayout = new QHBoxLayout;
    QHBoxLayout *firstLine = new QHBoxLayout;
    QHBoxLayout *secondLine= new QHBoxLayout;
    QHBoxLayout *lastLine = new QHBoxLayout;
    QHBoxLayout *button0 = new QHBoxLayout;
    inputLayout->addWidget(input1);

    inputLayout->addWidget(operation);
    inputLayout->addWidget(input2);
    mainLayout->addLayout(inputLayout);
    mainLayout->addWidget(calculateButton);
    mainLayout->addWidget(result);


    firstLine->addWidget(key1);
    firstLine->addWidget(key2);
    firstLine->addWidget(key3);
    secondLine->addWidget(key4);
    secondLine->addWidget(key5);
    secondLine->addWidget(key6);
    lastLine->addWidget(key7);
    lastLine->addWidget(key8);
    lastLine->addWidget(key9);
    button0->addWidget(key0);
    mainLayout->addLayout(lastLine);
    mainLayout->addLayout(secondLine);
    mainLayout->addLayout(firstLine);
    mainLayout->addLayout(button0);

    connect(calculateButton, &QPushButton::clicked, this, &CalculatorUI::performCalculation);
    connect(key1, &QPushButton::clicked, this, &CalculatorUI::one);
    connect(key2, &QPushButton::clicked, this, &CalculatorUI::two);
    connect(key3, &QPushButton::clicked, this, &CalculatorUI::three);
    connect(key4, &QPushButton::clicked, this, &CalculatorUI::four);
    connect(key5, &QPushButton::clicked, this, &CalculatorUI::five);
    connect(key6, &QPushButton::clicked, this, &CalculatorUI::six);
    connect(key7, &QPushButton::clicked, this, &CalculatorUI::seven);
    connect(key8, &QPushButton::clicked, this, &CalculatorUI::eight);
    connect(key9, &QPushButton::clicked, this, &CalculatorUI::nine);
    connect(key0, &QPushButton::clicked, this, &CalculatorUI::zero);
}

void CalculatorUI::performCalculation() {
    double num1 = input1->text().toDouble();
    double num2 = input2->text().toDouble();
    double res = 0;
    Calculator *calculator = nullptr;

    if (operation->currentText() == "+") calculator = new Addition();
    else if (operation->currentText() == "-") calculator = new Subtraction();
    else if (operation->currentText() == "*") calculator = new Multiplication();
    else if (operation->currentText() == "/") calculator = new Division();

    if (calculator) {
        res = calculator->calculate(num1, num2);
        delete calculator;
    }

    result->setText(QString::number(res));
}

void CalculatorUI::one() {
    int num =1;
    input1->setText(QString::number(num));
}
void CalculatorUI::two() {
    int num = 2;
    input1->setText(QString::number(num));
}
void CalculatorUI::three(){
    int num = 3;
    input1->setText(QString::number(num));
}
void CalculatorUI::four() {
    int num =4;
    input1->setText(QString::number(num));
}
void CalculatorUI::five() {
    int num = 5;
    input1->setText(QString::number(num));
}
void CalculatorUI::six(){
    int num = 6;
    input1->setText(QString::number(num));
}
void CalculatorUI::seven() {
    int num = 7;
    input1->setText(QString::number(num));
}
void CalculatorUI::eight() {
    int num = 8;
    input1->setText(QString::number(num));
}
void CalculatorUI::nine(){
    int num = 9;
    input1->setText(QString::number(num));
}
void CalculatorUI::zero() {
    int num =0;
    input1->setText(QString::number(num));
}
