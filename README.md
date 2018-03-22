# MacSystemConsoleLogger4JUCE
A small &amp; simple JUCE-module that inherits from juce::Logger and redirects Log messages to NSLog. This will make them appear in the OS X Console.app


To use it just add a private `MacSystemConsoleLogger macSystemConsoleLogger;` to your JUCEApplication class and add the line `Logger::setCurrentLogger (&macSystemConsoleLogger);` to the constructor. Now `Logger::writeToLog ("foo")` will result in an output of that string to the OS X Log that might be viewed through your system's Console.app and to the XCode console while running in the IDE. For fallback compatibility, it will invoke an output to stderr on all other platforms.

On destruction, the instance will check if it's still the current Logger. If that's true, it will automatically reassign a nullptr to the current Logger so that it falls back into it's default state. If you changed to another logger during the MacSystemConsoleLogger's lifetime, nothing will happen.
