<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="14008000">
	<Property Name="CCSymbols" Type="Str"></Property>
	<Property Name="NI.LV.All.SourceOnly" Type="Bool">true</Property>
	<Property Name="NI.Project.Description" Type="Str"></Property>
	<Item Name="My Computer" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="miscellanea" Type="Folder">
			<Item Name="HighlightByUID.vi" Type="VI" URL="../HighlightByUID.vi"/>
		</Item>
		<Item Name="reading" Type="Folder">
			<Item Name="generators" Type="Folder">
				<Item Name="GeneratePropertyGetters.vi" Type="VI" URL="../GeneratePropertyGetters.vi"/>
				<Item Name="GeneratePropertyGettersForType.vi" Type="VI" URL="../GeneratePropertyGettersForType.vi"/>
				<Item Name="HelperLabelText.vi" Type="VI" URL="../HelperLabelText.vi"/>
				<Item Name="HelperOwnerUID.vi" Type="VI" URL="../HelperOwnerUID.vi"/>
				<Item Name="HelperRefUID.vi" Type="VI" URL="../HelperRefUID.vi"/>
				<Item Name="ParameterInterceptorInfo.vi" Type="VI" URL="../ParameterInterceptorInfo.vi"/>
			</Item>
			<Item Name="helpers" Type="Folder">
				<Item Name="ReadArray.vi" Type="VI" URL="../ReadArray.vi"/>
				<Item Name="ReadBundler.vi" Type="VI" URL="../ReadBundler.vi"/>
				<Item Name="ReadCluster.vi" Type="VI" URL="../ReadCluster.vi"/>
				<Item Name="ReadCompoundArithmetic.vi" Type="VI" URL="../ReadCompoundArithmetic.vi"/>
				<Item Name="ReadControl.vi" Type="VI" URL="../ReadControl.vi"/>
				<Item Name="ReadDiagram.vi" Type="VI" URL="../ReadDiagram.vi"/>
				<Item Name="ReadForLoop.vi" Type="VI" URL="../ReadForLoop.vi"/>
				<Item Name="ReadFormula.vi" Type="VI" URL="../ReadFormula.vi"/>
				<Item Name="ReadFormulaParameter.vi" Type="VI" URL="../ReadFormulaParameter.vi"/>
				<Item Name="ReadInlineCNode.vi" Type="VI" URL="../ReadInlineCNode.vi"/>
				<Item Name="ReadLeftShiftRegister.vi" Type="VI" URL="../ReadLeftShiftRegister.vi"/>
				<Item Name="ReadNumeric.vi" Type="VI" URL="../ReadNumeric.vi"/>
				<Item Name="ReadPanel.vi" Type="VI" URL="../ReadPanel.vi"/>
				<Item Name="ReadRightShiftRegister.vi" Type="VI" URL="../ReadRightShiftRegister.vi"/>
				<Item Name="ReadRingConstant.vi" Type="VI" URL="../ReadRingConstant.vi"/>
				<Item Name="ReadSubVI.vi" Type="VI" URL="../ReadSubVI.vi"/>
				<Item Name="ReadTerminal.vi" Type="VI" URL="../ReadTerminal.vi"/>
				<Item Name="ReadTunnel.vi" Type="VI" URL="../ReadTunnel.vi"/>
				<Item Name="ReadUnbundler.vi" Type="VI" URL="../ReadUnbundler.vi"/>
				<Item Name="ReadVIInternal.vi" Type="VI" URL="../ReadVIInternal.vi"/>
				<Item Name="ReadWhileLoop.vi" Type="VI" URL="../ReadWhileLoop.vi"/>
				<Item Name="ReadWire.vi" Type="VI" URL="../ReadWire.vi"/>
			</Item>
			<Item Name="ReadVI.vi" Type="VI" URL="../ReadVI.vi"/>
		</Item>
		<Item Name="writing" Type="Folder">
			<Item Name="helpers" Type="Folder">
				<Item Name="ControlStyleReference.vi" Type="VI" URL="../ControlStyleReference.vi"/>
				<Item Name="GetReferenceByUID.vi" Type="VI" URL="../GetReferenceByUID.vi"/>
				<Item Name="GetReferenceByUID_traverser.vi" Type="VI" URL="../GetReferenceByUID_traverser.vi"/>
				<Item Name="NewCustomVIOwnerByUID.vi" Type="VI" URL="../NewCustomVIOwnerByUID.vi"/>
				<Item Name="NewVIObjectOwnerByUID.vi" Type="VI" URL="../NewVIObjectOwnerByUID.vi"/>
				<Item Name="VICloseSave.vi" Type="VI" URL="../VICloseSave.vi"/>
			</Item>
			<Item Name="BundlerCreate.vi" Type="VI" URL="../BundlerCreate.vi"/>
			<Item Name="CleanUpDiagram.vi" Type="VI" URL="../CleanUpDiagram.vi"/>
			<Item Name="CompoundArithmeticCreate.vi" Type="VI" URL="../CompoundArithmeticCreate.vi"/>
			<Item Name="ControlArrayCreate.vi" Type="VI" URL="../ControlArrayCreate.vi"/>
			<Item Name="ControlClusterCreate.vi" Type="VI" URL="../ControlClusterCreate.vi"/>
			<Item Name="ControlCreate.vi" Type="VI" URL="../ControlCreate.vi"/>
			<Item Name="FormulaAddIO.vi" Type="VI" URL="../FormulaAddIO.vi"/>
			<Item Name="FormulaCleanup.vi" Type="VI" URL="../FormulaCleanup.vi"/>
			<Item Name="FormulaCreate.vi" Type="VI" URL="../FormulaCreate.vi"/>
			<Item Name="GObjectDelete.vi" Type="VI" URL="../GObjectDelete.vi"/>
			<Item Name="LoopAddShiftRegister.vi" Type="VI" URL="../LoopAddShiftRegister.vi"/>
			<Item Name="LoopCreate.vi" Type="VI" URL="../LoopCreate.vi"/>
			<Item Name="RingConstantCreate.vi" Type="VI" URL="../RingConstantCreate.vi"/>
			<Item Name="StdCallTemplate.vit" Type="VI" URL="../StdCallTemplate.vit"/>
			<Item Name="SubVICreate.vi" Type="VI" URL="../SubVICreate.vi"/>
			<Item Name="VICreate.vi" Type="VI" URL="../VICreate.vi"/>
			<Item Name="WireConnect.vi" Type="VI" URL="../WireConnect.vi"/>
		</Item>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="LVBoundsTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBoundsTypeDef.ctl"/>
				<Item Name="LVBreakpointStatusEnum.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBreakpointStatusEnum.ctl"/>
				<Item Name="LVDataSocketStatusTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVDataSocketStatusTypeDef.ctl"/>
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
				<Item Name="TRef Traverse.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/traverseref.llb/TRef Traverse.vi"/>
				<Item Name="TRef TravTarget.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/traverseref.llb/TRef TravTarget.ctl"/>
				<Item Name="VI Scripting - Traverse.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/traverseref.llb/VI Scripting - Traverse.lvlib"/>
			</Item>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
