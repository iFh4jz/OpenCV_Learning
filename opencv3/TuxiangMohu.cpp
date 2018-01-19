//对图像进行均值滤波操作，模糊一副图像的代码如何书写。
//主要使用进行均值滤波操作的blur函数
//---------------[头文件、命名空间包含部分]--------------
//			描述：包含程序所使用的头文件和命名空间
//-------------------------------------------------------
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgpro/imgproc.hpp"
using namespace cv;

//---------------[main()函数]----------------------------
//	描述：控制台应用程序的入口函数，我们的程序从这里开始
//-------------------------------------------------------
int main()
{
	//[1]载入原图
	Mat srcImage = imread("1.jpg");

	//[2]显示原图
	imshow("均值滤波[原图]", srcImage);

	//[3]进行均值滤波操作
	Mat dstImage;
	blur(srcImage, dstImage, Size(7, 7));

	//[4]显示效果图
	imshow("均值滤波[效果图]",dstImage);
	waitKey(0);
}
