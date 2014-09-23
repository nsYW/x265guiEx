﻿//  -----------------------------------------------------------------------------------------
//    拡張 x264/x265 出力(GUI) Ex  v1.xx/2.xx/3.xx by rigaya
//  -----------------------------------------------------------------------------------------
//   ソースコードについて
//   ・無保証です。
//   ・本ソースコードを使用したことによるいかなる損害・トラブルについてrigayaは責任を負いません。
//   以上に了解して頂ける場合、本ソースコードの使用、複製、改変、再頒布を行って頂いて構いません。
//  -----------------------------------------------------------------------------------------

#pragma once

#include "auo_version.h"
#include "auo_settings.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace x265guiEx {

	/// <summary>
	/// frmOtherSettings の概要
	///
	/// 警告: このクラスの名前を変更する場合、このクラスが依存するすべての .resx ファイルに関連付けられた
	///          マネージ リソース コンパイラ ツールに対して 'Resource File Name' プロパティを
	///          変更する必要があります。この変更を行わないと、
	///          デザイナと、このフォームに関連付けられたローカライズ済みリソースとが、
	///          正しく相互に利用できなくなります。
	/// </summary>
	public ref class frmOtherSettings : public System::Windows::Forms::Form
	{
	public:
		frmOtherSettings(void)
		{
			fos_ex_stg = new guiEx_settings(TRUE);
			InitializeComponent();
			//
			//TODO: ここにコンストラクタ コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~frmOtherSettings()
		{
			if (components)
			{
				delete components;
			}
			delete fos_ex_stg;
		}
	private:
		guiEx_settings *fos_ex_stg;
		static frmOtherSettings^ _instance;
	public:
		static String^ stgDir;
		static int useLastExt;

	protected: 
	private: System::Windows::Forms::Button^  fosCBCancel;
	private: System::Windows::Forms::Button^  fosCBOK;



	private: System::Windows::Forms::CheckBox^  fosCBAutoAFSDisable;






	private: System::Windows::Forms::CheckBox^  fosCBAutoDelChap;


	private: System::Windows::Forms::FontDialog^  fosfontDialog;

	private: System::Windows::Forms::TabControl^  fosTabControl;
	private: System::Windows::Forms::TabPage^  fostabPageGeneral;
	private: System::Windows::Forms::TabPage^  fostabPageAMP;
	private: System::Windows::Forms::GroupBox^  fosGroupBoxAMPLimit;
	private: System::Windows::Forms::CheckBox^  fosCBAmpKeepOldFile;
	private: System::Windows::Forms::TrackBar^  fosTBAMPLimitMarginMulti;

	private: System::Windows::Forms::NumericUpDown^  fosNUAMPLimitMargin;
	private: System::Windows::Forms::Label^  fosLBAMPLimitMarginMax;

	private: System::Windows::Forms::Label^  fosLBAMPLimitMarginMin;
	private: System::Windows::Forms::GroupBox^  fosGroupBoxAMPLimitMarginExample;
	private: System::Windows::Forms::Label^  fosLBAMPLimitMarginInfo;
	private: System::Windows::Forms::Label^  fosLBAMPLMMExampleA11;
	private: System::Windows::Forms::Label^  fosLBAMPLMMExampleB32;


	private: System::Windows::Forms::Label^  fosLBAMPLMMExampleB22;
	private: System::Windows::Forms::Label^  fosLBAMPLMMExampleB31;


	private: System::Windows::Forms::Label^  fosLBAMPLMMExampleB21;

	private: System::Windows::Forms::Label^  fosLBAMPLMMExampleB12;

	private: System::Windows::Forms::Label^  fosLBAMPLMMExampleB11;

	private: System::Windows::Forms::Label^  fosLBAMPLMMExampleA12;

	private: System::Windows::Forms::Button^  fosBTAMPMarginMulti;
	private: System::Windows::Forms::Label^  fosLBAMPLimitMarginWarning;
	private: System::Windows::Forms::CheckBox^  fosCBAutoDelStats;

	private: System::Windows::Forms::Label^  fosLBDefaultOutExt;
	private: System::Windows::Forms::Label^  fosLBDefaultOutExt2;
	private: System::Windows::Forms::ComboBox^  fosCXDefaultOutExt;
	private: System::Windows::Forms::CheckBox^  fosCBRunBatMinimized;
	private: System::Windows::Forms::CheckBox^  fosCBKeepQPFile;
	private: System::Windows::Forms::CheckBox^  fosCBDisableX265VersionCheck;
	private: System::Windows::Forms::TabPage^  fostabPageGUI;
	private: System::Windows::Forms::CheckBox^  fosCBGetRelativePath;
	private: System::Windows::Forms::Button^  fosBTSetFont;
	private: System::Windows::Forms::CheckBox^  fosCBStgEscKey;
	private: System::Windows::Forms::CheckBox^  fosCBDisableToolTip;
	private: System::Windows::Forms::CheckBox^  fosCBDisableVisualStyles;
	private: System::Windows::Forms::CheckBox^  fosCBLogDisableTransparency;
	private: System::Windows::Forms::Label^  fosLBDisableVisualStyles;
	private: System::Windows::Forms::CheckBox^  fosCBLogStartMinimized;
	private: System::Windows::Forms::Label^  fosLBStgDir;
	private: System::Windows::Forms::Button^  fosBTStgDir;
	private: System::Windows::Forms::TextBox^  fosTXStgDir;
	private: System::Windows::Forms::CheckBox^  fosCBChapConvertToUTF8;
	private: System::Windows::Forms::CheckBox^  fosCBAutoRefLimitByLevel;
private: System::Windows::Forms::ComboBox^  fosCXDefaultAudioEncoder;
private: System::Windows::Forms::Label^  fosLBDefaultAudioEncoder;
private: System::Windows::Forms::CheckBox^  fosCBWineCompat;
private: System::Windows::Forms::CheckBox^  fosCBOutputMoreLog;















	public: 

	public:
		static property frmOtherSettings^ Instance {
			frmOtherSettings^ get() {
				if (_instance == nullptr || _instance->IsDisposed)
					_instance = gcnew frmOtherSettings();
				return _instance;
			}
		}


	private:
		/// <summary>
		/// 必要なデザイナ変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナ サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディタで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->fosCBCancel = (gcnew System::Windows::Forms::Button());
			this->fosCBOK = (gcnew System::Windows::Forms::Button());
			this->fosCBAutoAFSDisable = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBAutoDelChap = (gcnew System::Windows::Forms::CheckBox());
			this->fosfontDialog = (gcnew System::Windows::Forms::FontDialog());
			this->fosTabControl = (gcnew System::Windows::Forms::TabControl());
			this->fostabPageGeneral = (gcnew System::Windows::Forms::TabPage());
			this->fosCXDefaultAudioEncoder = (gcnew System::Windows::Forms::ComboBox());
			this->fosLBDefaultAudioEncoder = (gcnew System::Windows::Forms::Label());
			this->fosCBAutoRefLimitByLevel = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBChapConvertToUTF8 = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBDisableX265VersionCheck = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBKeepQPFile = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBRunBatMinimized = (gcnew System::Windows::Forms::CheckBox());
			this->fosLBDefaultOutExt2 = (gcnew System::Windows::Forms::Label());
			this->fosCXDefaultOutExt = (gcnew System::Windows::Forms::ComboBox());
			this->fosLBDefaultOutExt = (gcnew System::Windows::Forms::Label());
			this->fostabPageGUI = (gcnew System::Windows::Forms::TabPage());
			this->fosCBWineCompat = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBGetRelativePath = (gcnew System::Windows::Forms::CheckBox());
			this->fosBTSetFont = (gcnew System::Windows::Forms::Button());
			this->fosCBStgEscKey = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBDisableToolTip = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBDisableVisualStyles = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBLogDisableTransparency = (gcnew System::Windows::Forms::CheckBox());
			this->fosLBDisableVisualStyles = (gcnew System::Windows::Forms::Label());
			this->fosCBLogStartMinimized = (gcnew System::Windows::Forms::CheckBox());
			this->fosLBStgDir = (gcnew System::Windows::Forms::Label());
			this->fosBTStgDir = (gcnew System::Windows::Forms::Button());
			this->fosTXStgDir = (gcnew System::Windows::Forms::TextBox());
			this->fostabPageAMP = (gcnew System::Windows::Forms::TabPage());
			this->fosCBAutoDelStats = (gcnew System::Windows::Forms::CheckBox());
			this->fosGroupBoxAMPLimit = (gcnew System::Windows::Forms::GroupBox());
			this->fosLBAMPLimitMarginWarning = (gcnew System::Windows::Forms::Label());
			this->fosBTAMPMarginMulti = (gcnew System::Windows::Forms::Button());
			this->fosGroupBoxAMPLimitMarginExample = (gcnew System::Windows::Forms::GroupBox());
			this->fosLBAMPLMMExampleB32 = (gcnew System::Windows::Forms::Label());
			this->fosLBAMPLMMExampleB22 = (gcnew System::Windows::Forms::Label());
			this->fosLBAMPLMMExampleB31 = (gcnew System::Windows::Forms::Label());
			this->fosLBAMPLMMExampleB21 = (gcnew System::Windows::Forms::Label());
			this->fosLBAMPLMMExampleB12 = (gcnew System::Windows::Forms::Label());
			this->fosLBAMPLMMExampleB11 = (gcnew System::Windows::Forms::Label());
			this->fosLBAMPLMMExampleA12 = (gcnew System::Windows::Forms::Label());
			this->fosLBAMPLMMExampleA11 = (gcnew System::Windows::Forms::Label());
			this->fosLBAMPLimitMarginInfo = (gcnew System::Windows::Forms::Label());
			this->fosNUAMPLimitMargin = (gcnew System::Windows::Forms::NumericUpDown());
			this->fosLBAMPLimitMarginMax = (gcnew System::Windows::Forms::Label());
			this->fosLBAMPLimitMarginMin = (gcnew System::Windows::Forms::Label());
			this->fosTBAMPLimitMarginMulti = (gcnew System::Windows::Forms::TrackBar());
			this->fosCBAmpKeepOldFile = (gcnew System::Windows::Forms::CheckBox());
			this->fosCBOutputMoreLog = (gcnew System::Windows::Forms::CheckBox());
			this->fosTabControl->SuspendLayout();
			this->fostabPageGeneral->SuspendLayout();
			this->fostabPageGUI->SuspendLayout();
			this->fostabPageAMP->SuspendLayout();
			this->fosGroupBoxAMPLimit->SuspendLayout();
			this->fosGroupBoxAMPLimitMarginExample->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fosNUAMPLimitMargin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fosTBAMPLimitMarginMulti))->BeginInit();
			this->SuspendLayout();
			// 
			// fosCBCancel
			// 
			this->fosCBCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->fosCBCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->fosCBCancel->Location = System::Drawing::Point(171, 407);
			this->fosCBCancel->Name = L"fosCBCancel";
			this->fosCBCancel->Size = System::Drawing::Size(84, 29);
			this->fosCBCancel->TabIndex = 1;
			this->fosCBCancel->Text = L"キャンセル";
			this->fosCBCancel->UseVisualStyleBackColor = true;
			this->fosCBCancel->Click += gcnew System::EventHandler(this, &frmOtherSettings::fosCBCancel_Click);
			// 
			// fosCBOK
			// 
			this->fosCBOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->fosCBOK->Location = System::Drawing::Point(283, 407);
			this->fosCBOK->Name = L"fosCBOK";
			this->fosCBOK->Size = System::Drawing::Size(84, 29);
			this->fosCBOK->TabIndex = 2;
			this->fosCBOK->Text = L"OK";
			this->fosCBOK->UseVisualStyleBackColor = true;
			this->fosCBOK->Click += gcnew System::EventHandler(this, &frmOtherSettings::fosCBOK_Click);
			// 
			// fosCBAutoAFSDisable
			// 
			this->fosCBAutoAFSDisable->Location = System::Drawing::Point(16, 139);
			this->fosCBAutoAFSDisable->Name = L"fosCBAutoAFSDisable";
			this->fosCBAutoAFSDisable->Size = System::Drawing::Size(308, 53);
			this->fosCBAutoAFSDisable->TabIndex = 6;
			this->fosCBAutoAFSDisable->Text = L"自動フィールドシフト(afs)オンで初期化に失敗した場合、afsをオフにしてエンコード続行を試みる";
			this->fosCBAutoAFSDisable->UseVisualStyleBackColor = true;
			// 
			// fosCBAutoDelChap
			// 
			this->fosCBAutoDelChap->AutoSize = true;
			this->fosCBAutoDelChap->Location = System::Drawing::Point(16, 198);
			this->fosCBAutoDelChap->Name = L"fosCBAutoDelChap";
			this->fosCBAutoDelChap->Size = System::Drawing::Size(295, 19);
			this->fosCBAutoDelChap->TabIndex = 7;
			this->fosCBAutoDelChap->Text = L"mux正常終了後、チャプターファイルを自動的に削除する";
			this->fosCBAutoDelChap->UseVisualStyleBackColor = true;
			// 
			// fosfontDialog
			// 
			this->fosfontDialog->AllowVerticalFonts = false;
			this->fosfontDialog->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fosfontDialog->FontMustExist = true;
			this->fosfontDialog->MaxSize = 9;
			this->fosfontDialog->MinSize = 9;
			this->fosfontDialog->ShowEffects = false;
			// 
			// fosTabControl
			// 
			this->fosTabControl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->fosTabControl->Controls->Add(this->fostabPageGeneral);
			this->fosTabControl->Controls->Add(this->fostabPageGUI);
			this->fosTabControl->Controls->Add(this->fostabPageAMP);
			this->fosTabControl->Location = System::Drawing::Point(1, 1);
			this->fosTabControl->Name = L"fosTabControl";
			this->fosTabControl->SelectedIndex = 0;
			this->fosTabControl->Size = System::Drawing::Size(392, 400);
			this->fosTabControl->TabIndex = 17;
			// 
			// fostabPageGeneral
			// 
			this->fostabPageGeneral->Controls->Add(this->fosCXDefaultAudioEncoder);
			this->fostabPageGeneral->Controls->Add(this->fosLBDefaultAudioEncoder);
			this->fostabPageGeneral->Controls->Add(this->fosCBAutoRefLimitByLevel);
			this->fostabPageGeneral->Controls->Add(this->fosCBChapConvertToUTF8);
			this->fostabPageGeneral->Controls->Add(this->fosCBDisableX265VersionCheck);
			this->fostabPageGeneral->Controls->Add(this->fosCBKeepQPFile);
			this->fostabPageGeneral->Controls->Add(this->fosCBRunBatMinimized);
			this->fostabPageGeneral->Controls->Add(this->fosLBDefaultOutExt2);
			this->fostabPageGeneral->Controls->Add(this->fosCXDefaultOutExt);
			this->fostabPageGeneral->Controls->Add(this->fosLBDefaultOutExt);
			this->fostabPageGeneral->Controls->Add(this->fosCBAutoAFSDisable);
			this->fostabPageGeneral->Controls->Add(this->fosCBAutoDelChap);
			this->fostabPageGeneral->Location = System::Drawing::Point(4, 24);
			this->fostabPageGeneral->Name = L"fostabPageGeneral";
			this->fostabPageGeneral->Padding = System::Windows::Forms::Padding(3);
			this->fostabPageGeneral->Size = System::Drawing::Size(384, 372);
			this->fostabPageGeneral->TabIndex = 0;
			this->fostabPageGeneral->Text = L"エンコード設定";
			this->fostabPageGeneral->UseVisualStyleBackColor = true;
			// 
			// fosCXDefaultAudioEncoder
			// 
			this->fosCXDefaultAudioEncoder->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->fosCXDefaultAudioEncoder->FormattingEnabled = true;
			this->fosCXDefaultAudioEncoder->Location = System::Drawing::Point(40, 103);
			this->fosCXDefaultAudioEncoder->Name = L"fosCXDefaultAudioEncoder";
			this->fosCXDefaultAudioEncoder->Size = System::Drawing::Size(190, 23);
			this->fosCXDefaultAudioEncoder->TabIndex = 21;
			// 
			// fosLBDefaultAudioEncoder
			// 
			this->fosLBDefaultAudioEncoder->AutoSize = true;
			this->fosLBDefaultAudioEncoder->Location = System::Drawing::Point(13, 80);
			this->fosLBDefaultAudioEncoder->Name = L"fosLBDefaultAudioEncoder";
			this->fosLBDefaultAudioEncoder->Size = System::Drawing::Size(130, 15);
			this->fosLBDefaultAudioEncoder->TabIndex = 20;
			this->fosLBDefaultAudioEncoder->Text = L"デフォルトの音声エンコーダ";
			// 
			// fosCBAutoRefLimitByLevel
			// 
			this->fosCBAutoRefLimitByLevel->AutoSize = true;
			this->fosCBAutoRefLimitByLevel->Location = System::Drawing::Point(16, 307);
			this->fosCBAutoRefLimitByLevel->Name = L"fosCBAutoRefLimitByLevel";
			this->fosCBAutoRefLimitByLevel->Size = System::Drawing::Size(283, 19);
			this->fosCBAutoRefLimitByLevel->TabIndex = 19;
			this->fosCBAutoRefLimitByLevel->Text = L"参照距離をH.264のレベルに応じて自動的に制限する";
			this->fosCBAutoRefLimitByLevel->UseVisualStyleBackColor = true;
			// 
			// fosCBChapConvertToUTF8
			// 
			this->fosCBChapConvertToUTF8->AutoSize = true;
			this->fosCBChapConvertToUTF8->Location = System::Drawing::Point(16, 280);
			this->fosCBChapConvertToUTF8->Name = L"fosCBChapConvertToUTF8";
			this->fosCBChapConvertToUTF8->Size = System::Drawing::Size(204, 19);
			this->fosCBChapConvertToUTF8->TabIndex = 18;
			this->fosCBChapConvertToUTF8->Text = L"チャプターmux時、UTF-8に変換する";
			this->fosCBChapConvertToUTF8->UseVisualStyleBackColor = true;
			// 
			// fosCBDisableX265VersionCheck
			// 
			this->fosCBDisableX265VersionCheck->AutoSize = true;
			this->fosCBDisableX265VersionCheck->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->fosCBDisableX265VersionCheck->Location = System::Drawing::Point(16, 337);
			this->fosCBDisableX265VersionCheck->Name = L"fosCBDisableX265VersionCheck";
			this->fosCBDisableX265VersionCheck->Size = System::Drawing::Size(263, 19);
			this->fosCBDisableX265VersionCheck->TabIndex = 17;
			this->fosCBDisableX265VersionCheck->Text = L"エンコーダのバージョンチェックをスキップ (デバッグ用)";
			this->fosCBDisableX265VersionCheck->UseVisualStyleBackColor = true;
			// 
			// fosCBKeepQPFile
			// 
			this->fosCBKeepQPFile->AutoSize = true;
			this->fosCBKeepQPFile->Location = System::Drawing::Point(16, 226);
			this->fosCBKeepQPFile->Name = L"fosCBKeepQPFile";
			this->fosCBKeepQPFile->Size = System::Drawing::Size(260, 19);
			this->fosCBKeepQPFile->TabIndex = 8;
			this->fosCBKeepQPFile->Text = L"キーフレーム検出時、キーフレームリストを保存する";
			this->fosCBKeepQPFile->UseVisualStyleBackColor = true;
			// 
			// fosCBRunBatMinimized
			// 
			this->fosCBRunBatMinimized->AutoSize = true;
			this->fosCBRunBatMinimized->Location = System::Drawing::Point(16, 253);
			this->fosCBRunBatMinimized->Name = L"fosCBRunBatMinimized";
			this->fosCBRunBatMinimized->Size = System::Drawing::Size(205, 19);
			this->fosCBRunBatMinimized->TabIndex = 16;
			this->fosCBRunBatMinimized->Text = L"エンコ前後バッチ処理を最小化で実行";
			this->fosCBRunBatMinimized->UseVisualStyleBackColor = true;
			// 
			// fosLBDefaultOutExt2
			// 
			this->fosLBDefaultOutExt2->AutoSize = true;
			this->fosLBDefaultOutExt2->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->fosLBDefaultOutExt2->ForeColor = System::Drawing::Color::OrangeRed;
			this->fosLBDefaultOutExt2->Location = System::Drawing::Point(205, 16);
			this->fosLBDefaultOutExt2->Name = L"fosLBDefaultOutExt2";
			this->fosLBDefaultOutExt2->Size = System::Drawing::Size(161, 14);
			this->fosLBDefaultOutExt2->TabIndex = 4;
			this->fosLBDefaultOutExt2->Text = L"※反映にはAviutlの再起動が必要";
			// 
			// fosCXDefaultOutExt
			// 
			this->fosCXDefaultOutExt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->fosCXDefaultOutExt->FormattingEnabled = true;
			this->fosCXDefaultOutExt->Location = System::Drawing::Point(40, 37);
			this->fosCXDefaultOutExt->Name = L"fosCXDefaultOutExt";
			this->fosCXDefaultOutExt->Size = System::Drawing::Size(190, 23);
			this->fosCXDefaultOutExt->TabIndex = 5;
			// 
			// fosLBDefaultOutExt
			// 
			this->fosLBDefaultOutExt->AutoSize = true;
			this->fosLBDefaultOutExt->Location = System::Drawing::Point(13, 14);
			this->fosLBDefaultOutExt->Name = L"fosLBDefaultOutExt";
			this->fosLBDefaultOutExt->Size = System::Drawing::Size(172, 15);
			this->fosLBDefaultOutExt->TabIndex = 3;
			this->fosLBDefaultOutExt->Text = L"出力するファイルの種類のデフォルト";
			// 
			// fostabPageGUI
			// 
			this->fostabPageGUI->Controls->Add(this->fosCBOutputMoreLog);
			this->fostabPageGUI->Controls->Add(this->fosCBWineCompat);
			this->fostabPageGUI->Controls->Add(this->fosCBGetRelativePath);
			this->fostabPageGUI->Controls->Add(this->fosBTSetFont);
			this->fostabPageGUI->Controls->Add(this->fosCBStgEscKey);
			this->fostabPageGUI->Controls->Add(this->fosCBDisableToolTip);
			this->fostabPageGUI->Controls->Add(this->fosCBDisableVisualStyles);
			this->fostabPageGUI->Controls->Add(this->fosCBLogDisableTransparency);
			this->fostabPageGUI->Controls->Add(this->fosLBDisableVisualStyles);
			this->fostabPageGUI->Controls->Add(this->fosCBLogStartMinimized);
			this->fostabPageGUI->Controls->Add(this->fosLBStgDir);
			this->fostabPageGUI->Controls->Add(this->fosBTStgDir);
			this->fostabPageGUI->Controls->Add(this->fosTXStgDir);
			this->fostabPageGUI->Location = System::Drawing::Point(4, 24);
			this->fostabPageGUI->Name = L"fostabPageGUI";
			this->fostabPageGUI->Size = System::Drawing::Size(384, 372);
			this->fostabPageGUI->TabIndex = 2;
			this->fostabPageGUI->Text = L"ログ・設定画面";
			this->fostabPageGUI->UseVisualStyleBackColor = true;
			// 
			// fosCBWineCompat
			// 
			this->fosCBWineCompat->AutoSize = true;
			this->fosCBWineCompat->Location = System::Drawing::Point(18, 267);
			this->fosCBWineCompat->Name = L"fosCBWineCompat";
			this->fosCBWineCompat->Size = System::Drawing::Size(104, 19);
			this->fosCBWineCompat->TabIndex = 26;
			this->fosCBWineCompat->Text = L"wine互換モード";
			this->fosCBWineCompat->UseVisualStyleBackColor = true;
			// 
			// fosCBGetRelativePath
			// 
			this->fosCBGetRelativePath->AutoSize = true;
			this->fosCBGetRelativePath->Location = System::Drawing::Point(18, 239);
			this->fosCBGetRelativePath->Name = L"fosCBGetRelativePath";
			this->fosCBGetRelativePath->Size = System::Drawing::Size(185, 19);
			this->fosCBGetRelativePath->TabIndex = 22;
			this->fosCBGetRelativePath->Text = L"ダイアログから相対パスで取得する";
			this->fosCBGetRelativePath->UseVisualStyleBackColor = true;
			// 
			// fosBTSetFont
			// 
			this->fosBTSetFont->Location = System::Drawing::Point(239, 204);
			this->fosBTSetFont->Name = L"fosBTSetFont";
			this->fosBTSetFont->Size = System::Drawing::Size(124, 36);
			this->fosBTSetFont->TabIndex = 23;
			this->fosBTSetFont->Text = L"フォントの変更...";
			this->fosBTSetFont->UseVisualStyleBackColor = true;
			this->fosBTSetFont->Click += gcnew System::EventHandler(this, &frmOtherSettings::fosBTSetFont_Click);
			// 
			// fosCBStgEscKey
			// 
			this->fosCBStgEscKey->AutoSize = true;
			this->fosCBStgEscKey->Location = System::Drawing::Point(18, 209);
			this->fosCBStgEscKey->Name = L"fosCBStgEscKey";
			this->fosCBStgEscKey->Size = System::Drawing::Size(168, 19);
			this->fosCBStgEscKey->TabIndex = 21;
			this->fosCBStgEscKey->Text = L"設定画面でEscキーを有効化";
			this->fosCBStgEscKey->UseVisualStyleBackColor = true;
			// 
			// fosCBDisableToolTip
			// 
			this->fosCBDisableToolTip->AutoSize = true;
			this->fosCBDisableToolTip->Location = System::Drawing::Point(18, 73);
			this->fosCBDisableToolTip->Name = L"fosCBDisableToolTip";
			this->fosCBDisableToolTip->Size = System::Drawing::Size(158, 19);
			this->fosCBDisableToolTip->TabIndex = 16;
			this->fosCBDisableToolTip->Text = L"ポップアップヘルプを抑制する";
			this->fosCBDisableToolTip->UseVisualStyleBackColor = true;
			// 
			// fosCBDisableVisualStyles
			// 
			this->fosCBDisableVisualStyles->AutoSize = true;
			this->fosCBDisableVisualStyles->Location = System::Drawing::Point(18, 103);
			this->fosCBDisableVisualStyles->Name = L"fosCBDisableVisualStyles";
			this->fosCBDisableVisualStyles->Size = System::Drawing::Size(128, 19);
			this->fosCBDisableVisualStyles->TabIndex = 17;
			this->fosCBDisableVisualStyles->Text = L"視覚効果をオフにする";
			this->fosCBDisableVisualStyles->UseVisualStyleBackColor = true;
			// 
			// fosCBLogDisableTransparency
			// 
			this->fosCBLogDisableTransparency->AutoSize = true;
			this->fosCBLogDisableTransparency->Location = System::Drawing::Point(18, 179);
			this->fosCBLogDisableTransparency->Name = L"fosCBLogDisableTransparency";
			this->fosCBLogDisableTransparency->Size = System::Drawing::Size(174, 19);
			this->fosCBLogDisableTransparency->TabIndex = 20;
			this->fosCBLogDisableTransparency->Text = L"ログウィンドウの透過をオフにする";
			this->fosCBLogDisableTransparency->UseVisualStyleBackColor = true;
			// 
			// fosLBDisableVisualStyles
			// 
			this->fosLBDisableVisualStyles->AutoSize = true;
			this->fosLBDisableVisualStyles->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->fosLBDisableVisualStyles->ForeColor = System::Drawing::Color::OrangeRed;
			this->fosLBDisableVisualStyles->Location = System::Drawing::Point(39, 122);
			this->fosLBDisableVisualStyles->Name = L"fosLBDisableVisualStyles";
			this->fosLBDisableVisualStyles->Size = System::Drawing::Size(161, 14);
			this->fosLBDisableVisualStyles->TabIndex = 18;
			this->fosLBDisableVisualStyles->Text = L"※反映にはAviutlの再起動が必要";
			// 
			// fosCBLogStartMinimized
			// 
			this->fosCBLogStartMinimized->AutoSize = true;
			this->fosCBLogStartMinimized->Location = System::Drawing::Point(18, 149);
			this->fosCBLogStartMinimized->Name = L"fosCBLogStartMinimized";
			this->fosCBLogStartMinimized->Size = System::Drawing::Size(184, 19);
			this->fosCBLogStartMinimized->TabIndex = 19;
			this->fosCBLogStartMinimized->Text = L"ログウィンドウを最小化で開始する";
			this->fosCBLogStartMinimized->UseVisualStyleBackColor = true;
			// 
			// fosLBStgDir
			// 
			this->fosLBStgDir->AutoSize = true;
			this->fosLBStgDir->Location = System::Drawing::Point(7, 14);
			this->fosLBStgDir->Name = L"fosLBStgDir";
			this->fosLBStgDir->Size = System::Drawing::Size(123, 15);
			this->fosLBStgDir->TabIndex = 3;
			this->fosLBStgDir->Text = L"設定ファイルの保存場所";
			// 
			// fosBTStgDir
			// 
			this->fosBTStgDir->Location = System::Drawing::Point(334, 34);
			this->fosBTStgDir->Name = L"fosBTStgDir";
			this->fosBTStgDir->Size = System::Drawing::Size(35, 23);
			this->fosBTStgDir->TabIndex = 5;
			this->fosBTStgDir->Text = L"...";
			this->fosBTStgDir->UseVisualStyleBackColor = true;
			this->fosBTStgDir->Click += gcnew System::EventHandler(this, &frmOtherSettings::fosBTStgDir_Click);
			// 
			// fosTXStgDir
			// 
			this->fosTXStgDir->Location = System::Drawing::Point(34, 34);
			this->fosTXStgDir->Name = L"fosTXStgDir";
			this->fosTXStgDir->Size = System::Drawing::Size(294, 23);
			this->fosTXStgDir->TabIndex = 4;
			// 
			// fostabPageAMP
			// 
			this->fostabPageAMP->Controls->Add(this->fosCBAutoDelStats);
			this->fostabPageAMP->Controls->Add(this->fosGroupBoxAMPLimit);
			this->fostabPageAMP->Controls->Add(this->fosCBAmpKeepOldFile);
			this->fostabPageAMP->Location = System::Drawing::Point(4, 24);
			this->fostabPageAMP->Name = L"fostabPageAMP";
			this->fostabPageAMP->Padding = System::Windows::Forms::Padding(3);
			this->fostabPageAMP->Size = System::Drawing::Size(384, 372);
			this->fostabPageAMP->TabIndex = 1;
			this->fostabPageAMP->Text = L"自動マルチパス";
			this->fostabPageAMP->UseVisualStyleBackColor = true;
			// 
			// fosCBAutoDelStats
			// 
			this->fosCBAutoDelStats->AutoSize = true;
			this->fosCBAutoDelStats->Location = System::Drawing::Point(19, 59);
			this->fosCBAutoDelStats->Name = L"fosCBAutoDelStats";
			this->fosCBAutoDelStats->Size = System::Drawing::Size(293, 19);
			this->fosCBAutoDelStats->TabIndex = 1;
			this->fosCBAutoDelStats->Text = L"自動マルチパス時、ステータスファイルも自動的に削除する";
			this->fosCBAutoDelStats->UseVisualStyleBackColor = true;
			// 
			// fosGroupBoxAMPLimit
			// 
			this->fosGroupBoxAMPLimit->Controls->Add(this->fosLBAMPLimitMarginWarning);
			this->fosGroupBoxAMPLimit->Controls->Add(this->fosBTAMPMarginMulti);
			this->fosGroupBoxAMPLimit->Controls->Add(this->fosGroupBoxAMPLimitMarginExample);
			this->fosGroupBoxAMPLimit->Controls->Add(this->fosLBAMPLimitMarginInfo);
			this->fosGroupBoxAMPLimit->Controls->Add(this->fosNUAMPLimitMargin);
			this->fosGroupBoxAMPLimit->Controls->Add(this->fosLBAMPLimitMarginMax);
			this->fosGroupBoxAMPLimit->Controls->Add(this->fosLBAMPLimitMarginMin);
			this->fosGroupBoxAMPLimit->Controls->Add(this->fosTBAMPLimitMarginMulti);
			this->fosGroupBoxAMPLimit->Location = System::Drawing::Point(7, 92);
			this->fosGroupBoxAMPLimit->Name = L"fosGroupBoxAMPLimit";
			this->fosGroupBoxAMPLimit->Size = System::Drawing::Size(368, 272);
			this->fosGroupBoxAMPLimit->TabIndex = 2;
			this->fosGroupBoxAMPLimit->TabStop = false;
			this->fosGroupBoxAMPLimit->Text = L"上限映像レートに対する余裕";
			// 
			// fosLBAMPLimitMarginWarning
			// 
			this->fosLBAMPLimitMarginWarning->AutoSize = true;
			this->fosLBAMPLimitMarginWarning->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->fosLBAMPLimitMarginWarning->ForeColor = System::Drawing::Color::Red;
			this->fosLBAMPLimitMarginWarning->Location = System::Drawing::Point(150, 93);
			this->fosLBAMPLimitMarginWarning->Name = L"fosLBAMPLimitMarginWarning";
			this->fosLBAMPLimitMarginWarning->Size = System::Drawing::Size(188, 14);
			this->fosLBAMPLimitMarginWarning->TabIndex = 8;
			this->fosLBAMPLimitMarginWarning->Text = L"※再エンコードが多発する恐れがあります。";
			// 
			// fosBTAMPMarginMulti
			// 
			this->fosBTAMPMarginMulti->Location = System::Drawing::Point(21, 69);
			this->fosBTAMPMarginMulti->Name = L"fosBTAMPMarginMulti";
			this->fosBTAMPMarginMulti->Size = System::Drawing::Size(92, 29);
			this->fosBTAMPMarginMulti->TabIndex = 7;
			this->fosBTAMPMarginMulti->Text = L"デフォルトに戻す";
			this->fosBTAMPMarginMulti->UseVisualStyleBackColor = true;
			this->fosBTAMPMarginMulti->Click += gcnew System::EventHandler(this, &frmOtherSettings::fosBTAMPMarginMulti_Click);
			// 
			// fosGroupBoxAMPLimitMarginExample
			// 
			this->fosGroupBoxAMPLimitMarginExample->Controls->Add(this->fosLBAMPLMMExampleB32);
			this->fosGroupBoxAMPLimitMarginExample->Controls->Add(this->fosLBAMPLMMExampleB22);
			this->fosGroupBoxAMPLimitMarginExample->Controls->Add(this->fosLBAMPLMMExampleB31);
			this->fosGroupBoxAMPLimitMarginExample->Controls->Add(this->fosLBAMPLMMExampleB21);
			this->fosGroupBoxAMPLimitMarginExample->Controls->Add(this->fosLBAMPLMMExampleB12);
			this->fosGroupBoxAMPLimitMarginExample->Controls->Add(this->fosLBAMPLMMExampleB11);
			this->fosGroupBoxAMPLimitMarginExample->Controls->Add(this->fosLBAMPLMMExampleA12);
			this->fosGroupBoxAMPLimitMarginExample->Controls->Add(this->fosLBAMPLMMExampleA11);
			this->fosGroupBoxAMPLimitMarginExample->Location = System::Drawing::Point(21, 126);
			this->fosGroupBoxAMPLimitMarginExample->Name = L"fosGroupBoxAMPLimitMarginExample";
			this->fosGroupBoxAMPLimitMarginExample->Size = System::Drawing::Size(329, 140);
			this->fosGroupBoxAMPLimitMarginExample->TabIndex = 6;
			this->fosGroupBoxAMPLimitMarginExample->TabStop = false;
			this->fosGroupBoxAMPLimitMarginExample->Text = L"現在の設定で計算される余裕";
			// 
			// fosLBAMPLMMExampleB32
			// 
			this->fosLBAMPLMMExampleB32->AutoSize = true;
			this->fosLBAMPLMMExampleB32->ForeColor = System::Drawing::Color::DarkBlue;
			this->fosLBAMPLMMExampleB32->Location = System::Drawing::Point(185, 110);
			this->fosLBAMPLMMExampleB32->Name = L"fosLBAMPLMMExampleB32";
			this->fosLBAMPLMMExampleB32->Size = System::Drawing::Size(41, 15);
			this->fosLBAMPLMMExampleB32->TabIndex = 7;
			this->fosLBAMPLMMExampleB32->Text = L"label1";
			// 
			// fosLBAMPLMMExampleB22
			// 
			this->fosLBAMPLMMExampleB22->AutoSize = true;
			this->fosLBAMPLMMExampleB22->ForeColor = System::Drawing::Color::DarkBlue;
			this->fosLBAMPLMMExampleB22->Location = System::Drawing::Point(185, 80);
			this->fosLBAMPLMMExampleB22->Name = L"fosLBAMPLMMExampleB22";
			this->fosLBAMPLMMExampleB22->Size = System::Drawing::Size(41, 15);
			this->fosLBAMPLMMExampleB22->TabIndex = 6;
			this->fosLBAMPLMMExampleB22->Text = L"label1";
			// 
			// fosLBAMPLMMExampleB31
			// 
			this->fosLBAMPLMMExampleB31->AutoSize = true;
			this->fosLBAMPLMMExampleB31->Location = System::Drawing::Point(71, 110);
			this->fosLBAMPLMMExampleB31->Name = L"fosLBAMPLMMExampleB31";
			this->fosLBAMPLMMExampleB31->Size = System::Drawing::Size(66, 15);
			this->fosLBAMPLMMExampleB31->TabIndex = 5;
			this->fosLBAMPLMMExampleB31->Text = L"1600 kbps";
			// 
			// fosLBAMPLMMExampleB21
			// 
			this->fosLBAMPLMMExampleB21->AutoSize = true;
			this->fosLBAMPLMMExampleB21->Location = System::Drawing::Point(71, 80);
			this->fosLBAMPLMMExampleB21->Name = L"fosLBAMPLMMExampleB21";
			this->fosLBAMPLMMExampleB21->Size = System::Drawing::Size(59, 15);
			this->fosLBAMPLMMExampleB21->TabIndex = 4;
			this->fosLBAMPLMMExampleB21->Text = L"400 kbps";
			// 
			// fosLBAMPLMMExampleB12
			// 
			this->fosLBAMPLMMExampleB12->AutoSize = true;
			this->fosLBAMPLMMExampleB12->ForeColor = System::Drawing::Color::DarkBlue;
			this->fosLBAMPLMMExampleB12->Location = System::Drawing::Point(185, 50);
			this->fosLBAMPLMMExampleB12->Name = L"fosLBAMPLMMExampleB12";
			this->fosLBAMPLMMExampleB12->Size = System::Drawing::Size(41, 15);
			this->fosLBAMPLMMExampleB12->TabIndex = 3;
			this->fosLBAMPLMMExampleB12->Text = L"label1";
			// 
			// fosLBAMPLMMExampleB11
			// 
			this->fosLBAMPLMMExampleB11->AutoSize = true;
			this->fosLBAMPLMMExampleB11->Location = System::Drawing::Point(71, 50);
			this->fosLBAMPLMMExampleB11->Name = L"fosLBAMPLMMExampleB11";
			this->fosLBAMPLMMExampleB11->Size = System::Drawing::Size(59, 15);
			this->fosLBAMPLMMExampleB11->TabIndex = 2;
			this->fosLBAMPLMMExampleB11->Text = L"100 kbps";
			// 
			// fosLBAMPLMMExampleA12
			// 
			this->fosLBAMPLMMExampleA12->AutoSize = true;
			this->fosLBAMPLMMExampleA12->Location = System::Drawing::Point(177, 23);
			this->fosLBAMPLMMExampleA12->Name = L"fosLBAMPLMMExampleA12";
			this->fosLBAMPLMMExampleA12->Size = System::Drawing::Size(70, 15);
			this->fosLBAMPLMMExampleA12->TabIndex = 1;
			this->fosLBAMPLMMExampleA12->Text = L"余裕の大きさ";
			// 
			// fosLBAMPLMMExampleA11
			// 
			this->fosLBAMPLMMExampleA11->AutoSize = true;
			this->fosLBAMPLMMExampleA11->Location = System::Drawing::Point(43, 23);
			this->fosLBAMPLMMExampleA11->Name = L"fosLBAMPLMMExampleA11";
			this->fosLBAMPLMMExampleA11->Size = System::Drawing::Size(119, 15);
			this->fosLBAMPLMMExampleA11->TabIndex = 0;
			this->fosLBAMPLMMExampleA11->Text = L"映像上限レート(kbps)";
			// 
			// fosLBAMPLimitMarginInfo
			// 
			this->fosLBAMPLimitMarginInfo->AutoSize = true;
			this->fosLBAMPLimitMarginInfo->Location = System::Drawing::Point(268, 65);
			this->fosLBAMPLimitMarginInfo->Name = L"fosLBAMPLimitMarginInfo";
			this->fosLBAMPLimitMarginInfo->Size = System::Drawing::Size(31, 15);
			this->fosLBAMPLimitMarginInfo->TabIndex = 5;
			this->fosLBAMPLimitMarginInfo->Text = L"普通";
			// 
			// fosNUAMPLimitMargin
			// 
			this->fosNUAMPLimitMargin->Location = System::Drawing::Point(177, 63);
			this->fosNUAMPLimitMargin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->fosNUAMPLimitMargin->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->fosNUAMPLimitMargin->Name = L"fosNUAMPLimitMargin";
			this->fosNUAMPLimitMargin->Size = System::Drawing::Size(73, 23);
			this->fosNUAMPLimitMargin->TabIndex = 3;
			this->fosNUAMPLimitMargin->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->fosNUAMPLimitMargin->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->fosNUAMPLimitMargin->ValueChanged += gcnew System::EventHandler(this, &frmOtherSettings::fosNUAMPLimitMargin_ValueChanged);
			// 
			// fosLBAMPLimitMarginMax
			// 
			this->fosLBAMPLimitMarginMax->AutoSize = true;
			this->fosLBAMPLimitMarginMax->Location = System::Drawing::Point(312, 32);
			this->fosLBAMPLimitMarginMax->Name = L"fosLBAMPLimitMarginMax";
			this->fosLBAMPLimitMarginMax->Size = System::Drawing::Size(19, 15);
			this->fosLBAMPLimitMarginMax->TabIndex = 2;
			this->fosLBAMPLimitMarginMax->Text = L"大";
			// 
			// fosLBAMPLimitMarginMin
			// 
			this->fosLBAMPLimitMarginMin->AutoSize = true;
			this->fosLBAMPLimitMarginMin->Location = System::Drawing::Point(31, 32);
			this->fosLBAMPLimitMarginMin->Name = L"fosLBAMPLimitMarginMin";
			this->fosLBAMPLimitMarginMin->Size = System::Drawing::Size(19, 15);
			this->fosLBAMPLimitMarginMin->TabIndex = 1;
			this->fosLBAMPLimitMarginMin->Text = L"小";
			// 
			// fosTBAMPLimitMarginMulti
			// 
			this->fosTBAMPLimitMarginMulti->AutoSize = false;
			this->fosTBAMPLimitMarginMulti->BackColor = System::Drawing::SystemColors::Window;
			this->fosTBAMPLimitMarginMulti->Location = System::Drawing::Point(66, 32);
			this->fosTBAMPLimitMarginMulti->Maximum = 20;
			this->fosTBAMPLimitMarginMulti->Minimum = 1;
			this->fosTBAMPLimitMarginMulti->Name = L"fosTBAMPLimitMarginMulti";
			this->fosTBAMPLimitMarginMulti->Size = System::Drawing::Size(240, 31);
			this->fosTBAMPLimitMarginMulti->TabIndex = 0;
			this->fosTBAMPLimitMarginMulti->TickStyle = System::Windows::Forms::TickStyle::None;
			this->fosTBAMPLimitMarginMulti->Value = 10;
			this->fosTBAMPLimitMarginMulti->Scroll += gcnew System::EventHandler(this, &frmOtherSettings::fosTBAMPLimitMarginMulti_Scroll);
			// 
			// fosCBAmpKeepOldFile
			// 
			this->fosCBAmpKeepOldFile->Location = System::Drawing::Point(19, 15);
			this->fosCBAmpKeepOldFile->Name = L"fosCBAmpKeepOldFile";
			this->fosCBAmpKeepOldFile->Size = System::Drawing::Size(343, 38);
			this->fosCBAmpKeepOldFile->TabIndex = 0;
			this->fosCBAmpKeepOldFile->Text = L"自動マルチパスで、上限をオーバーしてしまい再エンコードする際に、上限オーバーの動画を削除しない";
			this->fosCBAmpKeepOldFile->UseVisualStyleBackColor = true;
			// 
			// fosCBOutputMoreLog
			// 
			this->fosCBOutputMoreLog->AutoSize = true;
			this->fosCBOutputMoreLog->Location = System::Drawing::Point(18, 294);
			this->fosCBOutputMoreLog->Name = L"fosCBOutputMoreLog";
			this->fosCBOutputMoreLog->Size = System::Drawing::Size(143, 19);
			this->fosCBOutputMoreLog->TabIndex = 27;
			this->fosCBOutputMoreLog->Text = L"音声・muxのログも表示";
			this->fosCBOutputMoreLog->UseVisualStyleBackColor = true;
			// 
			// frmOtherSettings
			// 
			this->AcceptButton = this->fosCBOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->CancelButton = this->fosCBCancel;
			this->ClientSize = System::Drawing::Size(392, 446);
			this->Controls->Add(this->fosTabControl);
			this->Controls->Add(this->fosCBOK);
			this->Controls->Add(this->fosCBCancel);
			this->Font = (gcnew System::Drawing::Font(L"Meiryo UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"frmOtherSettings";
			this->ShowIcon = false;
			this->Text = L"frmOtherSettings";
			this->Load += gcnew System::EventHandler(this, &frmOtherSettings::frmOtherSettings_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &frmOtherSettings::frmOtherSettings_KeyDown);
			this->fosTabControl->ResumeLayout(false);
			this->fostabPageGeneral->ResumeLayout(false);
			this->fostabPageGeneral->PerformLayout();
			this->fostabPageGUI->ResumeLayout(false);
			this->fostabPageGUI->PerformLayout();
			this->fostabPageAMP->ResumeLayout(false);
			this->fostabPageAMP->PerformLayout();
			this->fosGroupBoxAMPLimit->ResumeLayout(false);
			this->fosGroupBoxAMPLimit->PerformLayout();
			this->fosGroupBoxAMPLimitMarginExample->ResumeLayout(false);
			this->fosGroupBoxAMPLimitMarginExample->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fosNUAMPLimitMargin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fosTBAMPLimitMarginMulti))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: 
		System::Void fosCBOK_Click(System::Object^  sender, System::EventArgs^  e) {
			//DisableToolTipHelp = fosCBDisableToolTip->Checked;
			make_file_filter(NULL, 0, fosCXDefaultOutExt->SelectedIndex);
			overwrite_aviutl_ini_file_filter(fosCXDefaultOutExt->SelectedIndex);

			stgDir = fosTXStgDir->Text;
			fos_ex_stg->load_encode_stg();
			fos_ex_stg->load_log_win();
			fos_ex_stg->s_local.auto_afs_disable           = fosCBAutoAFSDisable->Checked;
			fos_ex_stg->s_local.amp_keep_old_file          = fosCBAmpKeepOldFile->Checked;
			fos_ex_stg->s_local.amp_bitrate_margin_multi   = (double)(fosNUAMPLimitMargin->Value) / 100.0;
			fos_ex_stg->s_local.auto_del_stats             = fosCBAutoDelStats->Checked;
			fos_ex_stg->s_local.auto_del_chap              = fosCBAutoDelChap->Checked;
			fos_ex_stg->s_local.keep_qp_file               = fosCBKeepQPFile->Checked;
			fos_ex_stg->s_local.disable_tooltip_help       = fosCBDisableToolTip->Checked;
			fos_ex_stg->s_local.disable_visual_styles      = fosCBDisableVisualStyles->Checked;
			fos_ex_stg->s_local.enable_stg_esc_key         = fosCBStgEscKey->Checked;
			fos_ex_stg->s_local.chap_nero_convert_to_utf8  = fosCBChapConvertToUTF8->Checked;
			fos_ex_stg->s_local.auto_ref_limit_by_level    = fosCBAutoRefLimitByLevel->Checked;
			fos_ex_stg->s_log.minimized                    = fosCBLogStartMinimized->Checked;
			fos_ex_stg->s_log.transparent                  = !fosCBLogDisableTransparency->Checked;
			fos_ex_stg->s_log.wine_compat                  = fosCBWineCompat->Checked;
			fos_ex_stg->s_log.log_level                    =(fosCBOutputMoreLog->Checked) ? LOG_MORE : LOG_INFO;
			fos_ex_stg->s_local.get_relative_path          = fosCBGetRelativePath->Checked;
			fos_ex_stg->s_local.default_output_ext         = fosCXDefaultOutExt->SelectedIndex;
			fos_ex_stg->s_local.run_bat_minimized          = fosCBRunBatMinimized->Checked;
			fos_ex_stg->s_local.disable_x265_version_check = fosCBDisableX265VersionCheck->Checked;
			fos_ex_stg->s_local.default_audio_encoder      = fosCXDefaultAudioEncoder->SelectedIndex;
			fos_ex_stg->save_local();
			fos_ex_stg->save_log_win();
			this->Close();

		}
	private: 
		System::Void fosSetComboBox() {
			fosCXDefaultOutExt->SuspendLayout();
			fosCXDefaultOutExt->Items->Clear();
			for (int i = 0; i < _countof(OUTPUT_FILE_EXT); i++)
				fosCXDefaultOutExt->Items->Add(String(OUTPUT_FILE_EXT_DESC[i]).ToString() + L" (" + String(OUTPUT_FILE_EXT[i]).ToString() + L")");
			fosCXDefaultOutExt->ResumeLayout();
			
			fosCXDefaultAudioEncoder->SuspendLayout();
			fosCXDefaultAudioEncoder->Items->Clear();
			for (int i = 0; i < fos_ex_stg->s_aud_count; i++)
				fosCXDefaultAudioEncoder->Items->Add(String(fos_ex_stg->s_aud[i].dispname).ToString());
			fosCXDefaultAudioEncoder->ResumeLayout();
		}
	private: 
		System::Void frmOtherSettings_Load(System::Object^  sender, System::EventArgs^  e) {
			this->Text = String(AUO_FULL_NAME).ToString();
			fosTXStgDir->Text = stgDir;
			fos_ex_stg->load_encode_stg();
			fos_ex_stg->load_log_win();
			fosSetComboBox();
			fosCBAutoAFSDisable->Checked            = fos_ex_stg->s_local.auto_afs_disable != 0;
			fosNUAMPLimitMargin->Value              = clamp(Convert::ToDecimal(fos_ex_stg->s_local.amp_bitrate_margin_multi * 100.0), fosNUAMPLimitMargin->Minimum, fosNUAMPLimitMargin->Maximum);
			fosCBAmpKeepOldFile->Checked            = fos_ex_stg->s_local.amp_keep_old_file != 0;
			fosCBAutoDelStats->Checked              = fos_ex_stg->s_local.auto_del_stats != 0;
			fosCBAutoDelChap->Checked               = fos_ex_stg->s_local.auto_del_chap != 0;
			fosCBKeepQPFile->Checked                = fos_ex_stg->s_local.keep_qp_file != 0;
			fosCBDisableToolTip->Checked            = fos_ex_stg->s_local.disable_tooltip_help != 0;
			fosCBDisableVisualStyles->Checked       = fos_ex_stg->s_local.disable_visual_styles != 0;
			fosCBStgEscKey->Checked                 = fos_ex_stg->s_local.enable_stg_esc_key != 0;
			fosCBChapConvertToUTF8->Checked         = fos_ex_stg->s_local.chap_nero_convert_to_utf8 != 0;
			fosCBAutoRefLimitByLevel->Checked       = fos_ex_stg->s_local.auto_ref_limit_by_level != 0;
			fosCBLogStartMinimized->Checked         = fos_ex_stg->s_log.minimized != 0;
			fosCBLogDisableTransparency->Checked    = fos_ex_stg->s_log.transparent == 0;
			fosCBWineCompat->Checked                = fos_ex_stg->s_log.wine_compat != 0;
			fosCBOutputMoreLog->Checked             = fos_ex_stg->s_log.log_level != LOG_INFO;
			fosCBGetRelativePath->Checked           = fos_ex_stg->s_local.get_relative_path != 0;
			fosCXDefaultOutExt->SelectedIndex       = fos_ex_stg->s_local.default_output_ext;
			fosCBRunBatMinimized->Checked           = fos_ex_stg->s_local.run_bat_minimized != 0;
			fosCBDisableX265VersionCheck->Checked   = fos_ex_stg->s_local.disable_x265_version_check != 0;
			fosCXDefaultAudioEncoder->SelectedIndex = clamp(fos_ex_stg->s_local.default_audio_encoder, 0, fosCXDefaultAudioEncoder->Items->Count);
			if (str_has_char(fos_ex_stg->s_local.conf_font.name))
				SetFontFamilyToForm(this, gcnew FontFamily(String(fos_ex_stg->s_local.conf_font.name).ToString()), this->Font->FontFamily);
			fosNUAMPLimitMargin_ValueChanged(nullptr, nullptr);
		}
	private: 
		System::Void fosBTStgDir_Click(System::Object^  sender, System::EventArgs^  e) {
			FolderBrowserDialog^ fbd = gcnew FolderBrowserDialog();
			if (System::IO::Directory::Exists(fosTXStgDir->Text)) {
				fbd->SelectedPath = Path::GetFullPath(fosTXStgDir->Text);
			}
			if (fbd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				if (fosCBGetRelativePath->Checked)
					fbd->SelectedPath = GetRelativePath(fbd->SelectedPath);
				fosTXStgDir->Text = fbd->SelectedPath;
			}
		}
	private: 
		System::Void fosCBCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}
	private: 
		System::Void frmOtherSettings_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			if (e->KeyCode == Keys::Escape)
				this->Close();
		}
	private:
		System::Void fosBTSetFont_Click(System::Object^  sender, System::EventArgs^  e) {
			fosfontDialog->Font = fosBTSetFont->Font;
			if (fosfontDialog->ShowDialog() != System::Windows::Forms::DialogResult::Cancel
				&& String::Compare(fosfontDialog->Font->FontFamily->Name, this->Font->FontFamily->Name)) {
				guiEx_settings exstg(true);
				exstg.load_encode_stg();
				Set_AUO_FONT_INFO(&exstg.s_local.conf_font, fosfontDialog->Font, this->Font);
				exstg.s_local.conf_font.size = 0.0;
				exstg.s_local.conf_font.style = 0;
				exstg.save_local();
				SetFontFamilyToForm(this, fosfontDialog->Font->FontFamily, this->Font->FontFamily);
			}
		}
	private:
		System::Int32 fosAMPCalcMargin(int MaxVideoBitrate) {
			return (int)(-1 * MaxVideoBitrate * ((double)fosNUAMPLimitMargin->Value / 100.0) / Math::Sqrt(MaxVideoBitrate / 100.0));
		}
	private:
		System::Void fosAMPLimitMarginRecalcExample() {
			fosLBAMPLMMExampleB12->Text = fosAMPCalcMargin(100).ToString() + L" kbps";
			fosLBAMPLMMExampleB22->Text = fosAMPCalcMargin(400).ToString() + L" kbps";
			fosLBAMPLMMExampleB32->Text = fosAMPCalcMargin(1600).ToString() + L" kbps";
		}
	private:
		System::Void fosTBAMPLimitMarginMulti_Scroll(System::Object^  sender, System::EventArgs^  e) {
			fosNUAMPLimitMargin->Value = fosTBAMPLimitMarginMulti->Value;
		}
	private:
		System::Void fosNUAMPLimitMargin_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			fosTBAMPLimitMarginMulti->Value = Convert::ToInt32(fosNUAMPLimitMargin->Value);
			fosAMPLimitMarginRecalcExample();
			if (fosNUAMPLimitMargin->Value > 9) {
				fosLBAMPLimitMarginInfo->ForeColor = Color::Green; 
				fosLBAMPLimitMarginInfo->Text = L"余裕";
				fosLBAMPLimitMarginWarning->Visible = false;
			} else if (fosNUAMPLimitMargin->Value > 4) {
				fosLBAMPLimitMarginInfo->ForeColor = Color::Green; 
				fosLBAMPLimitMarginInfo->Text = L"普通";
				fosLBAMPLimitMarginWarning->Visible = false;
			} else if (fosNUAMPLimitMargin->Value > 2) {
				fosLBAMPLimitMarginInfo->ForeColor = Color::OrangeRed; 
				fosLBAMPLimitMarginInfo->Text = L"ややぎりぎり";
				fosLBAMPLimitMarginWarning->Visible = true;
			} else {
				fosLBAMPLimitMarginInfo->ForeColor = Color::Red; 
				fosLBAMPLimitMarginInfo->Text = L"ぎりぎり";
				fosLBAMPLimitMarginWarning->Visible = true;
			}
		}
	private:
		System::Void fosBTAMPMarginMulti_Click(System::Object^  sender, System::EventArgs^  e) {
			fosNUAMPLimitMargin->Value = (int)(DEFAULT_AMP_MARGIN * 100.0 + 0.5);
		}
};
}
