#ifndef RESOURCES_H
#define RESOURCES_H

#include <QWidget>


namespace Ui {
    class ReSources;
}

/** Proof of meme page widget */
class ReSources : public QWidget
{
    Q_OBJECT

public:
    explicit ReSources(QWidget *parent = 0);
    ~ReSources();

public slots:

signals:

private:
    Ui::ReSources *ui;

private slots:
    
};

#endif