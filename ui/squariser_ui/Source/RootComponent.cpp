/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 7.0.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "RootComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
RootComponent::RootComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    juce__slider.reset (new juce::Slider ("squaregain"));
    addAndMakeVisible (juce__slider.get());
    juce__slider->setRange (0, 10, 0);
    juce__slider->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    juce__slider->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 20);
    juce__slider->setColour (juce::Slider::thumbColourId, juce::Colour (0x9144c6b1));
    juce__slider->setColour (juce::Slider::trackColourId, juce::Colour (0xff656565));
    juce__slider->setColour (juce::Slider::rotarySliderFillColourId, juce::Colour (0xff656565));
    juce__slider->setColour (juce::Slider::rotarySliderOutlineColourId, juce::Colour (0xff656565));
    juce__slider->setColour (juce::Slider::textBoxTextColourId, juce::Colour (0xffa1a1a1));
    juce__slider->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x008e989b));
    juce__slider->addListener (this);

    juce__slider->setBounds (16, 88, 96, 96);

    juce__label.reset (new juce::Label ("new label",
                                        TRANS("Square Gain")));
    addAndMakeVisible (juce__label.get());
    juce__label->setFont (juce::Font (juce::Font::getDefaultMonospacedFontName(), 15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label->setJustificationType (juce::Justification::centred);
    juce__label->setEditable (false, false, false);
    juce__label->setColour (juce::Label::textColourId, juce::Colour (0xff44c6b1));
    juce__label->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label->setBounds (16, 64, 96, 24);

    juce__label2.reset (new juce::Label ("new label",
                                         TRANS("Subtract")));
    addAndMakeVisible (juce__label2.get());
    juce__label2->setFont (juce::Font (juce::Font::getDefaultMonospacedFontName(), 15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label2->setJustificationType (juce::Justification::centred);
    juce__label2->setEditable (false, false, false);
    juce__label2->setColour (juce::Label::textColourId, juce::Colour (0xff44c6b1));
    juce__label2->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label2->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label2->setBounds (120, 64, 96, 24);

    juce__label3.reset (new juce::Label ("new label",
                                         TRANS("Pulse Width")));
    addAndMakeVisible (juce__label3.get());
    juce__label3->setFont (juce::Font (juce::Font::getDefaultMonospacedFontName(), 15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label3->setJustificationType (juce::Justification::centred);
    juce__label3->setEditable (false, false, false);
    juce__label3->setColour (juce::Label::textColourId, juce::Colour (0xff44c6b1));
    juce__label3->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label3->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label3->setBounds (224, 64, 96, 24);

    juce__label4.reset (new juce::Label ("new label",
                                         TRANS("Dynamics")));
    addAndMakeVisible (juce__label4.get());
    juce__label4->setFont (juce::Font (juce::Font::getDefaultMonospacedFontName(), 15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label4->setJustificationType (juce::Justification::centred);
    juce__label4->setEditable (false, false, false);
    juce__label4->setColour (juce::Label::textColourId, juce::Colour (0xff44c6b1));
    juce__label4->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label4->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label4->setBounds (16, 200, 96, 24);

    juce__label5.reset (new juce::Label ("new label",
                                         TRANS("Window (ms)")));
    addAndMakeVisible (juce__label5.get());
    juce__label5->setFont (juce::Font (juce::Font::getDefaultMonospacedFontName(), 15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label5->setJustificationType (juce::Justification::centred);
    juce__label5->setEditable (false, false, false);
    juce__label5->setColour (juce::Label::textColourId, juce::Colour (0xff44c6b1));
    juce__label5->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label5->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label5->setBounds (120, 200, 96, 24);

    juce__label6.reset (new juce::Label ("new label",
                                         TRANS("Dry/Wet")));
    addAndMakeVisible (juce__label6.get());
    juce__label6->setFont (juce::Font (juce::Font::getDefaultMonospacedFontName(), 15.00f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label6->setJustificationType (juce::Justification::centred);
    juce__label6->setEditable (false, false, false);
    juce__label6->setColour (juce::Label::textColourId, juce::Colour (0xff44c6b1));
    juce__label6->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label6->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label6->setBounds (224, 200, 96, 24);

    juce__slider2.reset (new juce::Slider ("subtract"));
    addAndMakeVisible (juce__slider2.get());
    juce__slider2->setRange (0, 10, 0);
    juce__slider2->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    juce__slider2->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 20);
    juce__slider2->setColour (juce::Slider::thumbColourId, juce::Colour (0x9144c6b1));
    juce__slider2->setColour (juce::Slider::trackColourId, juce::Colour (0xff656565));
    juce__slider2->setColour (juce::Slider::rotarySliderFillColourId, juce::Colour (0xff656565));
    juce__slider2->setColour (juce::Slider::rotarySliderOutlineColourId, juce::Colour (0xff656565));
    juce__slider2->setColour (juce::Slider::textBoxTextColourId, juce::Colour (0xffa1a1a1));
    juce__slider2->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x008e989b));
    juce__slider2->addListener (this);

    juce__slider2->setBounds (120, 88, 96, 96);

    juce__slider3.reset (new juce::Slider ("pulsewidth"));
    addAndMakeVisible (juce__slider3.get());
    juce__slider3->setRange (0, 10, 0);
    juce__slider3->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    juce__slider3->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 20);
    juce__slider3->setColour (juce::Slider::backgroundColourId, juce::Colour (0xff6d8692));
    juce__slider3->setColour (juce::Slider::thumbColourId, juce::Colour (0x9144c6b1));
    juce__slider3->setColour (juce::Slider::rotarySliderFillColourId, juce::Colour (0xff656565));
    juce__slider3->setColour (juce::Slider::rotarySliderOutlineColourId, juce::Colour (0xff656565));
    juce__slider3->setColour (juce::Slider::textBoxTextColourId, juce::Colour (0xffa1a1a1));
    juce__slider3->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x008e989b));
    juce__slider3->addListener (this);

    juce__slider3->setBounds (224, 88, 96, 96);

    juce__slider4.reset (new juce::Slider ("dynamics"));
    addAndMakeVisible (juce__slider4.get());
    juce__slider4->setRange (0, 10, 0);
    juce__slider4->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    juce__slider4->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 20);
    juce__slider4->setColour (juce::Slider::thumbColourId, juce::Colour (0x9144c6b1));
    juce__slider4->setColour (juce::Slider::trackColourId, juce::Colour (0xff656565));
    juce__slider4->setColour (juce::Slider::rotarySliderFillColourId, juce::Colour (0xff656565));
    juce__slider4->setColour (juce::Slider::rotarySliderOutlineColourId, juce::Colour (0xff656565));
    juce__slider4->setColour (juce::Slider::textBoxTextColourId, juce::Colour (0xffa1a1a1));
    juce__slider4->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x008e989b));
    juce__slider4->addListener (this);

    juce__slider4->setBounds (16, 232, 96, 96);

    juce__slider5.reset (new juce::Slider ("dynamicswindow"));
    addAndMakeVisible (juce__slider5.get());
    juce__slider5->setRange (0, 10, 0);
    juce__slider5->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    juce__slider5->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 20);
    juce__slider5->setColour (juce::Slider::thumbColourId, juce::Colour (0x9144c6b1));
    juce__slider5->setColour (juce::Slider::trackColourId, juce::Colour (0xff656565));
    juce__slider5->setColour (juce::Slider::rotarySliderFillColourId, juce::Colour (0xff656565));
    juce__slider5->setColour (juce::Slider::rotarySliderOutlineColourId, juce::Colour (0xff656565));
    juce__slider5->setColour (juce::Slider::textBoxTextColourId, juce::Colour (0xffa1a1a1));
    juce__slider5->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x008e989b));
    juce__slider5->addListener (this);

    juce__slider5->setBounds (120, 232, 96, 96);

    juce__slider6.reset (new juce::Slider ("mix"));
    addAndMakeVisible (juce__slider6.get());
    juce__slider6->setRange (0, 10, 0);
    juce__slider6->setSliderStyle (juce::Slider::RotaryVerticalDrag);
    juce__slider6->setTextBoxStyle (juce::Slider::TextBoxBelow, false, 50, 20);
    juce__slider6->setColour (juce::Slider::thumbColourId, juce::Colour (0x9144c6b1));
    juce__slider6->setColour (juce::Slider::trackColourId, juce::Colour (0xff656565));
    juce__slider6->setColour (juce::Slider::rotarySliderFillColourId, juce::Colour (0xff656565));
    juce__slider6->setColour (juce::Slider::rotarySliderOutlineColourId, juce::Colour (0xff656565));
    juce__slider6->setColour (juce::Slider::textBoxTextColourId, juce::Colour (0xffa1a1a1));
    juce__slider6->setColour (juce::Slider::textBoxOutlineColourId, juce::Colour (0x008e989b));
    juce__slider6->addListener (this);

    juce__slider6->setBounds (224, 232, 96, 96);

    juce__label7.reset (new juce::Label ("new label",
                                         TRANS("Squariser")));
    addAndMakeVisible (juce__label7.get());
    juce__label7->setFont (juce::Font (juce::Font::getDefaultMonospacedFontName(), 27.20f, juce::Font::plain).withTypefaceStyle ("Regular"));
    juce__label7->setJustificationType (juce::Justification::centredRight);
    juce__label7->setEditable (false, false, false);
    juce__label7->setColour (juce::Label::textColourId, juce::Colour (0xff44c6b1));
    juce__label7->setColour (juce::TextEditor::textColourId, juce::Colours::black);
    juce__label7->setColour (juce::TextEditor::backgroundColourId, juce::Colour (0x00000000));

    juce__label7->setBounds (16, 16, 304, 32);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (340, 340);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

