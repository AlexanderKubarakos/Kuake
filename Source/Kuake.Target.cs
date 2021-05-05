using UnrealBuildTool;

public class KuakeTarget : TargetRules
{
	public KuakeTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "KuakeCore" } );
	}
}