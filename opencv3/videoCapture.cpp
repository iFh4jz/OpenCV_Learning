//首先定义了一个Mat变量，用于存储每一帧的图像，
//接着读取当前帧到Mat变量中，然后调用imshow
//显示当前的这一帧图像，并用waitKey延时30毫秒，
//开始下一次循环
#include <opencv2\opencv.hpp>
using namespace cv;

int main()
{
	//读入视频
	VideoCapture capture("1.avi");
	
	//循环显示每一帧
	while(1)
	{
		Mat frame;	//定义一个Mat变量。用于存储每一帧的图像
		capture >> frame;	//读取当前帧
		imshow("读取视频", frame); //显示当前帧
		waitKey(30);	//延时30ms
	}
	return 0;
}
