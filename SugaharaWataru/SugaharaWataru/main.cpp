
//【問題】
//メモリ確保を使用し、
//1000個の配列を確保して、
//その配列に0～999を設定するプログラムを作成してください。
//newとdeleteで配列を確保する処理を、
//クラスにしてデストラクタで自動でdeleteが呼ばれるようにしてください。

#include <stdio.h>

class Array
{
public:
    Array(int num);

    ~Array();


    void Set_array(int num0, int num1)
    {
        array[num0] = num1;
    };

    int Get_array(int num)
    {
        return array[num];
    };


    int Get_arraySize()
    {
        return arraySize;
    };

private:
    int* array = nullptr;
    int arraySize;
};

Array::Array(int num)
{
    array = new int[num];

    arraySize = num;
};

Array::~Array()
{
    delete[] array;
    array = nullptr;
};


int main()
{
    Array array(1000);


    for (int i = 0; i < array.Get_arraySize(); ++i)
    {
        array.Set_array(i, i);

        printf("num = %d\n", array.Get_array(i));
    }

}
