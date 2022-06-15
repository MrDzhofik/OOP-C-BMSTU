#include "graphWindow.h"
#include "widget.h"
#include "file.h"
graphWindow::graphWindow(QWidget *parent): QMainWindow(parent)
{
    paint=new QPushButton("Paint", this);
    setCentralWidget(paint);
    connect(paint, SIGNAL(clicked()),this,SLOT(activate()));
    resize(800,400);
}

graphWindow::~graphWindow()
{

}

void graphWindow::activate()
{
    QBarSet *soldcopies = new QBarSet("Copy number");
    QDataStream in(F.library);
    QStringList categories;
    book b;
    QString yr;
    int minyear, maxyear, maxcopy=0;
    F.library->reset();
    in>>b.auth>>b.name>>b.pub>>b.year>>b.cnum;
    minyear=b.year;
    maxyear=b.year;
    while(!in.atEnd()){
        in>>b.auth>>b.name>>b.pub>>b.year>>b.cnum;
        if(b.year>maxyear) maxyear=b.year;
        if(b.year<minyear) minyear=b.year;
    }
    int a[maxyear-minyear+1];
    for(int i=0;i<maxyear-minyear+1;i++) a[i]=0;
    F.library->reset();
    while(!in.atEnd()){
        in>>b.auth>>b.name>>b.pub>>b.year>>b.cnum;
        a[b.year-minyear]=a[b.year-minyear]+b.cnum;
    }
    for(int i=0;i<maxyear-minyear+1;i++) if(a[i]>maxcopy) maxcopy=a[i];
    for(int i=0;i<maxyear-minyear+1;i++) {
        yr.setNum(minyear+i);
        *soldcopies<<a[i];
        categories << yr;
    }
    QBarSeries *series = new QBarSeries();
    series->append(soldcopies);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Number of sold copies per year");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,maxcopy);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    setCentralWidget(chartView);
    resize(800, 400);
}
