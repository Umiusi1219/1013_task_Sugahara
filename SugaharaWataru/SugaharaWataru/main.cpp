
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

    void Create(int num)
    {
        array = new int[num];
    };

    void Set_array(int num0, int num1)
    {
        array[num0] = num1;
    };

    int Get_array(int num)
    {
        return array[num];
    };

private:

    int* array = nullptr;
};

Array::Array(int num)
{
    //array = new int[num];
}

Array::~Array()
{
    delete[] array;
    array = nullptr;
}


int main()
{
    Array array(1000);

    array.Create(1000);

    for (int i = 0; i < 1000; ++i)
    {
        array.Set_array(i, i);
    }

    for (int i = 0; i < 1000; ++i)
    {
        printf("num = %d\n", array.Get_array(i));
    }

    printf("num = %d\n", array.Get_array(-1));
    printf("num = %d\n", array.Get_array(1000));
}
