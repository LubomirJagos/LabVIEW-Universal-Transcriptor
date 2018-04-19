<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="14008000">
	<Property Name="SMProvider.SMVersion" Type="Int">201310</Property>
	<Item Name="My Computer" Type="My Computer">
		<Property Name="IOScan.Faults" Type="Str"></Property>
		<Property Name="IOScan.NetVarPeriod" Type="UInt">100</Property>
		<Property Name="IOScan.NetWatchdogEnabled" Type="Bool">false</Property>
		<Property Name="IOScan.Period" Type="UInt">10000</Property>
		<Property Name="IOScan.PowerupMode" Type="UInt">0</Property>
		<Property Name="IOScan.Priority" Type="UInt">9</Property>
		<Property Name="IOScan.ReportModeConflict" Type="Bool">true</Property>
		<Property Name="IOScan.StartEngineOnDeploy" Type="Bool">false</Property>
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="Arduino libraries" Type="Folder" URL="../Arduino libraries">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="build spec" Type="Folder" URL="../build spec">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="builds" Type="Folder" URL="../builds">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="C code" Type="Folder" URL="../C code">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="lv-scripting" Type="Folder">
			<Item Name="BundlerCreate.vi" Type="VI" URL="../lv-scripting/BundlerCreate.vi"/>
			<Item Name="CleanUpDiagram.vi" Type="VI" URL="../lv-scripting/CleanUpDiagram.vi"/>
			<Item Name="CompoundArithmeticCreate.vi" Type="VI" URL="../lv-scripting/CompoundArithmeticCreate.vi"/>
			<Item Name="ControlArrayCreate.vi" Type="VI" URL="../lv-scripting/ControlArrayCreate.vi"/>
			<Item Name="ControlClusterCreate.vi" Type="VI" URL="../lv-scripting/ControlClusterCreate.vi"/>
			<Item Name="ControlCreate.vi" Type="VI" URL="../lv-scripting/ControlCreate.vi"/>
			<Item Name="ControlStyleReference.vi" Type="VI" URL="../lv-scripting/ControlStyleReference.vi"/>
			<Item Name="FormulaAddIO.vi" Type="VI" URL="../lv-scripting/FormulaAddIO.vi"/>
			<Item Name="FormulaCleanup.vi" Type="VI" URL="../lv-scripting/FormulaCleanup.vi"/>
			<Item Name="FormulaCreate.vi" Type="VI" URL="../lv-scripting/FormulaCreate.vi"/>
			<Item Name="GeneratePropertyGetters.vi" Type="VI" URL="../lv-scripting/GeneratePropertyGetters.vi"/>
			<Item Name="GeneratePropertyGettersForType.vi" Type="VI" URL="../lv-scripting/GeneratePropertyGettersForType.vi"/>
			<Item Name="GetReferenceByUID.vi" Type="VI" URL="../lv-scripting/GetReferenceByUID.vi"/>
			<Item Name="GetReferenceByUID_traverser.vi" Type="VI" URL="../lv-scripting/GetReferenceByUID_traverser.vi"/>
			<Item Name="GObjectDelete.vi" Type="VI" URL="../lv-scripting/GObjectDelete.vi"/>
			<Item Name="HelperLabelText.vi" Type="VI" URL="../lv-scripting/HelperLabelText.vi"/>
			<Item Name="HelperOwnerUID.vi" Type="VI" URL="../lv-scripting/HelperOwnerUID.vi"/>
			<Item Name="HelperRefUID.vi" Type="VI" URL="../lv-scripting/HelperRefUID.vi"/>
			<Item Name="HighlightByUID.vi" Type="VI" URL="../lv-scripting/HighlightByUID.vi"/>
			<Item Name="LoopAddShiftRegister.vi" Type="VI" URL="../lv-scripting/LoopAddShiftRegister.vi"/>
			<Item Name="LoopCreate.vi" Type="VI" URL="../lv-scripting/LoopCreate.vi"/>
			<Item Name="lv-scripting.aliases" Type="Document" URL="../lv-scripting/lv-scripting.aliases"/>
			<Item Name="lv-scripting.lvproj" Type="Document" URL="../lv-scripting/lv-scripting.lvproj"/>
			<Item Name="NewCustomVIOwnerByUID.vi" Type="VI" URL="../lv-scripting/NewCustomVIOwnerByUID.vi"/>
			<Item Name="NewVIObjectOwnerByUID.vi" Type="VI" URL="../lv-scripting/NewVIObjectOwnerByUID.vi"/>
			<Item Name="ParameterInterceptorInfo.vi" Type="VI" URL="../lv-scripting/ParameterInterceptorInfo.vi"/>
			<Item Name="ReadArray.vi" Type="VI" URL="../lv-scripting/ReadArray.vi"/>
			<Item Name="ReadBundler.vi" Type="VI" URL="../lv-scripting/ReadBundler.vi"/>
			<Item Name="ReadCluster.vi" Type="VI" URL="../lv-scripting/ReadCluster.vi"/>
			<Item Name="ReadCompoundArithmetic.vi" Type="VI" URL="../lv-scripting/ReadCompoundArithmetic.vi"/>
			<Item Name="ReadControl.vi" Type="VI" URL="../lv-scripting/ReadControl.vi"/>
			<Item Name="ReadDiagram.vi" Type="VI" URL="../lv-scripting/ReadDiagram.vi"/>
			<Item Name="ReadForLoop.vi" Type="VI" URL="../lv-scripting/ReadForLoop.vi"/>
			<Item Name="ReadFormula.vi" Type="VI" URL="../lv-scripting/ReadFormula.vi"/>
			<Item Name="ReadFormulaParameter.vi" Type="VI" URL="../lv-scripting/ReadFormulaParameter.vi"/>
			<Item Name="ReadInlineCNode.vi" Type="VI" URL="../lv-scripting/ReadInlineCNode.vi"/>
			<Item Name="ReadLeftShiftRegister.vi" Type="VI" URL="../lv-scripting/ReadLeftShiftRegister.vi"/>
			<Item Name="ReadNumeric.vi" Type="VI" URL="../lv-scripting/ReadNumeric.vi"/>
			<Item Name="ReadPanel.vi" Type="VI" URL="../lv-scripting/ReadPanel.vi"/>
			<Item Name="ReadRightShiftRegister.vi" Type="VI" URL="../lv-scripting/ReadRightShiftRegister.vi"/>
			<Item Name="ReadRingConstant.vi" Type="VI" URL="../lv-scripting/ReadRingConstant.vi"/>
			<Item Name="ReadSubVI.vi" Type="VI" URL="../lv-scripting/ReadSubVI.vi"/>
			<Item Name="ReadTerminal.vi" Type="VI" URL="../lv-scripting/ReadTerminal.vi"/>
			<Item Name="ReadTunnel.vi" Type="VI" URL="../lv-scripting/ReadTunnel.vi"/>
			<Item Name="ReadUnbundler.vi" Type="VI" URL="../lv-scripting/ReadUnbundler.vi"/>
			<Item Name="ReadVI.vi" Type="VI" URL="../lv-scripting/ReadVI.vi"/>
			<Item Name="ReadVIInternal.vi" Type="VI" URL="../lv-scripting/ReadVIInternal.vi"/>
			<Item Name="ReadWhileLoop.vi" Type="VI" URL="../lv-scripting/ReadWhileLoop.vi"/>
			<Item Name="ReadWire.vi" Type="VI" URL="../lv-scripting/ReadWire.vi"/>
			<Item Name="RingConstantCreate.vi" Type="VI" URL="../lv-scripting/RingConstantCreate.vi"/>
			<Item Name="StdCallTemplate.vit" Type="VI" URL="../lv-scripting/StdCallTemplate.vit"/>
			<Item Name="SubVICreate.vi" Type="VI" URL="../lv-scripting/SubVICreate.vi"/>
			<Item Name="VICloseSave.vi" Type="VI" URL="../lv-scripting/VICloseSave.vi"/>
			<Item Name="VICreate.vi" Type="VI" URL="../lv-scripting/VICreate.vi"/>
			<Item Name="WireConnect.vi" Type="VI" URL="../lv-scripting/WireConnect.vi"/>
		</Item>
		<Item Name="Test" Type="Folder" URL="../Test">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="Transcriptors" Type="Folder" URL="../Transcriptors">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="types" Type="Folder" URL="../types">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="utils" Type="Folder" URL="../utils">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="utils 2" Type="Folder" URL="../utils 2">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="user.lib" Type="Folder">
				<Item Name="Arduino SoftwareSerial Wrapper.lvlib" Type="Library" URL="/&lt;userlib&gt;/LabVIEW Universal Transcriptor/Arduino SoftwareSerial Wrapper/Arduino SoftwareSerial Wrapper.lvlib"/>
			</Item>
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Application Directory.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Application Directory.vi"/>
				<Item Name="Arduino Compatible Compiler for LabVIEW.lvlib" Type="Library" URL="/&lt;vilib&gt;/Aledyne-TSXperts/Arduino Compatible Compiler for LabVIEW/Arduino Compatible Compiler for LabVIEW.lvlib"/>
				<Item Name="BuildHelpPath.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/BuildHelpPath.vi"/>
				<Item Name="Check Special Tags.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Check Special Tags.vi"/>
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="Close File+.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Close File+.vi"/>
				<Item Name="compatReadText.vi" Type="VI" URL="/&lt;vilib&gt;/_oldvers/_oldvers.llb/compatReadText.vi"/>
				<Item Name="Convert property node font to graphics font.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Convert property node font to graphics font.vi"/>
				<Item Name="Details Display Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Details Display Dialog.vi"/>
				<Item Name="DialogType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogType.ctl"/>
				<Item Name="DialogTypeEnum.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogTypeEnum.ctl"/>
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
				<Item Name="Error Code Database.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Code Database.vi"/>
				<Item Name="ErrWarn.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/ErrWarn.ctl"/>
				<Item Name="eventvkey.ctl" Type="VI" URL="/&lt;vilib&gt;/event_ctls.llb/eventvkey.ctl"/>
				<Item Name="Find First Error.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Find First Error.vi"/>
				<Item Name="Find Tag.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Find Tag.vi"/>
				<Item Name="Format Message String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Format Message String.vi"/>
				<Item Name="General Error Handler Core CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler Core CORE.vi"/>
				<Item Name="General Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler.vi"/>
				<Item Name="Get Class Hierarchy from Class Name.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/traverseref.llb/Get Class Hierarchy from Class Name.vi"/>
				<Item Name="Get String Text Bounds.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Get String Text Bounds.vi"/>
				<Item Name="Get Text Rect.vi" Type="VI" URL="/&lt;vilib&gt;/picture/picture.llb/Get Text Rect.vi"/>
				<Item Name="GetHelpDir.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetHelpDir.vi"/>
				<Item Name="GetRTHostConnectedProp.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetRTHostConnectedProp.vi"/>
				<Item Name="High Resolution Relative Seconds.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/High Resolution Relative Seconds.vi"/>
				<Item Name="Is Path and Not Empty.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Is Path and Not Empty.vi"/>
				<Item Name="Longest Line Length in Pixels.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Longest Line Length in Pixels.vi"/>
				<Item Name="LVBoundsTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBoundsTypeDef.ctl"/>
				<Item Name="LVBreakpointStatusEnum.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBreakpointStatusEnum.ctl"/>
				<Item Name="LVDataSocketStatusTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVDataSocketStatusTypeDef.ctl"/>
				<Item Name="LVFixedPointRepBitsTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/fxp/LVFixedPointRepBitsTypeDef.ctl"/>
				<Item Name="LVFixedPointRepRangeTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/fxp/LVFixedPointRepRangeTypeDef.ctl"/>
				<Item Name="LVKeyNavTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVKeyNavTypeDef.ctl"/>
				<Item Name="LVKeyTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVKeyTypeDef.ctl"/>
				<Item Name="LVMinMaxIncTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVMinMaxIncTypeDef.ctl"/>
				<Item Name="LVNumericRepresentation.ctl" Type="VI" URL="/&lt;vilib&gt;/numeric/LVNumericRepresentation.ctl"/>
				<Item Name="LVOutOfRangeActionTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVOutOfRangeActionTypeDef.ctl"/>
				<Item Name="LVParallelSchedulesEnum.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVParallelSchedulesEnum.ctl"/>
				<Item Name="LVPointTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVPointTypeDef.ctl"/>
				<Item Name="LVPositionTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVPositionTypeDef.ctl"/>
				<Item Name="LVRectTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVRectTypeDef.ctl"/>
				<Item Name="LVStringsAndValuesArrayTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVStringsAndValuesArrayTypeDef.ctl"/>
				<Item Name="NI_AALBase.lvlib" Type="Library" URL="/&lt;vilib&gt;/Analysis/NI_AALBase.lvlib"/>
				<Item Name="NI_FileType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/lvfile.llb/NI_FileType.lvlib"/>
				<Item Name="NI_MABase.lvlib" Type="Library" URL="/&lt;vilib&gt;/measure/NI_MABase.lvlib"/>
				<Item Name="Normalize End Of Line.vi" Type="VI" URL="/&lt;vilib&gt;/AdvancedString/Normalize End Of Line.vi"/>
				<Item Name="Not Found Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Not Found Dialog.vi"/>
				<Item Name="Open File+.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Open File+.vi"/>
				<Item Name="Read File+ (string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read File+ (string).vi"/>
				<Item Name="Read From Spreadsheet File (DBL).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read From Spreadsheet File (DBL).vi"/>
				<Item Name="Read From Spreadsheet File (I64).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read From Spreadsheet File (I64).vi"/>
				<Item Name="Read From Spreadsheet File (string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read From Spreadsheet File (string).vi"/>
				<Item Name="Read From Spreadsheet File.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read From Spreadsheet File.vi"/>
				<Item Name="Read Lines From File.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Read Lines From File.vi"/>
				<Item Name="Search and Replace Pattern.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Search and Replace Pattern.vi"/>
				<Item Name="Set Bold Text.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set Bold Text.vi"/>
				<Item Name="Set String Value.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set String Value.vi"/>
				<Item Name="Simple Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Simple Error Handler.vi"/>
				<Item Name="Space Constant.vi" Type="VI" URL="/&lt;vilib&gt;/dlg_ctls.llb/Space Constant.vi"/>
				<Item Name="System Exec.vi" Type="VI" URL="/&lt;vilib&gt;/Platform/system.llb/System Exec.vi"/>
				<Item Name="TagReturnType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/TagReturnType.ctl"/>
				<Item Name="Three Button Dialog CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog CORE.vi"/>
				<Item Name="Three Button Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog.vi"/>
				<Item Name="TRef Traverse.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/traverseref.llb/TRef Traverse.vi"/>
				<Item Name="TRef TravTarget.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/traverseref.llb/TRef TravTarget.ctl"/>
				<Item Name="Trim Whitespace.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Trim Whitespace.vi"/>
				<Item Name="VariantType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/VariantDataType/VariantType.lvlib"/>
				<Item Name="VI Scripting - Traverse.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/traverseref.llb/VI Scripting - Traverse.lvlib"/>
				<Item Name="whitespace.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/whitespace.ctl"/>
				<Item Name="Write Spreadsheet String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write Spreadsheet String.vi"/>
				<Item Name="Write To Spreadsheet File (DBL).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File (DBL).vi"/>
				<Item Name="Write To Spreadsheet File (I64).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File (I64).vi"/>
				<Item Name="Write To Spreadsheet File (string).vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File (string).vi"/>
				<Item Name="Write To Spreadsheet File.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Write To Spreadsheet File.vi"/>
			</Item>
			<Item Name="lvanlys.dll" Type="Document" URL="/&lt;resource&gt;/lvanlys.dll"/>
		</Item>
		<Item Name="Build Specifications" Type="Build">
			<Item Name="Useless Specificatin LabVIEW_Universal_Transcriptor Feature Not supported through RUNTIME" Type="EXE">
				<Property Name="App_copyErrors" Type="Bool">true</Property>
				<Property Name="App_INI_aliasGUID" Type="Str">{8B248E5A-BBFB-4057-8259-0881441089DB}</Property>
				<Property Name="App_INI_GUID" Type="Str">{0CE40171-7EFF-4420-9DD0-7B3D59A558F1}</Property>
				<Property Name="App_serverConfig.httpPort" Type="Int">8002</Property>
				<Property Name="Bld_autoIncrement" Type="Bool">true</Property>
				<Property Name="Bld_buildCacheID" Type="Str">{76F9559B-3366-4B31-AB86-10C5933A4080}</Property>
				<Property Name="Bld_buildSpecDescription" Type="Str">Application for transcripting existing VI into user defined text programming language.
