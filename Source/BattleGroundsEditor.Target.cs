// Copyright by Alex Rothenberg

using UnrealBuildTool;
using System.Collections.Generic;

public class BattleGroundsEditorTarget : TargetRules
{
	public BattleGroundsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "BattleGrounds" } );
	}
}
