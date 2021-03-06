/*=========================================================================

  Library:   CTK

  Copyright (c) Kitware Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0.txt

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=========================================================================*/

// CTK includes
#include "ctkDynamicSpacerPlugin.h"
#include "ctkDynamicSpacer.h"

// --------------------------------------------------------------------------
ctkDynamicSpacerPlugin::ctkDynamicSpacerPlugin(QObject *_parent)
  : QObject(_parent)
{
}

// --------------------------------------------------------------------------
QWidget *ctkDynamicSpacerPlugin::createWidget(QWidget *_parent)
{
  ctkDynamicSpacer* _widget = new ctkDynamicSpacer(_parent);
  return _widget;
}

// --------------------------------------------------------------------------
QString ctkDynamicSpacerPlugin::domXml() const
{
  return "<widget class=\"ctkDynamicSpacer\" name=\"DynamicSpacer\">\n"
    "</widget>\n";
}

// --------------------------------------------------------------------------
QIcon ctkDynamicSpacerPlugin::icon() const
{
  return QIcon(":/Icons/vspacer.png");
}

// --------------------------------------------------------------------------
QString ctkDynamicSpacerPlugin::includeFile() const
{
  return "ctkDynamicSpacer.h";
}

// --------------------------------------------------------------------------
bool ctkDynamicSpacerPlugin::isContainer() const
{
  return false;
}

// --------------------------------------------------------------------------
QString ctkDynamicSpacerPlugin::name() const
{
  return "ctkDynamicSpacer";
}
