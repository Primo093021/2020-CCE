#include <stdio.h>
///�n�q²��}�l�A�C�C�W�[�A�åB��C Tutor�i��U�о�
///���g��2�ӥD�D�i�H��:2D �}�C(��������W�g�i��)
///vs. �r��Ƨ�(������ɨƪ��Pı) vs.CPE(�ɨ�&²��)
///�r���n�i�H���b2D �}�C�᭱��
int main()
{///(1)���F�Ѥ���O�r��
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);

    ///(2)�F�Ѧr�굲���O'\0'�A�۫H��?�o�Oline4:==%s==\n
    char line3[]="majority�o�O�n���A�S���D�A�n�h�����h��";
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n",line3);

    printf("�A�۫H��?�o�Oline4:==%s==\n",line4);
}

