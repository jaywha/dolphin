// Copyright 2018 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include <QWidget>

class QCheckBox;
class QLineEdit;
class QPushButton;

class SearchBar : public QWidget
{
  Q_OBJECT
public:
  explicit SearchBar(QWidget* parent = nullptr);

  void Toggle();
signals:
  void Search(const QString& serach);

private:
  void CreateWidgets();
  void ConnectWidgets();

  QLineEdit* m_search_edit;
  QCheckBox* m_wii_check;
  QCheckBox* m_gc_check;
  QPushButton* m_close_button;
};
