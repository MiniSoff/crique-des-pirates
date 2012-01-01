/*
 * File:   main.cpp
 * Author: MiniSoff
 *
 * Created on 30 décembre 2011, 22:40
 */
    #include <QApplication>
    #include <QPushButton>

    int main(int argc, char *argv[])
    {
        QApplication app(argc, argv);

        QPushButton hello("Hello world!");
        hello.resize(100, 30);

        hello.show();
        return app.exec();
    }
