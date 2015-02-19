/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->setWindowModality(Qt::WindowModal);
        AboutDialog->resize(458, 458);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMaximumSize(QSize(458, 458));
        AboutDialog->setSizeGripEnabled(false);
        AboutDialog->setModal(true);
        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(200, 410, 81, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        label = new QLabel(AboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 190, 441, 231));
        label->setWordWrap(true);
        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 0, 161, 201));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/WP_20131220_001.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 0, 141, 201));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/arsen.png")));
        label_3->setScaledContents(true);

        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "Dialog", 0));
        label->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">\320\234\320\276\320\264\320\265\320\273\320\270 \321\202\320\265\320\276\321\200\320\270\320\270 \320\270\320\263\321\200 - \320\234\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\200\320\270\321\201\320\272\320\276\320\262\321\213\321\205 \321\201\320\270\321\202\321\203\320\260\321\206\320\270\320\271</span><br/></p><p>\320\222\321\213\320\277\320\276\320\273\320\275\320\270\320\273 \321\201\321\202\321\203\320\264\320\265\320\275\321\202  \320\263\321\200\321\203\320\277\320\277\321\213 220601,  4 \320\272\321\203\321\200\321\201, \320\272\320\260\321\204\320\265\320\264\321\200\320\260 \320\222\320\242 \321\204\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202\320\260 \320\232\320\270\320\261\320\265\321\200\320\275\320\265\321\202\320\270\320\272\320\270 \320\242\321\203\320\273\321\214\321\201\320\272\320\276\320\263\320\276 \320\263\320\276\321\201\321\203\320\264\320"
                        "\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\263\320\276 \321\203\320\275\320\270\320\262\320\265\321\200\321\201\320\270\321\202\320\265\321\202\320\260  \320\221\320\265\320\273\321\213\320\274 \320\220\320\275\320\264\321\200\320\265\320\271 \320\220\320\275\320\264\321\200\320\265\320\265\320\262\320\270\321\207 &lt;belym_andrey@mail.ru&gt;<br/></p><p>\320\237\321\200\320\270\320\275\321\217\320\273 \320\264\320\276\320\272\321\202\320\276\321\200 \321\202\320\265\321\205\320\275\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \320\275\320\260\321\203\320\272, \320\277\321\200\320\276\321\204\320\265\321\201\321\201\320\276\321\200, \320\260\320\272\320\260\320\264\320\265\320\274\320\270\320\272 \320\234\320\265\320\266\320\264\321\203\320\275\320\260\321\200\320\276\320\264\320\275\320\276\320\271 \320\260\320\272\320\260\320\264\320\265\320\274\320\270\320\270 \320\275\320\260\321\203\320\272\320\270 \320\270 \320\277\321\200\320\260\320\272\321\202\320\270\320\272\320"
                        "\270 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\321\201\321\202\320\262\320\260 (\320\234\320\220\320\236\320\237), \320\260\320\272\320\260\320\264\320\265\320\274\320\270\320\272 \320\220\320\272\320\260\320\264\320\265\320\274\320\270\320\270 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\202\320\270\320\267\320\260\321\206\320\270\320\270 \320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\321\217 \320\220\321\200\321\201\320\265\320\275\321\214\320\265\320\262 \320\256\321\200\320\270\320\271 \320\235\320\270\320\272\320\276\320\273\320\260\320\265\320\262\320\270\321\207<br/></p><p>\320\242\321\203\320\273\321\214\321\201\320\272\320\270\320\271 \320\263\320\276\321\201\321\203\320\264\320\260\321\200\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\271 \321\203\320\275\320\270\320\262\320\265\321\200\321\201\320\270\321\202\320\265\321\202, "
                        "\321\204\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202 \320\232\320\270\320\261\320\265\321\200\320\275\320\265\321\202\320\270\320\272\320\270, \320\272\320\260\321\204\320\265\320\264\321\200\321\213 \320\230\320\221 \320\270 \320\222\320\242, 2013</p></body></html>", 0));
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
