#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
	//����һ��ͼƬ
	Mat img = imread("1.jpg");
	//�ڴ�������ʾ�����ͼƬ
	imshow("[�����ͼƬ]"�� img);
	//�ȴ�6000ms�󴰿��Զ��ر�
	waitKey(6000);
}
