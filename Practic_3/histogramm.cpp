#include "histogramm.h"
#include "ui_histogramm.h"
#include <QtCharts>
#include "Structure.h"
#include <cstdlib>
#include <ctime>

using namespace QtCharts;

Histogramm::Histogramm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Histogramm)
{
    ui->setupUi(this);
    setWindowTitle("Базар");
}

Histogramm::~Histogramm()
{
    delete ui;
}

void Histogramm::on_HistogrammButton_clicked(bool checked)
{
    Product rec;
    QBarSeries *products = new QBarSeries();
    QStringList categories;
    srand(unsigned(time(0)));
    float number = rand() % 10;
    float max = 0;
    QFile fil("C:\\Users\\djafa\\source\\repos\\OOP-C-BMSTU\\Practic_3\\Market.dat");
    fil.open(QIODevice::ReadOnly);
    QDataStream in(&fil);
    while (!in.atEnd()) {
        qDebug("Add");
        in>>rec.name>>rec.provider>>rec.quantity>>rec.price;
        if (rec.price > max){
            max = rec.price;
        }
        QBarSet *temp = new QBarSet(rec.name);
        *temp << rec.price;
        products->append(temp);
    }
    QChart *chart = new QChart();
    chart->addSeries(products);
    chart->setTitle("Продукты на базе");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->createDefaultAxes();
    QList<QBarSet *> sets = products->barSets();
    float currentHue = number;
    for(int i = 0; i < sets.size(); ++i)
    {
      QColor col = QColor::fromHslF(currentHue, 0.7, 0.5);
      currentHue += 0.618033988749895f;
      currentHue = std::fmod(currentHue, 1.0f);
      sets[i]->setColor(col);
    }
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setChart(chart);
    chartView->resize(594, 420);
//    chartView->show();
    ui->ChartLayout->addWidget(chartView);
}
