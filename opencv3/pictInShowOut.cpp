//--------------------[ͷ�ļ��������ռ��������]-------------------------
//		����������������ʹ�õ�ͷ�ļ��������ռ�
//-----------------------------------------------------------------------
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;

int main()
{
	//-------------ͼ���������ʾ-----------------------------------
	//		�������д����������ͼ����������ʾ
	//--------------------------------------------------------------
	Mat girl = imread("girl.jpg");
	namedWindow("����ͼ");
	imshow("����ͼ", girl);
	//-------------����ͼ����-------------------------------------
	//	����������ͼ����
	//--------------------------------------------------------------
	//����ͼƬ
	Mat image = imread("dota.jpg", 199);
	Mat logo = imread("dota_logo.jpg");
	//���������ʾ
	namedWindow("ԭͼ");
	imshow("ԭͼ", image);

	namedWindow("logoͼ");
	imshow("logoͼ", logo);
	
	//����һ��Mat���ͣ����ڴ��ͼ���ROI
	Mat imageROI;
	//����һ
	imageROI = image(Rect(800,350,logo.cols,logo.rows));
	//������
	//imageROI = image(Range(350, 350+logo.rows), Range(800,800+logo.cols));
	
	//��logo�ӵ�ԭͼ��
	addWeighted(imageROI,0.5,logo,0.3,0.,imageROI);

	//��ʾ���
	namedWindow("ԭͼ+logoͼ");
	imshow("ԭͼ+logoͼ", image);

	//--------------------ͼ�����-----------------------
	//	��������һ��Matͼ�������ͼ���ļ�
	//---------------------------------------------------
	//���һ��jpgͼƬ������Ŀ¼��
	imwrite("��imwrite���ɵ�ͼƬ.jpg",image);
	waitKey();
	return 0;

}
