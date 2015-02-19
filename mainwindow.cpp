#include "mainwindow.h"
#include <QProcess>
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model_1.resizet(4,4);
    model_2.resizet(4,4);
    model_3.resizet(4,4);
    model_4_1.resizet(4,4);
    model_5.resizet(4,4);
    model_6.resizet(4,4);
    model_7.resizet(4,4);
    model_8.resizet(4,4);
    model_10.resizet(4,4);
    model_11.resizet(4,4);

    ui->table_1->setModel(&model_1);
    ui->table_2->setModel(&model_2);
    ui->table_3->setModel(&model_3);
    ui->table_4->setModel(&model_4_1);
    ui->table_5->setModel(&model_5);
    ui->table_6->setModel(&model_6);
    ui->table_7->setModel(&model_7);
    ui->table_8->setModel(&model_8);
    ui->table_10->setModel(&model_10);
    ui->table_11->setModel(&model_11);
    about=new AboutDialog(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_addrow_1_clicked()
{
    model_1.insertRow(model_1.size());
}

void MainWindow::on_btn_remrow_1_clicked()
{
    QModelIndexList list=ui->table_1->selectionModel()->selectedRows();
    for(int i=list.size()-1;i>=0;--i){
        model_1.removeRow(list[i].row());
    }
}

void MainWindow::on_btn_addcol_1_clicked()
{
    model_1.insertColumn(model_1.at(0).size());
}

void MainWindow::on_btn_remcol_1_clicked()
{
    QModelIndexList list=ui->table_1->selectionModel()->selectedColumns();
    for(int i=list.size()-1;i>=0;--i){
        model_1.removeColumn(list[i].column());
    }
}

void MainWindow::on_btn_addrow_2_clicked()
{
    model_2.insertRow(model_2.size());
}

void MainWindow::on_btn_remrow_2_clicked()
{
    QModelIndexList list=ui->table_2->selectionModel()->selectedRows();
    for(int i=list.size()-1;i>=0;--i){
        model_2.removeRow(list[i].row());
    }
}

void MainWindow::on_btn_addcol_2_clicked()
{
    model_2.insertColumn(model_2.at(0).size());
}

void MainWindow::on_btn_remcol_2_clicked()
{
    QModelIndexList list=ui->table_2->selectionModel()->selectedColumns();
    for(int i=list.size()-1;i>=0;--i){
        model_2.removeColumn(list[i].column());
    }
}

void MainWindow::on_btn_addrow_3_clicked()
{
    model_3.insertRow(model_3.size());
}

void MainWindow::on_btn_remrow_3_clicked()
{
    QModelIndexList list=ui->table_3->selectionModel()->selectedRows();
    for(int i=list.size()-1;i>=0;--i){
        model_3.removeRow(list[i].row());
    }
}

void MainWindow::on_btn_addcol_3_clicked()
{
    model_3.insertColumn(model_3.at(0).size());
}

void MainWindow::on_btn_remcol_3_clicked()
{
    QModelIndexList list=ui->table_3->selectionModel()->selectedColumns();
    for(int i=list.size()-1;i>=0;--i){
        model_3.removeColumn(list[i].column());
    }
}

void MainWindow::on_btn_addrow_4_clicked()
{
    model_4_1.insertRow(model_4_1.size());
}

void MainWindow::on_btn_remrow_4_clicked()
{
    QModelIndexList list=ui->table_4->selectionModel()->selectedRows();
    for(int i=list.size()-1;i>=0;--i){
        model_4_1.removeRow(list[i].row());
    }
}

void MainWindow::on_btn_addcol_4_clicked()
{
    model_4_1.insertColumn(model_4_1.at(0).size());
}

void MainWindow::on_btn_remcol_4_clicked()
{
    QModelIndexList list=ui->table_4->selectionModel()->selectedColumns();
    for(int i=list.size()-1;i>=0;--i){
        model_4_1.removeColumn(list[i].column());
    }
}

void MainWindow::on_btn_addrow_5_clicked()
{
    model_5.insertRow(model_5.size());
}

void MainWindow::on_btn_remrow_5_clicked()
{
    QModelIndexList list=ui->table_5->selectionModel()->selectedRows();
    for(int i=list.size()-1;i>=0;--i){
        model_5.removeRow(list[i].row());
    }
}

void MainWindow::on_btn_addcol_5_clicked()
{
    model_5.insertColumn(model_5.at(0).size());
}

void MainWindow::on_btn_remcol_5_clicked()
{
    QModelIndexList list=ui->table_5->selectionModel()->selectedColumns();
    for(int i=list.size()-1;i>=0;--i){
        model_5.removeColumn(list[i].column());
    }
}

void MainWindow::on_btn_addrow_6_clicked()
{
    model_6.insertRow(model_6.size());
}

void MainWindow::on_btn_remrow_6_clicked()
{
    QModelIndexList list=ui->table_6->selectionModel()->selectedRows();
    for(int i=list.size()-1;i>=0;--i){
        model_6.removeRow(list[i].row());
    }
}

void MainWindow::on_btn_addcol_6_clicked()
{
    model_6.insertColumn(model_6.at(0).size());
}

void MainWindow::on_btn_remcol_6_clicked()
{
    QModelIndexList list=ui->table_6->selectionModel()->selectedColumns();
    for(int i=list.size()-1;i>=0;--i){
        model_6.removeColumn(list[i].column());
    }
}

void MainWindow::on_btn_addrow_7_clicked()
{
    model_7.insertRow(model_7.size());
}

void MainWindow::on_btn_remrow_7_clicked()
{
    QModelIndexList list=ui->table_7->selectionModel()->selectedRows();
    for(int i=list.size()-1;i>=0;--i){
        model_7.removeRow(list[i].row());
    }
}

void MainWindow::on_btn_addcol_7_clicked()
{
    model_7.insertColumn(model_7.at(0).size());
}

void MainWindow::on_btn_remcol_7_clicked()
{
    QModelIndexList list=ui->table_7->selectionModel()->selectedColumns();
    for(int i=list.size()-1;i>=0;--i){
        model_7.removeColumn(list[i].column());
    }
}

void MainWindow::on_btn_addrow_8_clicked()
{
    model_8.insertRow(model_8.size());
}

void MainWindow::on_btn_remrow_8_clicked()
{
    QModelIndexList list=ui->table_8->selectionModel()->selectedRows();
    for(int i=list.size()-1;i>=0;--i){
        model_8.removeRow(list[i].row());
    }
}

void MainWindow::on_btn_addcol_8_clicked()
{
    model_8.insertColumn(model_8.at(0).size());
}

void MainWindow::on_btn_remcol_8_clicked()
{
    QModelIndexList list=ui->table_8->selectionModel()->selectedColumns();
    for(int i=list.size()-1;i>=0;--i){
        model_8.removeColumn(list[i].column());
    }
}

void MainWindow::on_btn_addrow_10_clicked()
{
    model_10.insertRow(model_10.size());
}

void MainWindow::on_btn_remrow_10_clicked()
{
    QModelIndexList list=ui->table_10->selectionModel()->selectedRows();
    for(int i=list.size()-1;i>=0;--i){
        model_10.removeRow(list[i].row());
    }
}

void MainWindow::on_btn_addcol_10_clicked()
{
    model_10.insertColumn(model_10.at(0).size());
}

void MainWindow::on_btn_remcol_10_clicked()
{
    QModelIndexList list=ui->table_10->selectionModel()->selectedColumns();
    for(int i=list.size()-1;i>=0;--i){
        model_10.removeColumn(list[i].column());
    }
}

void MainWindow::on_btn_addrow_11_clicked()
{
    model_11.insertRow(model_11.size());
}

void MainWindow::on_btn_remrow_11_clicked()
{
    QModelIndexList list=ui->table_11->selectionModel()->selectedRows();
    for(int i=list.size()-1;i>=0;--i){
        model_11.removeRow(list[i].row());
    }
}

void MainWindow::on_btn_addcol_11_clicked()
{
    model_11.insertColumn(model_11.at(0).size());
}

void MainWindow::on_btn_remcol_11_clicked()
{
    QModelIndexList list=ui->table_11->selectionModel()->selectedColumns();
    for(int i=list.size()-1;i>=0;--i){
        model_11.removeColumn(list[i].column());
    }
}

void MainWindow::on_calc_1_clicked()
{
    QString tmp; QTextStream tstr(&tmp);
    res_t res=maximin(model_1,tstr);
    ui->res_1->setText(QString::number(res.value));
    ui->str_1_1->setText("A"+QString::number(res.a));
    ui->str_1_2->setText("B"+QString::number(res.b));
    ui->textBrowser_1->setPlainText(tmp);
}

void MainWindow::on_calc_2_clicked()
{
    QString tmp; QTextStream tstr(&tmp);
    res_t res=minimax(model_2,tstr);
    ui->res_2->setText(QString::number(res.value));
    ui->str_2_1->setText("A"+QString::number(res.a));
    ui->str_2_2->setText("B"+QString::number(res.b));
    ui->textBrowser_2->setPlainText(tmp);
}

void MainWindow::on_calc_5_clicked()
{
    QString tmp; QTextStream tstr(&tmp);
    res_t res=maximax_crit(model_5,tstr);
    ui->res_5->setText(QString::number(res.value));
    ui->str_5->setText("A"+QString::number(res.a));
    ui->textBrowser_5->setPlainText(tmp);
}

void MainWindow::on_calc_6_clicked()
{
    QString tmp; QTextStream tstr(&tmp);
    res_t res=Wald_crit(model_6,tstr);
    ui->res_6->setText(QString::number(res.value));
    ui->str_6->setText("A"+QString::number(res.a));
    ui->textBrowser_6->setPlainText(tmp);
}

void MainWindow::on_calc_7_clicked()
{
    QString tmp; QTextStream tstr(&tmp);
    res_t res=Savidge_crit(model_7,tstr);
    ui->res_7->setText(QString::number(res.value));
    ui->str_7->setText("A"+QString::number(res.a));
    ui->textBrowser_7->setPlainText(tmp);
}

void MainWindow::on_calc_8_clicked()
{
    QString tmp; QTextStream tstr(&tmp);
    double p=ui->doubleSpinBox->value();
    res_t res=Gurvice_crit(model_8,p,tstr);
    ui->res_8->setText(QString::number(res.value));
    ui->str_8->setText("A"+QString::number(res.a));
    ui->textBrowser_8->setPlainText(tmp);
}

void MainWindow::on_calc_3_clicked()
{
    QString tmp; QTextStream tstr(&tmp);
    ui->res_3->setText(check_sedl(model_3,tstr)?"Данная модель - модель игры с седловой точкой."
                                         :"Данная модель - не модель игры с седловой точкой.");
    ui->textBrowser_3->setPlainText(tmp);
}

void MainWindow::on_calc_4_clicked()
{
    ui->table_4_2->setModel(0);
    winm_to_riskm(model_4_1,model_4_2);
    ui->table_4_2->setModel(&model_4_2);
}

void MainWindow::on_calc_9_clicked()
{
    bool ok;
    double S,s,U0,Umax,p,v;
    p=ui->lineEdit_2->text().toDouble(&ok);
    if(!ok)
        return;
    S=ui->lineEdit->text().toDouble(&ok);
    if(!ok)
        return;
    Umax=ui->lineEdit_3->text().toDouble(&ok);
    if(!ok)
        return;
    s=ui->lineEdit_4->text().toDouble(&ok);
    if(!ok)
        return;
    U0=ui->lineEdit_5->text().toDouble(&ok);
    if(!ok)
        return;
    v=ui->lineEdit_2->text().toDouble(&ok);
    if(!ok)
        return;
    ui->res_9->setText(QString("Значение функции полезности U(%1)=%2*U(%3)-(1-%2)*U(%4)=%5").arg(v).arg(p).arg(S).arg(s).arg(polezn(U0,Umax,p)));
}

void MainWindow::on_btn_rnd_1_clicked()
{
    ui->table_1->setModel(0);
    model_1.ranomize(1,100);
    ui->table_1->setModel(&model_1);
}

void MainWindow::on_btn_rnd_2_clicked()
{
    ui->table_2->setModel(0);
    model_2.ranomize(1,100);
    ui->table_2->setModel(&model_2);
}

void MainWindow::on_btn_rnd_3_clicked()
{
    ui->table_3->setModel(0);
    model_3.ranomize(1,100);
    ui->table_3->setModel(&model_3);
}

void MainWindow::on_btn_rnd_4_clicked()
{
    ui->table_4->setModel(0);
    model_4_1.ranomize(1,100);
    ui->table_4->setModel(&model_4_1);
}

void MainWindow::on_btn_rnd_5_clicked()
{
    ui->table_5->setModel(0);
    model_5.ranomize(1,100);
    ui->table_5->setModel(&model_5);
}

void MainWindow::on_btn_rnd_6_clicked()
{
    ui->table_6->setModel(0);
    model_6.ranomize(1,100);
    ui->table_6->setModel(&model_6);
}

void MainWindow::on_btn_rnd_7_clicked()
{
    ui->table_7->setModel(0);
    model_7.ranomize(1,100);
    ui->table_7->setModel(&model_7);
}

void MainWindow::on_btn_rnd_8_clicked()
{
    ui->table_8->setModel(0);
    model_8.ranomize(1,100);
    ui->table_8->setModel(&model_8);
}

void MainWindow::on_btn_rnd_10_clicked()
{
    ui->table_10->setModel(0);
    model_10.ranomize(1,100);
    ui->table_10->setModel(&model_10);
}

void MainWindow::on_btn_rnd_11_clicked()
{
    ui->table_11->setModel(0);
    model_11.ranomize(1,100);
    ui->table_11->setModel(&model_11);
}

void MainWindow::on_calc_10_clicked()
{
    QString tmp; QTextStream tstr(&tmp);
    res_t res=maximin(model_10,tstr);
    ui->res_10_1->setText(QString::number(res.value));
    ui->str_10_1->setText("A"+QString::number(res.a));
    ui->str_10_2->setText("B"+QString::number(res.b));
    res=minimax(model_10,tstr);
    ui->res_10_2->setText(QString::number(res.value));
    ui->str_10_3->setText("A"+QString::number(res.a));
    ui->str_10_4->setText("B"+QString::number(res.b));
    ui->textBrowser_10->setPlainText(tmp);
}

void MainWindow::on_calc_11_clicked()
{
    QString tmp; QTextStream tstr(&tmp);
    res_t res=maximax_crit(model_11,tstr);
    ui->res_11_1->setText(QString::number(res.value));
    ui->str_11_1->setText("A"+QString::number(res.a));
    res=Wald_crit(model_11,tstr);
    ui->res_11_2->setText(QString::number(res.value));
    ui->str_11_2->setText("A"+QString::number(res.a));
    res=Savidge_crit(model_11,tstr);
    ui->res_11_3->setText(QString::number(res.value));
    ui->str_11_3->setText("A"+QString::number(res.a));
    double p=ui->doubleSpinBox_2->value();
    res=Gurvice_crit(model_11,p,tstr);
    ui->res_11_4->setText(QString::number(res.value));
    ui->str_11_4->setText("A"+QString::number(res.a));
    ui->textBrowser_11->setPlainText(tmp);
}

void MainWindow::on_action_triggered()
{
    close();
}

void MainWindow::on_action_2_triggered()
{
    QProcess *process = new QProcess;
    QStringList args;
    args << QLatin1String("-collectionFile")
        << (QApplication::applicationDirPath()+ QLatin1String("/doc/GameTheory.qhc"))
        << QLatin1String("-enableRemoteControl");
    process->start(QLatin1String("assistant"), args);
}

void MainWindow::on_action_3_triggered()
{
    about->show();
}

void MainWindow::on_action_5_triggered()
{
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_action_6_triggered()
{
    ui->tabWidget->setCurrentIndex(1);
}
void MainWindow::on_action_7_triggered()
{
    ui->tabWidget->setCurrentIndex(2);
}
void MainWindow::on_action_8_triggered()
{
    ui->tabWidget->setCurrentIndex(3);
}
void MainWindow::on_action_9_triggered()
{
    ui->tabWidget->setCurrentIndex(4);
}
void MainWindow::on_action_10_triggered()
{
    ui->tabWidget->setCurrentIndex(5);
}
void MainWindow::on_action_11_triggered()
{
    ui->tabWidget->setCurrentIndex(6);
}
void MainWindow::on_action_12_triggered()
{
    ui->tabWidget->setCurrentIndex(7);
}
void MainWindow::on_action_13_triggered()
{
    ui->tabWidget->setCurrentIndex(8);
}
void MainWindow::on_action_14_triggered()
{
    ui->tabWidget->setCurrentIndex(9);
}
void MainWindow::on_action_15_triggered()
{
    ui->tabWidget->setCurrentIndex(10);
}
