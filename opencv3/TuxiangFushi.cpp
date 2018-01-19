//形态学运算之一---腐蚀，用图像中暗色部分“腐蚀”掉高亮部分
//---------------【头文件。命名空间包含部分】-----------------
//			描述： 包含程序所需的头文件和命名空间
//------------------------------------------------------------
#include <opencv2/highgui/highgui.hpp> //OpenCV highgui模块头文件
#include <opencv2/imgproc/imgproc.hpp> //OpenCV图像处理头文件
using namespace cv;	//包含cv命名空间

int main()		//控制台应用程序的入口函数，我们的程序从这里开始
{
	//载入原图
	Mat srcImage = imread("1.jpg");
	//显示原图
	imshow("[原图]腐蚀操作", srcImage);
	//进行腐蚀操作
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element);
	//显示效果图
	imshow("[效果图]腐蚀操作"， dstImage);
	waitKey(0);

	return 0;
}

/*
 *程序首先依次载入和显示一幅图像，然后定义一个Mat类型的变量来获得
 *getStructuringElement函数的返回值，而getStructuringELement函数的
 *返回值为指定形状和尺寸的结构元素（内核矩阵）。参数准备完毕，接着
 *便可调用erode函数进行腐蚀操作，最后调用imshow函数进行显示，用waitKey
 *函数等待按键按下，以便能让窗口一直显示
*/
