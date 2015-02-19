#include "methods.h"
#include <cstdlib>
#include <ctime>
#include <limits>
int Table::rowCount ( const QModelIndex & parent = QModelIndex() ) const {
    return this->size();
}

int Table::columnCount ( const QModelIndex & parent = QModelIndex() ) const{
    return this->at(0).size();
}

QVariant Table::data ( const QModelIndex & index, int role = Qt::DisplayRole ) const{
    switch(role){
        case Qt::DisplayRole:
        case Qt::EditRole:
            if(index.row()<this->size()){
                if(index.column()<this->at(index.row()).size())
                    return QVariant(this->at(index.row()).at(index.column()));
            } else
                return QVariant(QVariant::Invalid);
        case Qt::TextAlignmentRole:
            return QVariant(Qt::AlignRight|Qt::AlignVCenter);
        default:
            return QVariant(QVariant::Invalid);
    }


}

QVariant Table::headerData ( int section, Qt::Orientation orientation, int role = Qt::DisplayRole ) const{
    switch(role){
        case Qt::DisplayRole:
        case Qt::EditRole:
            if(orientation==Qt::Vertical){
                return QVariant("A"+QString::number(section+1));
            } else if (orientation==Qt::Horizontal){
                return QVariant("B"+QString::number(section+1));
            } else
                return QVariant(QVariant::Invalid);
        default:
            return QVariant(QVariant::Invalid);
    }


}

Qt::ItemFlags Table::flags ( const QModelIndex & index ) const{
    return Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsEditable;
}

bool Table::setData ( const QModelIndex & index, const QVariant & value, int role = Qt::EditRole ){
    switch(role){
        case Qt::EditRole:
            if(index.row()<this->size()){
                if(index.column()<this->at(index.row()).size()){
                    (*this)[index.row()][index.column()]=value.toDouble();
                    emit this->dataChanged(index,index);
                    return true;
                }
                return false;
            } else
                return false;
        default:
            return false;
    }
}

bool Table::insertRows ( int row, int count, const QModelIndex & parent ){
    if (count>0&&row<=this->size()){
        this->beginInsertRows(parent,row,row+count-1);

        this->insert(row,QVector<double>(at(0).size(),0));

        endInsertRows();
        return true;
    } else return false;
}

bool Table::removeRows ( int row, int count, const QModelIndex & parent ){
    if (count>0&&(size()-count)>0&&row<=this->size()){
        this->beginRemoveRows(parent,row,row+count-1);
        while(count){
            this->remove(row);
            --count;
        }
        endRemoveRows();
        return true;
    } else return false;
}


bool Table::insertColumns ( int row, int count, const QModelIndex & parent ){
    if (count>0&&row<=this->at(0).size()){
        this->beginInsertColumns(parent,row,row+count-1);
        for(int i=0;i<size();i++)
            (*this)[i].insert(row,count,0);

        endInsertColumns();
        return true;
    } else return false;
}

bool Table::removeColumns ( int row, int count, const QModelIndex & parent ){
    if (count>0&&(at(0).size()-count)>0&&row<=this->at(0).size()){
        this->beginRemoveColumns(parent,row,row+count-1);
        while(count){
            for(int i=0;i<size();i++)
                (*this)[i].remove(row);
            --count;
        }
        endRemoveColumns();
        return true;
    } else return false;
}
void TableData::resizet(size_t m, size_t n){
    resize(m);
    for(size_t i=0;i<m;i++){
        (*this)[i].resize(n);
    }
}
void Table::ranomize(int min, int max){
    srand(time(0));
    for(int i=0;i<size();++i)
        for(int j=0;j<at(0).size();j++)
            (*this)[i][j]=rand()%(max-min)+min;
}

res_t maximin(TableData &t,QTextStream &str){
    double max=-std::numeric_limits<double>::infinity();
    double min=std::numeric_limits<double>::infinity();
    res_t res; int tmp_b;
    QVector<double> v;
    str<<QObject::tr("Расчет критерия максимина...\n");
    for(int i=0;i<t.size();i++){
        str<<QObject::tr("Поиск минимального элемента в строке ")<<i+1<<":\n";
        min=std::numeric_limits<double>::infinity();
        for(int j=0;j<t.at(0).size();j++){
            str<<t.at(i).at(j)<<" ";
            if(t.at(i).at(j)<=min){
                min=t.at(i).at(j);
                tmp_b=j;
            }
        }
        str<<"\n";
        str<<QObject::tr("Минимальный элемент равен ")<<min<<".\n";
        v.push_back(min);
        if(min>=max){
            max=min;
            res.a=i; res.b=tmp_b;
        }
    }
    str<<QObject::tr("Поиск максимального среди минимальных элементов строк:\n");
    for(auto i=v.begin();i!=v.end();i++){
        str<<*i<<" ";
    }
    str<<"\n";
    str<<QObject::tr("Максимальный элемент равен ")<<max<<".\n";
    res.value=max;
    res.a++; res.b++;
    return res;
}

