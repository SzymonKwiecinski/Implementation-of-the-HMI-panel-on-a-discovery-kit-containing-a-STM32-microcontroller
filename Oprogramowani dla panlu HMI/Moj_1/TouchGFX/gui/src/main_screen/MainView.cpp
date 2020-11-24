#include <gui/main_screen/MainView.hpp>



MainView::MainView()
{

}

uint16_t tabON[]={'O','N','\0'};
uint16_t tabOFF[]={'O','F','F','\0'};
void MainView::setupScreen()
{
    MainViewBase::setupScreen();
}
void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}
void MainView::buttonUpVirtualFunction()
{
	presenter->SendUpPresenter();
}
void MainView::buttonDownVirtualFunction()
{
	presenter->SendDownPresenter();
}
void MainView::buttonLeftVirtualFunction()
{
	presenter->SendLeftPresenter();
}
void MainView::buttonRightVirtualFunction()
{
	presenter->SendRightPresenter();
}
void MainView::buttonLeftRotationVirtualFunction()
{
	presenter->SendLeftRotationPresenter();
}
void MainView::buttonRightRotationVirtualFunction()
{
	presenter->SendRightRotationPresenter();
}
void MainView::buttonStopVirtualFunction()
{
	presenter->SendStopPresenter();
}
void MainView::sliderVirtualFunction(int value)
{
	presenter->SendSliderCurrentValue(value);
	Unicode::snprintf(textAreaSliderBuffer,TEXTAREASLIDER_SIZE,"%d",value);
	textAreaSlider.invalidate();
	value = 0x0000;
}

void MainView::updateConnectedStatus(uint8_t status)
{
	if(status == 1)
	{
		Unicode::snprintf(textAreaBuffer,TEXTAREA_SIZE,"%s",tabON);
		textArea.resizeToCurrentText();
		textArea.invalidate();
	}
	if(status == 0)
	{
		Unicode::snprintf(textAreaBuffer,TEXTAREA_SIZE,"%s",tabOFF);
		textArea.resizeToCurrentText();
		textArea.invalidate();
	}

}
void MainView::updateEncoderValue(int encoderValueFR ,int encoderValueFL ,int encoderValueRR ,int encoderValueRL)
{
	Unicode::snprintf(textAreaEncoderFRBuffer,TEXTAREAENCODERFR_SIZE,"%d",encoderValueFR);
	Unicode::snprintf(textAreaEncoderFLBuffer,TEXTAREAENCODERFL_SIZE,"%d",encoderValueFL);
	Unicode::snprintf(textAreaEncoderRRBuffer,TEXTAREAENCODERRR_SIZE,"%d",encoderValueRR);
	Unicode::snprintf(textAreaEncoderRLBuffer,TEXTAREAENCODERRL_SIZE,"%d",encoderValueRL);
	textAreaEncoderFR.invalidate();
	textAreaEncoderFL.invalidate();
	textAreaEncoderRR.invalidate();
	textAreaEncoderRL.invalidate();
}
