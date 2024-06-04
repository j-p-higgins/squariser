# Squariser

This is a simple audio plugin made with RNBO and a UI in JUCE that turns anything you run through it into square waves. Warning, it gets LOUD!

## Parameters
- Square Gain: the peak level of the square waves, by default this is low to avoid jumpscares.
- Subtract: this subtracts the original signal from the square waves, this works similar to a basic wave folder.
- Pulsewidth: this adjusts the threshold for what is set positive or negative. On a full range signal like a sine wave generator this works like a pulsewidth control. For more dynamic material this gates out quieter parts of the signal. (This process generates a lot of DC, this is filtered out by the plugin but wiggling the slider about may cause some clicks of pops.)
- Dynamics: this introduces some dynamics back into the signal by applying an envelope follower (using RMS levels) from the original input signal.
- Window: this is the window size for the dynamics RMS envelope. Shorter times will produce dynamics closer to the original signal, slow times will produce interesting and weird pumping effects.
- Dry/Wet: mix control between your original input and the squariser output.


