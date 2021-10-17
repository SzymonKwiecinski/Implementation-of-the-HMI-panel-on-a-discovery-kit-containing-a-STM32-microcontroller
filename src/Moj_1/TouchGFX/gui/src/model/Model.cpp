#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "queue.h"
#include "stdbool.h"
uint8_t  sterowanie = 0;
uint8_t  status = 0;
int encoderValueResponse[]={0,0,0,0};
int timer = 0;
bool connected = false;

extern "C"
{
xQueueHandle QueueSend;
xQueueHandle QueueSendSliderValue;
xQueueHandle QueueReceive;
xQueueHandle QueueReceiveEncoderValue;
}

Model::Model() : modelListener(0)
{
	QueueSend = xQueueCreate(1,sizeof(uint8_t));
	QueueSendSliderValue = xQueueCreate(1,sizeof(int));
	QueueReceive = xQueueCreate(1,sizeof(uint8_t));
	QueueReceiveEncoderValue = xQueueCreate(1,sizeof(int)*4);
}

void Model::tick()
{

		if(xQueueReceive(QueueReceive, &status, 0) == pdTRUE)
		{
			connected = true;
		}
		if(timer % (24*2) == 0 && connected == true)
		{
			modelListener->DisplayConnectedStatus(status);
			status = 0;
			connected = false;
		}
		else if(timer % (24*2) == 0 && connected == false)
		{
			modelListener->DisplayConnectedStatus(status);
			connected = false;
		}

	if(xQueueReceive(QueueReceiveEncoderValue, encoderValueResponse, 0) == pdTRUE)
	{
		modelListener->DisplayEncoderValue(encoderValueResponse[0],encoderValueResponse[1],encoderValueResponse[2],encoderValueResponse[3]);
	}

timer++;
}




void Model::buttonUpVirtualFunction()
{
	sterowanie = 1;
	xQueueSend(QueueSend,&sterowanie,0);
}
void Model::buttonDownVirtualFunction()
{
	sterowanie = 2;
	xQueueSend(QueueSend,&sterowanie,0);
}
void Model::buttonRightVirtualFunction()
{
	sterowanie = 3;
	xQueueSend(QueueSend,&sterowanie,0);
}
void Model::buttonLeftVirtualFunction()
{
	sterowanie = 4;
	xQueueSend(QueueSend,&sterowanie,0);
}
void Model::buttonRightRotationVirtualFunction()
{
	sterowanie = 5;
	xQueueSend(QueueSend,&sterowanie,0);
}
void Model::buttonLeftRotationVirtualFunction()
{
	sterowanie = 6;
	xQueueSend(QueueSend,&sterowanie,0);
}
void Model::buttonStopVirtualFunction()
{
	sterowanie = 7;
	xQueueSend(QueueSend,&sterowanie,0);
}
void Model::sliderVirtualFunction(int value)
{
	xQueueSend(QueueSendSliderValue,&value,0);
}