res_t minimax(TableData &t, QTextStream &str){
    double max=-std::numeric_limits<double>::infinity();
    double min=std::numeric_limits<double>::infinity();
    res_t res; int tmp_a;
    QVector<double> v;
    str<<QObject::tr("Расчет критерия минимакса...\n");
    for(int j=0;j<t.at(0).size();j++){
        max=-std::numeric_limits<double>::infinity();
        str<<QObject::tr("Поиск максимального элемента в столбце ")<<j+1<<":\n";
        for(int i=0;i<t.size();i++){
            str<<t.at(i).at(j)<<" ";
            if(t.at(i).at(j)>=max){
                max=t.at(i).at(j);
                tmp_a=i;
            }
        }
        str<<"\n";
        str<<QObject::tr("Максимальный элемент равен ")<<max<<".\n";
        v.push_back(max);
        if(max<=min){
            min=max;
            res.a=tmp_a;res.b=j;
        }
    }
    str<<QObject::tr("Поиск миниимального среди максимальных элементов столбцов:\n");
    for(auto i=v.begin();i!=v.end();i++){
        str<<*i<<" ";
    }
    str<<"\n";
    str<<QObject::tr("Минимальный элемент равен ")<<min<<".\n";
    res.value=min;
    res.a++; res.b++;
    return res;
}
bool check_sedl(TableData &t,QTextStream &str){
    str<<QObject::tr("Проверка наличия седловой точки...\n");
    res_t r1=maximin(t,str),r2=minimax(t,str);
    return r1.value==r2.value;
}
void winm_to_riskm(TableData& winm,TableData& riskm){
    riskm.resizet(winm.size(),winm.at(0).size());
    double max=-std::numeric_limits<double>::infinity();
    for(int j=0;j<winm.at(0).size();j++){
        max=-std::numeric_limits<double>::infinity();
        for(int i=0;i<winm.size();i++){
            if(winm.at(i).at(j)>=max)
                max=winm.at(i).at(j);
        }
        for(int i=0;i<winm.size();i++){
            riskm[i][j]=max-winm.at(i).at(j);
        }
    }
}

res_t maximax_crit(TableData &t,QTextStream &str){
    double max1=-std::numeric_limits<double>::infinity();
    double max2=-std::numeric_limits<double>::infinity();
    res_t res; int tmp_b;
    QVector<double> v;
    str<<QObject::tr("Расчет критерия максимакса...\n");
    for(int i=0;i<t.size();i++){
        max1=-std::numeric_limits<double>::infinity();
        str<<QObject::tr("Поиск максимального элемента в строке ")<<i+1<<":\n";
        for(int j=0;j<t.at(0).size();j++){
            str<<t.at(i).at(j)<<" ";
            if(t.at(i).at(j)>=max1){
                max1=t.at(i).at(j);
                tmp_b=j;
            }
        }
        str<<"\n";
        str<<QObject::tr("Максимальный элемент равен ")<<max1<<".\n";
        v.push_back(max1);
        if(max1>=max2){
            max2=max1;
            res.a=i; res.b=tmp_b;
        }
    }
    str<<QObject::tr("Поиск максимального среди максимальных элементов строк:\n");
    for(auto i=v.begin();i!=v.end();i++){
        str<<*i<<" ";
    }
    str<<"\n";
    str<<QObject::tr("Максимальный элемент равен ")<<max2<<".\n";
    res.value=max2;
    res.a++; res.b++;
    return res;
}

