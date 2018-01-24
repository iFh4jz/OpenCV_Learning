//----------------[ͷ�ļ��������ռ��������]--------------------
//		����������������ʹ�õĵ�ͷ�ļ��������ռ�
//--------------------------------------------------------------
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgpro.hpp>
using namespace cv;

//------------------[main()����]--------------------------------
//		����������̨Ӧ�ó������ں��������ǵĳ�������￪ʼ
//--------------------------------------------------------------
int main()
{
	//[0]����ԭʼͼ
	Mat srcImage = imread("1.jpg"); //����Ŀ¼��Ӧ����һ����Ϊ1.jpg���ز�ͼ
	imshow("[ԭʼͼ]Canny��Ե���", srcImage);	//��ʾԭʼͼ
	Mat dstImage, edge, grayImage; //��������
	
	//[1]������srcͬ���ͺʹ�С�ľ���(dst)
	dstImage.create(srcImage.size(), srcImage.type());

	//[2]��ԭͼ��ת��Ϊ�Ҷ�ͼ��
	cvtColor(srcImage, gayImage, COLOR_BGR2GRAY);

	//[3]��ʹ��3X3�ں�������
	blur(grayImage, edge, Size(3, 3));

	//[4]����Canny����
	Canny(edge, edge, 3, 9, 3);

	//��ʾЧ��ͼ
	imshow("[Ч��ͼ]Canny��Ե���", edge);

	waitKey(0);

	return 0;

}
