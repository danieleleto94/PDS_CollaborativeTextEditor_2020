#include <iostream>
#include <QDebug>

int main() {
    qDebug() << QT_VERSION_STR;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}