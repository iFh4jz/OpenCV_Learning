//ʹ�ù켣����������ͼ��Alpha���
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
#define WINDOW_NAME "���Ի��ʾ��"

//-----------------ȫ�ֱ�������--------------------------
//	������ȫ�ֱ�������
//-------------------------------------------------------
const int g_nMaxAlphaValue = 100;	//Ϊ���ڱ��ⶨ��ĺ�
int g_nAlphaValueSlider;	//��������Ӧ�ı���
double g_dAlphaValue;
double g_dBetaValue;

//--------------on_Trackbar()����------------------------
//	��������Ӧ�������Ļص�����
//-------------------------------------------------------
void on_Trackbar(int, void*)
{
	//�����ǰalphaֵ��������ֵ�ı���
	g_dAlphaValue = (double) g_nAlphaValueSlider/g_nMaxAlphaValue;
	//��betaֵΪ1��ȥalphaֵ
	g_dBetaValue = (1.0 - g_AlphaValue);

	//����alpha��betaֵ�������Ի��
	addWeighted(g_srcImage1, g_dAlphaValue, g_srcImage2, g_dBetaValue,
				0.0, g_dstImage);

	//��ʾЧ��ͼ
	imshow(WINDOW_NAME,g_dstImage);
}

//---------------------main()����------------------------------
//	����������̨Ӧ�ó������ں��������ǵĳ�������￪ʼִ��
int main()
{
	//����ͼ��(�ߴ������ͬ)
	g_
}
