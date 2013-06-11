#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

using namespace std;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString filenameKey;
    QString filenameVector;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void openInput();

    void openOutput();

    void encrypt();

    void display();
    void hide();
    void changedAlgorithm();
     void about();
    void aboutabout();
    void claerInput();
    void claerOutput();
    void update();

};


void MD5        (const QString, const QString);
void SHA1       (const QString, const QString);


QString FileToQString(QString);
QString FileToQString16(QString);
QString gen(unsigned int);
void generate(unsigned int);
char * QStringToCharStr(QString);

#endif // MAINWINDOW_H
