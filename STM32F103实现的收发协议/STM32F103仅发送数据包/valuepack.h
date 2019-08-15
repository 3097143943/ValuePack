#include "stm32f10x.h"

// ������ͨ�� USART �����ݰ����͵��ֻ��ϣ���֧�ֽ��յĹ���


//  ��ʼ�� valuepack һЩ��Ҫ��Ӳ����������
void initValuePack(int baudrate);


////////////////////////////////////////////////////////////////////////////////////////////
// ���º����ǰ�˳����õģ��ȿ�ʼ�����Ȼ�����δ�����ݣ���������������������ʹ�ô��ڽ����鷢�ͳ�ȥ��


// 1. ��ʼ�����ݴ�����贫�붨��õ����飨�豣֤���鳤�����Դ��Ҫ���͵����ݣ�

unsigned char startValuePack(unsigned char *buffer);

// 2. �����ݰ��з���������ݣ��������ݰ��Ľṹ�ǹ̶��ģ����ע���ϸ������µ�˳����д�ţ��������ִ���

void putBool(unsigned char b);
void putByte(char b);
void putShort(short s);
void putInt(int i);
void putFloat(float f);

// 3. �������,���������� ���ݰ����ܳ���
unsigned short endValuePack();

// 4. ��������

void sendBuffer(unsigned char *buffer,unsigned short length);


#define PACK_HEAD 0xa5   
#define PACK_TAIL 0x5a


