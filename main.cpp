#include <QApplication>
#include "CalculatorUI.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    CalculatorUI calculatorUI;
    calculatorUI.show();
    return app.exec();
}
