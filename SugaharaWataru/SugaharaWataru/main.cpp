
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
        if (0<=num0 && num0 < arraySize)
        {
            array[num0] = num1;
        }
        else
        {
            printf("�z��O�Q�Ƃł�\n");
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
            printf("�z��O�Q�Ƃł�\n");
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
