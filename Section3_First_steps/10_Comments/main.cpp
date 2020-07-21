/*
 * This is also
 * a comment
 */


#include <QCoreApplication>
#include <QDebug>

/*!
 * @brief main The starting point
 * @param argc The argument count
 * @param argv The arguuments
 * @return int The exit value of the application
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    //This prints things out on the screen
    qInfo() << "Hello world";


    return a.exec();
}
