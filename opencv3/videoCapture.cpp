//���ȶ�����һ��Mat���������ڴ洢ÿһ֡��ͼ��
//���Ŷ�ȡ��ǰ֡��Mat�����У�Ȼ�����imshow
//��ʾ��ǰ����һ֡ͼ�񣬲���waitKey��ʱ30���룬
//��ʼ��һ��ѭ��
#include <opencv2\opencv.hpp>
using namespace cv;

int main()
{
	//������Ƶ
	VideoCapture capture("1.avi");
	
	//ѭ����ʾÿһ֡
	while(1)
	{
		Mat frame;	//����һ��Mat���������ڴ洢ÿһ֡��ͼ��
		capture >> frame;	//��ȡ��ǰ֡
		imshow("��ȡ��Ƶ", frame); //��ʾ��ǰ֡
		waitKey(30);	//��ʱ30ms
	}
	return 0;
}