For now experiments are focused on Arduino platform, so output is C/C++ code.

THIS ATTEMPT IS USELESS, BECAUSE VI Scripting IS NOT ACCESSIBLE THROUGH RUNTIME!</Property>
				<Property Name="Bld_buildSpecName" Type="Str">Useless Specificatin LabVIEW_Universal_Transcriptor Feature Not supported through RUNTIME</Property>
				<Property Name="Bld_excludeInlineSubVIs" Type="Bool">true</Property>
				<Property Name="Bld_excludeLibraryItems" Type="Bool">true</Property>
				<Property Name="Bld_excludePolymorphicVIs" Type="Bool">true</Property>
				<Property Name="Bld_localDestDir" Type="Path">../builds</Property>
				<Property Name="Bld_localDestDirType" Type="Str">relativeToProject</Property>
				<Property Name="Bld_modifyLibraryFile" Type="Bool">true</Property>
				<Property Name="Bld_previewCacheID" Type="Str">{F8DB5A48-7FE0-45AD-BAC8-8E6158C0B52B}</Property>
				<Property Name="Bld_version.build" Type="Int">1</Property>
				<Property Name="Bld_version.major" Type="Int">1</Property>
				<Property Name="Destination[0].destName" Type="Str">LabVIEW_Universal_Transcriptor.exe</Property>
				<Property Name="Destination[0].path" Type="Path">../builds/Useless Specificatin LabVIEW_Universal_Transcriptor Feature Not supported through RUNTIME.exe</Property>
				<Property Name="Destination[0].path.type" Type="Str">relativeToProject</Property>
				<Property Name="Destination[0].preserveHierarchy" Type="Bool">true</Property>
				<Property Name="Destination[0].type" Type="Str">App</Property>
				<Property Name="Destination[1].destName" Type="Str">Support Directory</Property>
				<Property Name="Destination[1].path" Type="Path">../builds/data</Property>
				<Property Name="Destination[1].path.type" Type="Str">relativeToProject</Property>
				<Property Name="DestinationCount" Type="Int">2</Property>
				<Property Name="Exe_iconItemID" Type="Ref">/My Computer/builds/resources/application.ico</Property>
				<Property Name="Source[0].itemID" Type="Str">{257E89A4-AD8F-41CA-BDB4-FB882A9F90D5}</Property>
				<Property Name="Source[0].type" Type="Str">Container</Property>
				<Property Name="Source[1].destinationIndex" Type="Int">0</Property>
				<Property Name="Source[1].itemID" Type="Ref">/My Computer/Test/Test Transcriptor LabVIEW to C code 2.vi</Property>
				<Property Name="Source[1].sourceInclusion" Type="Str">TopLevel</Property>
				<Property Name="Source[1].type" Type="Str">VI</Property>
				<Property Name="SourceCount" Type="Int">2</Property>
				<Property Name="TgtF_fileDescription" Type="Str">Useless Specificatin LabVIEW_Universal_Transcriptor Feature Not supported through RUNTIME</Property>
				<Property Name="TgtF_internalName" Type="Str">Useless Specificatin LabVIEW_Universal_Transcriptor Feature Not supported through RUNTIME</Property>
				<Property Name="TgtF_legalCopyright" Type="Str">Copyright © 2018 </Property>
				<Property Name="TgtF_productName" Type="Str">Useless Specificatin LabVIEW_Universal_Transcriptor Feature Not supported through RUNTIME</Property>
				<Property Name="TgtF_targetfileGUID" Type="Str">{D040994F-A0CA-4637-A48C-B9FCD7C588B1}</Property>
				<Property Name="TgtF_targetfileName" Type="Str">LabVIEW_Universal_Transcriptor.exe</Property>
			</Item>
		</Item>
	</Item>
</Project>
