//��̬ѧ����֮һ---��ʴ����ͼ���а�ɫ���֡���ʴ������������
//---------------��ͷ�ļ��������ռ�������֡�-----------------
//			������ �������������ͷ�ļ��������ռ�
//------------------------------------------------------------
#include <opencv2/highgui/highgui.hpp> //OpenCV highguiģ��ͷ�ļ�
#include <opencv2/imgproc/imgproc.hpp> //OpenCVͼ����ͷ�ļ�
using namespace cv;	//����cv�����ռ�

int main()		//����̨Ӧ�ó������ں��������ǵĳ�������￪ʼ
{
	//����ԭͼ
	Mat srcImage = imread("1.jpg");
	//��ʾԭͼ
	imshow("[ԭͼ]��ʴ����", srcImage);
	//���и�ʴ����
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	//��ʾЧ��ͼ
	imshow("[Ч��ͼ]��ʴ����"�� dstImage);
	waitKey(0);

	return 0;
}

/*
 *�������������������ʾһ��ͼ��Ȼ����һ��Mat���͵ı��������
 *getStructuringElement�����ķ���ֵ����getStructuringELement������
 *����ֵΪָ����״�ͳߴ�ĽṹԪ�أ��ں˾��󣩡�����׼����ϣ�����
 *��ɵ���erode�������и�ʴ������������imshow����������ʾ����waitKey
 *�����ȴ��������£��Ա����ô���һֱ��ʾ
*/
