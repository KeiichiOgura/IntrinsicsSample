#include "function.h"
#include <nmmintrin.h> //MMX - SSE4.2 
#include <tmmintrin.h>
#include <smmintrin.h>
#include <intrin.h>      // MMX-SSE3���߃Z�b�g���g�p����ꍇ�C���N���[�h   //
#include <emmintrin.h>   // MMX-SSE2���߃Z�b�g���g�p����ꍇ�C���N���[�h   //
#include <xmmintrin.h>   // MMX-SSE���߃Z�b�g���g�p����ꍇ�C���N���[�h    //
#include <mmintrin.h>    // MMX���߃Z�b�g���g�p����ꍇ�C���N���[�h        //


int main(int argc, char** argv)
{
	setUseOptimized(true);
	
	checkCPU();
	typecvtS2L();//�^�̕ϊ�
	typecvtL2S();
	addmullsingle();
	shuffle_test();

	
	cout<<"copy test"<<endl;vsOpenCV_copy();
	cout<<"cvt test"<<endl;vsOpenCV_cvt();
	cout<<"add test"<<endl;vsOpenCV_add();
	cout<<"multiply test"<<endl;vsOpenCV_multiply();
	cout<<"flip test"<<endl;vsOpenCV_flip();
	cout<<"swap test"<<endl;vsOpenCV_swapRB();
	cout<<"split test"<<endl;vsOpenCV_split();
	cout<<"gray test"<<endl;vsOpenCV_BGR2Gray();
	
    return 0;
}