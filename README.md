# MacSystemConsoleLogger4JUCE
A small &amp; simple JUCE-module that subclasses juce::Logger and redirects Log messages to NSLog. This will make them appear in the OS X Console.app


To use it just add a private `ScopedPointer<MacSystemConsoleLogger> macSystemConsoleLogger` to your JUCEApplication class and add the line `Logger::setCurrentLogger(macSystemConsoleLogger = new MacSystemConsoleLogger);` to the constructor. Now `Logger::writeToLog ("foo")` will result in an output to the OS X log. For fallback compatibility, it will invoke an output to stderr on all other platforms.
