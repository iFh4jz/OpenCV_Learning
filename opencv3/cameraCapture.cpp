//����OpenCV��������ͷ
#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
	//������ͷ������Ƶ
	VideoCapture capture(0);

	//ѭ����ʾÿһ֡
	while(1)
	{
		Mat frame; //����һ��Mat���������ڴ洢ÿһ֡ͼ��
		capture >> frame; //��ȡ��ǰ֡
		imshow("��ȡ��Ƶ", frame);	//��ʾ��ǰ֡
		waitKey(30); //��ʱ30ms
	}
	return 0;
}
