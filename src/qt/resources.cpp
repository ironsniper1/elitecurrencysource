#include "resources.h"
#include "ui_resources.h"



ReSources::ReSources(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReSources)
{
    ui->setupUi(this);

    
}

ReSources::~ReSources()
{
    delete ui;
}
