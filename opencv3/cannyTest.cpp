//----------------[头文件、命名空间包含部分]--------------------
//		描述：包含程序所使用的的头文件和命名空间
//--------------------------------------------------------------
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;

//------------------[main()函数]--------------------------------
//		描述：控制台应用程序的入口函数，我们的程序从这里开始
//--------------------------------------------------------------
int main()
{
	//[0]载入原始图
	Mat srcImage = imread("1.jpg"); //工程目录下应该有一张名为1.jpg的素材图
	imshow("[原始图]Canny边缘检测", srcImage);	//显示原始图
	Mat dstImage, edge, grayImage; //参数定义

								   //[1]创建与src同类型和大小的矩阵(dst)
	dstImage.create(srcImage.size(), srcImage.type());

	//[2]将原图像转换为灰度图像
	cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);

	//[3]先使用3X3内核来降噪
	blur(grayImage, edge, Size(3, 3));

	//[4]运行Canny算子
	Canny(edge, edge, 3, 9, 3);

	//显示效果图
	imshow("[效果图]Canny边缘检测", edge);

	waitKey(0);

	return 0;

}
