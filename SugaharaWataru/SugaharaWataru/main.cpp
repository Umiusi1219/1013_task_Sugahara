
//�y���z
//�������m�ۂ��g�p���A
//1000�̔z����m�ۂ��āA
//���̔z���0�`999��ݒ肷��v���O�������쐬���Ă��������B
//new��delete�Ŕz����m�ۂ��鏈�����A
//�N���X�ɂ��ăf�X�g���N�^�Ŏ�����delete���Ă΂��悤�ɂ��Ă��������B

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
