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
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
    void nine();
    void zero();

    
private:
    QLineEdit *input1;
    QLineEdit *input2;
    QComboBox *operation;
    QLineEdit *result;


};

#endif // CALCULATORUI_H