RootComponent::~RootComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    juce__slider = nullptr;
    juce__label = nullptr;
    juce__label2 = nullptr;
    juce__label3 = nullptr;
    juce__label4 = nullptr;
    juce__label5 = nullptr;
    juce__label6 = nullptr;
    juce__slider2 = nullptr;
    juce__slider3 = nullptr;
    juce__slider4 = nullptr;
    juce__slider5 = nullptr;
    juce__slider6 = nullptr;
    juce__label7 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void RootComponent::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff2b2b2b));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void RootComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void RootComponent::sliderValueChanged (juce::Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    if (processor == nullptr) return;
    RNBO::CoreObject& coreObject = processor->getRnboObject();
    auto parameters = processor->getParameters();
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == juce__slider.get())
    {
        //[UserSliderCode_juce__slider] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider]
    }
    else if (sliderThatWasMoved == juce__slider2.get())
    {
        //[UserSliderCode_juce__slider2] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider2]
    }
    else if (sliderThatWasMoved == juce__slider3.get())
    {
        //[UserSliderCode_juce__slider3] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider3]
    }
    else if (sliderThatWasMoved == juce__slider4.get())
    {
        //[UserSliderCode_juce__slider4] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider4]
    }
    else if (sliderThatWasMoved == juce__slider5.get())
    {
        //[UserSliderCode_juce__slider5] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider5]
    }
    else if (sliderThatWasMoved == juce__slider6.get())
    {
        //[UserSliderCode_juce__slider6] -- add your slider handling code here..
        //[/UserSliderCode_juce__slider6]
    }

    //[UsersliderValueChanged_Post]
    RNBO::ParameterIndex index = coreObject.getParameterIndexForID(sliderThatWasMoved->getName().toRawUTF8());
    if (index != -1) {
        const auto param = processor->getParameters()[index];
        auto newVal = sliderThatWasMoved->getValue();

        if (param && param->getValue() != newVal)
        {
            auto normalizedValue = coreObject.convertToNormalizedParameterValue(index, newVal);
            param->beginChangeGesture();
            param->setValueNotifyingHost(normalizedValue);
            param->endChangeGesture();
        }
    }
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void RootComponent::setAudioProcessor(RNBO::JuceAudioProcessor* p)
{
    processor = p;

    RNBO::ParameterInfo parameterInfo;
    RNBO::CoreObject& coreObject = processor->getRnboObject();

    for (unsigned long i = 0; i < coreObject.getNumParameters(); i++) {
        auto parameterName = coreObject.getParameterId(i);
        RNBO::ParameterValue value = coreObject.getParameterValue(i);
        Slider* slider = nullptr;
        if (juce::String(parameterName) == juce__slider.get()->getName()) {
            slider = juce__slider.get();
        }
        else if (juce::String(parameterName) == juce__slider2.get()->getName()) {
            slider = juce__slider2.get();
        }
        else if (juce::String(parameterName) == juce__slider3.get()->getName()) {
            slider = juce__slider3.get();
        }
        else if (juce::String(parameterName) == juce__slider4.get()->getName()) {
            slider = juce__slider4.get();
        }
        else if (juce::String(parameterName) == juce__slider5.get()->getName()) {
            slider = juce__slider5.get();
        }
        else if (juce::String(parameterName) == juce__slider6.get()->getName()) {
            slider = juce__slider6.get();
        }


        if (slider) {
            slidersByParameterIndex.set(i, slider);
            coreObject.getParameterInfo(i, &parameterInfo);
            slider->setRange(parameterInfo.min, parameterInfo.max);
            slider->setValue(value);
        }
    }
}

