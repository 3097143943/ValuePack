#include "stm32f10x.h"
#include "valuepack.h"

// ����һ���㹻����������ڴ�����ݰ�
unsigned char buffer[50];

int main(void)
{

	// ��ʼ������ ���ò�����
  initValuePack(115200);
    
    
	while(1)
	{

		// ��ʱһ��ʱ��
		for(int i=0;i<1000000;i++)
		{}

		// ��ʼ����
			startValuePack(buffer);
		
		// ��Ҫ�ش���ֵ���룬ע��˳��Ϊ Bool->Byte->Short->Int->Float			
			putBool(0);
			putBool(1);
			putBool(0);
			putBool(0);
			putShort(3123);
			putInt(3124);
			putFloat(3125);
			
		// ͨ�����ڷ��ͣ�endValuePack���������ݰ����ܳ���
			sendBuffer(buffer,endValuePack());
			
	}
}



