/*
MIT License

Copyright (c) 2018 Janos Buttgereit

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*
  ==============================================================================

  BEGIN_JUCE_MODULE_DECLARATION
 
  ID:            mac_system_console_logger
  vendor:        Janos Buttgereit
  version:       1.0.0
  name:          MacSystemConsoleLogger
  description:   Logs to the Mac OS Console.app
  dependencies:  juce_core
  website:       www.github.com/janosgit
  license:       MIT

  END_JUCE_MODULE_DECLARATION
 
 ==============================================================================
 */

#pragma once

#include <juce_core/juce_core.h>

/** 
 * If this logger is set active, all Logger::writeToLog 
 * calls will result in an output to the OS X log. 
 */
class MacSystemConsoleLogger : public juce::Logger {
    
public:
    
    /**
     * The destructor will automatically reset the current logger to default if
     * this one is still assigned as the current logger.
     */
    ~MacSystemConsoleLogger();

    void logMessage (const juce::String &message) override;
};
