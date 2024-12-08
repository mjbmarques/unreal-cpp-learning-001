// Copyright MJBM

using UnrealBuildTool;
using System.Collections.Generic;

public class MyProjectEditorTarget : TargetRules
{
	public MyProjectEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "MyProject" } );
	}
}
