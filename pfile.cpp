#include "pfile.h"
#include "ui_pfile.h"

pfile::pfile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pfile)
{
    ui->setupUi(this);
}

pfile::~pfile()
{
    delete ui;
}

void pfile::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}
