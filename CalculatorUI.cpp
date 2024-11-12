#include "CalculatorUI.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

CalculatorUI::CalculatorUI(QWidget *parent) : QWidget(parent) {
    input1 = new QLineEdit(this);
    input2 = new QLineEdit(this);
    result = new QLineEdit(this);
    result->setReadOnly(true);

    operation = new QComboBox(this);
    operation->addItem("+");
    operation->addItem("-");
    operation->addItem("*");
    operation->addItem("/");

    QPushButton *calculateButton = new QPushButton("Calculate", this);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QHBoxLayout *inputLayout = new QHBoxLayout;
    inputLayout->addWidget(input1);
    inputLayout->addWidget(operation);
    inputLayout->addWidget(input2);
    mainLayout->addLayout(inputLayout);
    mainLayout->addWidget(calculateButton);
    mainLayout->addWidget(result);

    connect(calculateButton, &QPushButton::clicked, this, &CalculatorUI::performCalculation);
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
