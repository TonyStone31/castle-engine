{ This is NOT auto-generated, contrary to most CGE applications.

  This file is used to build and run the application on desktop (standalone) platforms,
  from various tools:
  - Castle Game Engine command-line build tool
  - Castle Game Engine editor
  - Lazarus IDE
  - Delphi IDE
}

{$ifdef MSWINDOWS} {$APPTYPE CONSOLE} { $apptype GUI} {$endif}

{ This adds icons and version info for Windows,
  automatically created by "castle-engine compile". }
{$ifdef CASTLE_AUTO_GENERATED_RESOURCES} {$R castle-auto-generated-resources.res} {$endif}

uses
  {$if defined(FPC) and (not defined(CASTLE_DISABLE_THREADS))}
    {$info Thread support enabled.}
    {$ifdef UNIX} CThreads, {$endif}
  {$endif}
  SysUtils, CastleAutoGenerated, CastleWindow, GameInitialize, CastleParameters,
  CastleApplicationProperties, CastleConsoleTester;

var
  ConsoleTester: TCastleConsoleTester;
begin
  if Parameters.IndexOf('--console') = -1 then
  begin
    if Application.MainWindow <> nil then
      Application.MainWindow.OpenAndRun;
  end else
  begin
    { Avoid warnings that opening files too early. }
    ApplicationProperties._FileAccessSafe := true;
    ConsoleTester := TCastleConsoleTester.Create;
    try
      ConsoleTester.Run(ConsoleTester.GetTestCaseNameFromParameters);
    finally
      FreeAndNil(ConsoleTester);
    end;
  end;
end.