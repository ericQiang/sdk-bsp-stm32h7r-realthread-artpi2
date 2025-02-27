/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef ANIMATIONBUTTON_SCREENTRANSITIONBASE_HPP
#define ANIMATIONBUTTON_SCREENTRANSITIONBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextureMapper.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/FadeAnimator.hpp>

class animationButton_ScreenTransitionBase : public touchgfx::Container
{
public:
    animationButton_ScreenTransitionBase();
    virtual ~animationButton_ScreenTransitionBase();
    virtual void initialize();

    /*
     * Custom Trigger Callback Setters
     */
    void setButtonPressedCallback(touchgfx::GenericCallback<bool>& callback)
    {
        this->buttonPressedCallback = &callback;
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Custom Trigger Emitters
     */
    virtual void emitButtonPressedCallback(bool value)
    {
        if (buttonPressedCallback && buttonPressedCallback->isValid())
        {
            this->buttonPressedCallback->execute( value);
        }
    }

    /*
     * Member Declarations
     */
    touchgfx::TextureMapper backgroundAnimationSpeed;
    touchgfx::TextureMapper needleAnimationSpeed;
    touchgfx::TextureMapper sliderAnimationSpeed;
    touchgfx::FadeAnimator< touchgfx::TextArea > speedText;

private:

    /*
     * Custom Trigger Callback Declarations
     */
    touchgfx::GenericCallback<bool>* buttonPressedCallback;

};

#endif // ANIMATIONBUTTON_SCREENTRANSITIONBASE_HPP