res_t Wald_crit(TableData &t,QTextStream &str){
    double max=-std::numeric_limits<double>::infinity();
    double min=std::numeric_limits<double>::infinity();
    res_t res; int tmp_b;
    QVector<double> v;
    str<<QObject::tr("Расчет критерия Вальда...\n");
    for(int i=0;i<t.size();i++){
        min=std::numeric_limits<double>::infinity();
        str<<QObject::tr("Поиск минимального элемента в строке ")<<i+1<<":\n";
        for(int j=0;j<t.at(0).size();j++){
            str<<t.at(i).at(j)<<" ";
            if(t.at(i).at(j)<=min){
                min=t.at(i).at(j);
                tmp_b=j;
            }
        }
        str<<"\n";
        str<<QObject::tr("Минимальный элемент равен ")<<min<<".\n";
        v.push_back(min);
        if(min>=max){
            max=min;
            res.a=i; res.b=tmp_b;
        }
    }
    str<<QObject::tr("Поиск максимального среди минимальных элементов строк:\n");
    for(auto i=v.begin();i!=v.end();i++){
        str<<*i<<" ";
    }
    str<<"\n";
    str<<QObject::tr("Максимальный элемент равен ")<<max<<".\n";
    res.value=max;
    res.a++; res.b++;
    return res;
}

res_t Savidge_crit(TableData &t0,QTextStream &str){
    TableData t;
    winm_to_riskm(t0,t);
    str<<QObject::tr("Расчет критерия Сэвиджа...\n");
    double max=-std::numeric_limits<double>::infinity();
    double min=std::numeric_limits<double>::infinity();
    res_t res; int tmp_b;
    QVector<double> v;
    for(int i=0;i<t.size();i++){
        max=-std::numeric_limits<double>::infinity();
        str<<QObject::tr("Поиск максимального элемента в строке ")<<i+1<<":\n";
        for(int j=0;j<t.at(0).size();j++){
            str<<t.at(i).at(j)<<" ";
            if(t.at(i).at(j)>=max){
                max=t.at(i).at(j);
                tmp_b=j;
            }
        }
        str<<"\n";
        str<<QObject::tr("Максимальный элемент равен ")<<max<<".\n";
        v.push_back(max);
        if(max<=min){
            min=max;
            res.a=i; res.b=tmp_b;
        }
    }
    str<<QObject::tr("Поиск минимального среди максимальных элементов столбцов:\n");
    for(auto i=v.begin();i!=v.end();i++){
        str<<*i<<" ";
    }
    str<<"\n";
    str<<QObject::tr("Минимальный элемент равен ")<<min<<".\n";
    res.value=min;
    res.a++; res.b++;
    return res;
}

res_t Gurvice_crit(TableData &t,double p,QTextStream &str){
    double max=-std::numeric_limits<double>::infinity();
    double min1=std::numeric_limits<double>::infinity();
    double max1=-std::numeric_limits<double>::infinity();
    res_t res; int tmp_b;
    QVector<double> v;
    double av;
    QString templ="%0*%1+(1-%0)*%2=%3";
    str<<QObject::tr("Расчет критерия Гурвица...\n");
    for(int i=0;i<t.size();i++){
        min1=std::numeric_limits<double>::infinity();
        max1=-std::numeric_limits<double>::infinity();
        str<<QObject::tr("Поиск минимального и максимального элементов в строке ")<<i+1<<":\n";
        for(int j=0;j<t.at(0).size();j++){
            str<<t.at(i).at(j)<<" ";
            if(t.at(i).at(j)<=min1)
                min1=t.at(i).at(j);
            if(t.at(i).at(j)>=max1)
                max1=t.at(i).at(j);
        }
        str<<QObject::tr("\n");
        str<<QObject::tr("Минимальный элемент равен ")<<min1<<".\n";
        str<<QObject::tr("Максимальный элемент равен ")<<max1<<".\n";
        av=p*min1+(1-p)*max1;
        str<<QObject::tr("Усредненное значение равно ")<<templ.arg(p).arg(min1).arg(max1).arg(av)<<QObject::tr(".\n");
        v.push_back(av);
        if((av)>=max){
            max=av;
            res.a=i; res.b=tmp_b;
        }
    }
    str<<QObject::tr("Поиск максимального среди усредненных значений:\n");
    for(auto i=v.begin();i!=v.end();i++){
        str<<*i<<" ";
    }
    str<<"\n";
    str<<QObject::tr("Максимальное значение равно ")<<max<<QObject::tr(".\n");
    res.a++; res.b++;
    res.b=0;
    res.value=max;
    return res;
}

double polezn(double U0,double Umax,double p){
    return p*Umax-(1-p)*U0;
}
