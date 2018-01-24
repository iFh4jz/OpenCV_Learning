//��������ͷ���canny��Ե��⣬�õ�canny��Ե��Ⲣ��˹ģ���������ͷ�ɼ�ship
#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
	//������ͷ������Ƶ
	VideoCapture capture(0);
	Mat edges;

	//ѭ����ʾÿһ֡
	while(1)
	{
		//����ͼ��
		Mat frame;
		capture >> frame;

		//��ԭͼ��ת��Ϊ�Ҷ�ͼ��
		cvtColor(frame, edge, CV_BGR2GRAY); //ת��BGR��ɫͼΪ�Ҷ�ͼ

		//ʹ��3x3�ں˽���(2x3+1=7)
		blur(edges, edges, Size(7,7)); //����ģ��

		//����canny��Ե��Ⲣ��ʾ
		Canny(edges, edges, 0, 30, 3);
		imshow("��canny�����Ƶ", edges); //��ʾ���������ĵ�ǰ֡
		if(waitKey(30) >= 0) break;	//��ʱ30ms
	}
	return 0;
}
