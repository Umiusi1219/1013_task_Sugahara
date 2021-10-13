
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
        if (0<=num0 && num0 < arraySize)
        {
            array[num0] = num1;
        }
        else
        {
            printf("配列外参照です\n");
        }
    };

    int Get_array(int num)
    {
        if (0 <= num && num < arraySize)
        {
            return array[num];
        }
        else
        {
            printf("配列外参照です\n");
            return 0;
        }
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


    for (int i = 0; i < 1001; ++i)
    {
        array.Set_array(i, i);

        printf("num = %d\n", array.Get_array(i));
    }

}
