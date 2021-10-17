#ifndef MAIN_VIEW_HPP
#define MAIN_VIEW_HPP

#include <gui_generated/main_screen/MainViewBase.hpp>
#include <gui/main_screen/MainPresenter.hpp>

class MainView : public MainViewBase
{
public:
    MainView();
    virtual ~MainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void buttonUpVirtualFunction();
    virtual void buttonDownVirtualFunction();
    virtual void buttonLeftVirtualFunction();
    virtual void buttonRightVirtualFunction();
    virtual void buttonStopVirtualFunction();
    virtual void buttonRightRotationVirtualFunction();
    virtual void buttonLeftRotationVirtualFunction();
    virtual void sliderVirtualFunction(int value);



    void updateConnectedStatus(uint8_t status);
    void updateEncoderValue(int encoderValueFR ,int encoderValueFL ,int encoderValueRR ,int encoderValueRL);

protected:
};

#endif // MAIN_VIEW_HPP
