using UnrealBuildTool;

public class KuakeEditorTarget : TargetRules
{
	public KuakeEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "KuakeCore" } );
	}
}
