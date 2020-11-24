/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler),
    sliderValueConfirmedCallback(this, &MainViewBase::sliderValueConfirmedCallbackHandler)
{
    imageBackground.setXY(0, 0);
    imageBackground.setBitmap(Bitmap(BITMAP_BACKGROUND_ID));

    buttonUp.setXY(295, 0);
    buttonUp.setBitmaps(Bitmap(BITMAP_BUTTON_UP_RELEASED_ID), Bitmap(BITMAP_BUTTON_UP_PRESSED_ID));
    buttonUp.setAction(buttonCallback);

    buttonLeft.setXY(240, 71);
    buttonLeft.setBitmaps(Bitmap(BITMAP_BUTTON_LEFT_RELEASED_ID), Bitmap(BITMAP_BUTTON_LEFT_PRESSED_ID));
    buttonLeft.setAction(buttonCallback);

    buttonRight.setXY(425, 71);
    buttonRight.setBitmaps(Bitmap(BITMAP_BUTTON_RIGHT_RELEASED_ID), Bitmap(BITMAP_BUTTON_RIGHT_PRESSED_ID));
    buttonRight.setAction(buttonCallback);

    buttonDown.setXY(295, 216);
    buttonDown.setBitmaps(Bitmap(BITMAP_BUTTON_DOWN_RELEASED_ID), Bitmap(BITMAP_BUTTON_DOWN_PRESSED_ID));
    buttonDown.setAction(buttonCallback);

    textArea.setXY(102, 6);
    textArea.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textArea.setLinespacing(0);
    Unicode::snprintf(textAreaBuffer, TEXTAREA_SIZE, "%s", TypedText(T_SINGLEUSEID2).getText());
    textArea.setWildcard(textAreaBuffer);
    textArea.resizeToCurrentText();
    textArea.setTypedText(TypedText(T_SINGLEUSEID1));

    buttonStop.setXY(300, 146);
    buttonStop.setBitmaps(Bitmap(BITMAP_ROUND_EDGE_ICON_BUTTON_STOP_ID), Bitmap(BITMAP_ROUND_EDGE_ICON_BUTTON_PRESSED_STOP_ID));
    buttonStop.setAction(buttonCallback);

    buttonLeftRotation.setXY(300, 71);
    buttonLeftRotation.setBitmaps(Bitmap(BITMAP_ROUND_LEFT_ROTATION_ID), Bitmap(BITMAP_ROUND_LEFT_ROTATION_PRESSED_ID));
    buttonLeftRotation.setAction(buttonCallback);

    buttonRightRoration.setXY(360, 71);
    buttonRightRoration.setBitmaps(Bitmap(BITMAP_ROUND_RIGHT_ROTATION_ID), Bitmap(BITMAP_ROUND_RIGHT_ROTATION_PRESSED_ID));
    buttonRightRoration.setAction(buttonCallback);

    slider.setXY(19, 81);
    slider.setBitmaps(Bitmap(BITMAP_BLUE_SLIDER_VERTICAL_SMALL_SLIDER3_VERTICAL_BACK_ID), Bitmap(BITMAP_BLUE_SLIDER_VERTICAL_SMALL_SLIDER3_VERTICAL_FILL_ID), Bitmap(BITMAP_BLUE_SLIDER_VERTICAL_SMALL_INDICATORS_SLIDER3_VERTICAL_NOB_ID));
    slider.setupVerticalSlider(7, 3, 0, 0, 125);
    slider.setValueRange(0, 2240);
    slider.setValue(0);
    slider.setStopValueCallback(sliderValueConfirmedCallback);

    textAreaSlider.setXY(5, 6);
    textAreaSlider.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textAreaSlider.setLinespacing(0);
    Unicode::snprintf(textAreaSliderBuffer, TEXTAREASLIDER_SIZE, "%s", TypedText(T_SINGLEUSEID13).getText());
    textAreaSlider.setWildcard(textAreaSliderBuffer);
    textAreaSlider.resizeToCurrentText();
    textAreaSlider.setTypedText(TypedText(T_SINGLEUSEID12));

    textAreaEncoderFR.setXY(175, 127);
    textAreaEncoderFR.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textAreaEncoderFR.setLinespacing(0);
    Unicode::snprintf(textAreaEncoderFRBuffer, TEXTAREAENCODERFR_SIZE, "%s", TypedText(T_SINGLEUSEID15).getText());
    textAreaEncoderFR.setWildcard(textAreaEncoderFRBuffer);
    textAreaEncoderFR.resizeToCurrentText();
    textAreaEncoderFR.setTypedText(TypedText(T_SINGLEUSEID14));

    textAreaEncoderFL.setXY(83, 127);
    textAreaEncoderFL.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textAreaEncoderFL.setLinespacing(0);
    Unicode::snprintf(textAreaEncoderFLBuffer, TEXTAREAENCODERFL_SIZE, "%s", TypedText(T_SINGLEUSEID17).getText());
    textAreaEncoderFL.setWildcard(textAreaEncoderFLBuffer);
    textAreaEncoderFL.resizeToCurrentText();
    textAreaEncoderFL.setTypedText(TypedText(T_SINGLEUSEID16));

    textAreaEncoderRL.setXY(83, 189);
    textAreaEncoderRL.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textAreaEncoderRL.setLinespacing(0);
    Unicode::snprintf(textAreaEncoderRLBuffer, TEXTAREAENCODERRL_SIZE, "%s", TypedText(T_SINGLEUSEID19).getText());
    textAreaEncoderRL.setWildcard(textAreaEncoderRLBuffer);
    textAreaEncoderRL.resizeToCurrentText();
    textAreaEncoderRL.setTypedText(TypedText(T_SINGLEUSEID18));

    textAreaEncoderRR.setXY(175, 189);
    textAreaEncoderRR.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textAreaEncoderRR.setLinespacing(0);
    Unicode::snprintf(textAreaEncoderRRBuffer, TEXTAREAENCODERRR_SIZE, "%s", TypedText(T_SINGLEUSEID21).getText());
    textAreaEncoderRR.setWildcard(textAreaEncoderRRBuffer);
    textAreaEncoderRR.resizeToCurrentText();
    textAreaEncoderRR.setTypedText(TypedText(T_SINGLEUSEID20));

    ikony_wlasne21.setXY(131, 136);
    ikony_wlasne21.setBitmap(Bitmap(BITMAP_IKONY_WLASNE2_ID));

    add(imageBackground);
    add(buttonUp);
    add(buttonLeft);
    add(buttonRight);
    add(buttonDown);
    add(textArea);
    add(buttonStop);
    add(buttonLeftRotation);
    add(buttonRightRoration);
    add(slider);
    add(textAreaSlider);
    add(textAreaEncoderFR);
    add(textAreaEncoderFL);
    add(textAreaEncoderRL);
    add(textAreaEncoderRR);
    add(ikony_wlasne21);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonUp)
    {
        //ButtonUp
        //When buttonUp clicked call virtual function
        //Call buttonUpVirtualFunction
        buttonUpVirtualFunction();
    }
    else if (&src == &buttonLeft)
    {
        //ButtonLeft
        //When buttonLeft clicked call virtual function
        //Call buttonLeftVirtualFunction
        buttonLeftVirtualFunction();
    }
    else if (&src == &buttonRight)
    {
        //ButtonRight
        //When buttonRight clicked call virtual function
        //Call buttonRightVirtualFunction
        buttonRightVirtualFunction();
    }
    else if (&src == &buttonDown)
    {
        //ButtonDown
        //When buttonDown clicked call virtual function
        //Call buttonDownVirtualFunction
        buttonDownVirtualFunction();
    }
    else if (&src == &buttonStop)
    {
        //ButtonStop
        //When buttonStop clicked call virtual function
        //Call buttonStopVirtualFunction
        buttonStopVirtualFunction();
    }
    else if (&src == &buttonLeftRotation)
    {
        //ButtonLeftRotation
        //When buttonLeftRotation clicked call virtual function
        //Call buttonLeftRotationVirtualFunction
        buttonLeftRotationVirtualFunction();
    }
    else if (&src == &buttonRightRoration)
    {
        //ButtonRightRotation
        //When buttonRightRoration clicked call virtual function
        //Call buttonRightRotationVirtualFunction
        buttonRightRotationVirtualFunction();
    }
}

void MainViewBase::sliderValueConfirmedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &slider)
    {
        //SliderFunction
        //When slider value confirmed call virtual function
        //Call sliderVirtualFunction
        sliderVirtualFunction(value);
    }
}