void RootComponent::updateSliderForParam(unsigned long index, double value)
{
    if (processor == nullptr) return;
    RNBO::CoreObject& coreObject = processor->getRnboObject();
    auto denormalizedValue = coreObject.convertFromNormalizedParameterValue(index, value);
    auto slider = slidersByParameterIndex.getReference((int)index);
    if (slider && (slider->getThumbBeingDragged() == -1)) {
        slider->setValue(denormalizedValue, NotificationType::dontSendNotification);
    }
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="RootComponent" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="340" initialHeight="340">
  <BACKGROUND backgroundColour="ff2b2b2b"/>
  <SLIDER name="squaregain" id="5035f7c3c3887b5f" memberName="juce__slider"
          virtualName="" explicitFocusOrder="0" pos="16 88 96 96" thumbcol="9144c6b1"
          trackcol="ff656565" rotarysliderfill="ff656565" rotaryslideroutline="ff656565"
          textboxtext="ffa1a1a1" textboxoutline="8e989b" min="0.0" max="10.0"
          int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="new label" id="cef46e51fb505dc1" memberName="juce__label"
         virtualName="" explicitFocusOrder="0" pos="16 64 96 24" textCol="ff44c6b1"
         edTextCol="ff000000" edBkgCol="0" labelText="Square Gain" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default monospaced font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="bd2a61c325cfd61b" memberName="juce__label2"
         virtualName="" explicitFocusOrder="0" pos="120 64 96 24" textCol="ff44c6b1"
         edTextCol="ff000000" edBkgCol="0" labelText="Subtract" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default monospaced font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="9c7f64cafc817b81" memberName="juce__label3"
         virtualName="" explicitFocusOrder="0" pos="224 64 96 24" textCol="ff44c6b1"
         edTextCol="ff000000" edBkgCol="0" labelText="Pulse Width" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default monospaced font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="495f92c41b0cabf7" memberName="juce__label4"
         virtualName="" explicitFocusOrder="0" pos="16 200 96 24" textCol="ff44c6b1"
         edTextCol="ff000000" edBkgCol="0" labelText="Dynamics" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default monospaced font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="e579485c1d738b8b" memberName="juce__label5"
         virtualName="" explicitFocusOrder="0" pos="120 200 96 24" textCol="ff44c6b1"
         edTextCol="ff000000" edBkgCol="0" labelText="Window (ms)" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default monospaced font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <LABEL name="new label" id="acc76204c57ff657" memberName="juce__label6"
         virtualName="" explicitFocusOrder="0" pos="224 200 96 24" textCol="ff44c6b1"
         edTextCol="ff000000" edBkgCol="0" labelText="Dry/Wet" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default monospaced font"
         fontsize="15.0" kerning="0.0" bold="0" italic="0" justification="36"/>
  <SLIDER name="subtract" id="ed3e0bf4edebaa39" memberName="juce__slider2"
          virtualName="" explicitFocusOrder="0" pos="120 88 96 96" thumbcol="9144c6b1"
          trackcol="ff656565" rotarysliderfill="ff656565" rotaryslideroutline="ff656565"
          textboxtext="ffa1a1a1" textboxoutline="8e989b" min="0.0" max="10.0"
          int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="pulsewidth" id="37260e716e74d7c9" memberName="juce__slider3"
          virtualName="" explicitFocusOrder="0" pos="224 88 96 96" bkgcol="ff6d8692"
          thumbcol="9144c6b1" rotarysliderfill="ff656565" rotaryslideroutline="ff656565"
          textboxtext="ffa1a1a1" textboxoutline="8e989b" min="0.0" max="10.0"
          int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="dynamics" id="2c2a1a5238f64e87" memberName="juce__slider4"
          virtualName="" explicitFocusOrder="0" pos="16 232 96 96" thumbcol="9144c6b1"
          trackcol="ff656565" rotarysliderfill="ff656565" rotaryslideroutline="ff656565"
          textboxtext="ffa1a1a1" textboxoutline="8e989b" min="0.0" max="10.0"
          int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="dynamicswindow" id="b14dd9bf0559b854" memberName="juce__slider5"
          virtualName="" explicitFocusOrder="0" pos="120 232 96 96" thumbcol="9144c6b1"
          trackcol="ff656565" rotarysliderfill="ff656565" rotaryslideroutline="ff656565"
          textboxtext="ffa1a1a1" textboxoutline="8e989b" min="0.0" max="10.0"
          int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <SLIDER name="mix" id="ed3ec93cc4ad9823" memberName="juce__slider6" virtualName=""
          explicitFocusOrder="0" pos="224 232 96 96" thumbcol="9144c6b1"
          trackcol="ff656565" rotarysliderfill="ff656565" rotaryslideroutline="ff656565"
          textboxtext="ffa1a1a1" textboxoutline="8e989b" min="0.0" max="10.0"
          int="0.0" style="RotaryVerticalDrag" textBoxPos="TextBoxBelow"
          textBoxEditable="1" textBoxWidth="50" textBoxHeight="20" skewFactor="1.0"
          needsCallback="1"/>
  <LABEL name="new label" id="ddda56ac7a2c72d1" memberName="juce__label7"
         virtualName="" explicitFocusOrder="0" pos="16 16 304 32" textCol="ff44c6b1"
         edTextCol="ff000000" edBkgCol="0" labelText="Squariser" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default monospaced font"
         fontsize="27.2" kerning="0.0" bold="0" italic="0" justification="34"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

