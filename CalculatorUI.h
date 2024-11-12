#ifndef CALCULATORUI_H
#define CALCULATORUI_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QComboBox>

class CalculatorUI: public QWidget{
    Q_OBJECT
    
public:
    CalculatorUI(QWidget *parent = nullptr);
    
private slots:
    void performCalculation();
    
private:
    QLineEdit *input1;
    QLineEdit *input2;
    QComboBox *operation;
    QLineEdit *result;
};

#endif // CALCULATORUI_H
