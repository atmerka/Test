/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class FirstPluInAudioProcessorEditor  : public AudioProcessorEditor
, public Slider::Listener
{
public:
    FirstPluInAudioProcessorEditor (FirstPluInAudioProcessor&);
    ~FirstPluInAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    FirstPluInAudioProcessor& processor;


	void sliderValueChanged(Slider* slider) override;
	Slider gainSlider;
	Label gainLabel;
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FirstPluInAudioProcessorEditor)
};
