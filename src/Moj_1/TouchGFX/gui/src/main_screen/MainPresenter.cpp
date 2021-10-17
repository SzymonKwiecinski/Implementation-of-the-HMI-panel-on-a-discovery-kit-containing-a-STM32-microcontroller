#include <gui/main_screen/MainView.hpp>
#include <gui/main_screen/MainPresenter.hpp>

MainPresenter::MainPresenter(MainView& v)
    : view(v)
{
}

void MainPresenter::activate()
{

}

void MainPresenter::deactivate()
{

}

void MainPresenter::SendUpPresenter()
{
	model->buttonUpVirtualFunction();
}
void MainPresenter::SendDownPresenter()
{
	model->buttonDownVirtualFunction();
}
void MainPresenter::SendRightPresenter()
{
	model->buttonRightVirtualFunction();
}
void MainPresenter::SendLeftPresenter()
{
	model->buttonLeftVirtualFunction();
}
void MainPresenter::SendRightRotationPresenter()
{
	model->buttonRightRotationVirtualFunction();
}
void MainPresenter::SendLeftRotationPresenter()
{
	model->buttonLeftRotationVirtualFunction();
}
void MainPresenter::SendStopPresenter()
{
	model->buttonStopVirtualFunction();
}
void MainPresenter::SendSliderCurrentValue(int value)
{
	model->sliderVirtualFunction(value);
}
void MainPresenter::DisplayConnectedStatus(uint8_t status)
{
	view.updateConnectedStatus(status);
}
void MainPresenter::DisplayEncoderValue(int encoderValueFR ,int encoderValueFL ,int encoderValueRR ,int encoderValueRL)
{
	view.updateEncoderValue(encoderValueFR,encoderValueFL,encoderValueRR,encoderValueRL);
}
