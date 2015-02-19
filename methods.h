#ifndef METHODS_H
#define METHODS_H
#include <QList>
#include <QAbstractTableModel>
#include <QTextStream>
class TableData:public QVector< QVector<double> > {
  public:
    void resizet(size_t m,size_t n);
};
class Table:public TableData,public QAbstractTableModel{

    int rowCount ( const QModelIndex & parent) const ;
    int columnCount ( const QModelIndex & parent ) const;
    QVariant data ( const QModelIndex & index, int role ) const;
    QVariant headerData ( int section, Qt::Orientation orientation, int role ) const;
    Qt::ItemFlags flags ( const QModelIndex & index ) const;
    bool setData ( const QModelIndex & index, const QVariant & value, int role );
    bool insertRows ( int row, int count, const QModelIndex & parent = QModelIndex() );
    bool removeRows ( int row, int count, const QModelIndex & parent = QModelIndex() );
    bool insertColumns ( int row, int count, const QModelIndex & parent = QModelIndex() );
    bool removeColumns ( int row, int count, const QModelIndex & parent = QModelIndex() );
  public:
    void ranomize(int min,int max);

};
struct res_t{
    double value;
    int a,b;
};

res_t maximin(TableData &t,QTextStream &str);
res_t minimax(TableData &t,QTextStream &str);
bool check_sedl(TableData &t,QTextStream &str);
void winm_to_riskm(TableData& winm,TableData& riskm);
res_t maximax_crit(TableData &t,QTextStream &str);
res_t Wald_crit(TableData &t,QTextStream &str);
res_t Savidge_crit(TableData &t0,QTextStream &str);
res_t Gurvice_crit(TableData &t,double p,QTextStream &str);
double polezn(double U0,double Umax,double p);
#endif // METHODS_H
