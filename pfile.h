#ifndef PFILE_H
#define PFILE_H

#include <QDialog>

namespace Ui {
class pfile;
}

class pfile : public QDialog
{
    Q_OBJECT

public:
    explicit pfile(QWidget *parent = 0);
    ~pfile();
signals:
    void firstWindow();


private slots:
    void on_pushButton_clicked();

private:
    Ui::pfile *ui;
};

#endif // PFILE_H
