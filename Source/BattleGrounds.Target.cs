// Copyright by Alex Rothenberg

using UnrealBuildTool;
using System.Collections.Generic;

public class BattleGroundsTarget : TargetRules
{
	public BattleGroundsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "BattleGrounds" } );
	}
}
