#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "methods.h"
#include "aboutdialog.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_addrow_1_clicked();

    void on_btn_remrow_1_clicked();

    void on_btn_addcol_1_clicked();

    void on_btn_remcol_1_clicked();


    void on_btn_addrow_2_clicked();

    void on_btn_remrow_2_clicked();

    void on_btn_addcol_2_clicked();

    void on_btn_remcol_2_clicked();

    void on_btn_addrow_3_clicked();

    void on_btn_remrow_3_clicked();

    void on_btn_addcol_3_clicked();

    void on_btn_remcol_3_clicked();

    void on_btn_addrow_4_clicked();

    void on_btn_remrow_4_clicked();

    void on_btn_addcol_4_clicked();

    void on_btn_remcol_4_clicked();

    void on_btn_addrow_5_clicked();

    void on_btn_remrow_5_clicked();

    void on_btn_addcol_5_clicked();

    void on_btn_remcol_5_clicked();

    void on_btn_addrow_6_clicked();

    void on_btn_remrow_6_clicked();

    void on_btn_addcol_6_clicked();

    void on_btn_remcol_6_clicked();

    void on_btn_addrow_7_clicked();

    void on_btn_remrow_7_clicked();

    void on_btn_addcol_7_clicked();

    void on_btn_remcol_7_clicked();

    void on_btn_addrow_8_clicked();

    void on_btn_remrow_8_clicked();

    void on_btn_addcol_8_clicked();

    void on_btn_remcol_8_clicked();

    void on_btn_addrow_10_clicked();

    void on_btn_remrow_10_clicked();

    void on_btn_addcol_10_clicked();

    void on_btn_remcol_10_clicked();

    void on_btn_addrow_11_clicked();

    void on_btn_remrow_11_clicked();

    void on_btn_addcol_11_clicked();

    void on_btn_remcol_11_clicked();

    void on_calc_1_clicked();
    void on_calc_2_clicked();
    void on_calc_3_clicked();
    void on_calc_4_clicked();
    void on_calc_5_clicked();
    void on_calc_6_clicked();
    void on_calc_7_clicked();
    void on_calc_8_clicked();

    void on_calc_9_clicked();

    void on_btn_rnd_1_clicked();
    void on_btn_rnd_2_clicked();
    void on_btn_rnd_3_clicked();
    void on_btn_rnd_4_clicked();
    void on_btn_rnd_5_clicked();
    void on_btn_rnd_6_clicked();
    void on_btn_rnd_7_clicked();
    void on_btn_rnd_8_clicked();
    void on_btn_rnd_10_clicked();
    void on_btn_rnd_11_clicked();

    void on_calc_10_clicked();

    void on_calc_11_clicked();

    void on_action_triggered();

    void on_action_2_triggered();

    void on_action_3_triggered();

    void on_action_5_triggered();
    void on_action_6_triggered();
    void on_action_7_triggered();
    void on_action_8_triggered();
    void on_action_9_triggered();
    void on_action_10_triggered();
    void on_action_11_triggered();
    void on_action_12_triggered();
    void on_action_13_triggered();
    void on_action_14_triggered();
    void on_action_15_triggered();

private:
    AboutDialog *about;
    Ui::MainWindow *ui;
    Table model_1,model_2,model_3,model_4_1,model_4_2,model_5,model_6,model_7,model_8,model_10,model_11;
};

#endif // MAINWINDOW_H
