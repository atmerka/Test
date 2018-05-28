/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
FirstPluInAudioProcessorEditor::FirstPluInAudioProcessorEditor (FirstPluInAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);

	gainSlider.setRange(0.0, 1.0);
	gainSlider.setSliderStyle(Slider::LinearHorizontal);
	gainSlider.setValue(0.0);

	gainSlider.addListener(this);
	addAndMakeVisible(gainSlider);

	gainLabel.setText("gain", dontSendNotification);
	addAndMakeVisible(gainLabel);
}

FirstPluInAudioProcessorEditor::~FirstPluInAudioProcessorEditor()
{
}

//==============================================================================
void FirstPluInAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
   
}

void FirstPluInAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
	gainSlider.setBounds(20, 20, getWidth() - 100, 30);
}
void FirstPluInAudioProcessorEditor::sliderValueChanged(Slider*slider)
{
	if (slider == &gainSlider)
	{
		processor.gain = gainSlider.getValue();
	}
}
