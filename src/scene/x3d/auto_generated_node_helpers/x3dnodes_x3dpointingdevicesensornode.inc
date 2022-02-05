{ -*- buffer-read-only: t -*-

  Copyright 2015-2021 Michalis Kamburelis.

  This file is part of "Castle Game Engine".

  "Castle Game Engine" is free software; see the file COPYING.txt,
  included in this distribution, for details about the copyright.

  "Castle Game Engine" is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

  ----------------------------------------------------------------------------
}

{ Automatically generated node properties.

  Do not edit this file manually!
  To add new properties:
  - add them to the text files in tools/internal/x3d-nodes-to-pascal/nodes-specification/ ,
  - and regenerate include files by running x3d-nodes-to-pascal .

  The documentation for properties should go to x3dnodes_documentation.txt . }

{$ifdef read_interface}

  strict private
    function GetDescription: String;
    procedure SetDescription(const Value: String);
  public
    procedure CreateNode; override;
    class function ClassX3DType: string; override;

    strict private FFdDescription: TSFString;
    { X3D field "description". } { }
    public property FdDescription: TSFString read FFdDescription;
    { X3D field "description". } { }
    property Description: String read GetDescription write SetDescription;

    strict private FEventIsOver: TSFBoolEvent;
    { X3D out event "isOver". } { }
    public property EventIsOver: TSFBoolEvent read FEventIsOver;

{$endif read_interface}

{$ifdef read_implementation}

{ TAbstractPointingDeviceSensorNode ----------------------------------------------- }

function TAbstractPointingDeviceSensorNode.GetDescription: String;
begin
  Result := FdDescription.Value;
end;

procedure TAbstractPointingDeviceSensorNode.SetDescription(const Value: String);
begin
  FdDescription.Send(Value);
end;

class function TAbstractPointingDeviceSensorNode.ClassX3DType: String;
begin
  Result := 'X3DPointingDeviceSensorNode';
end;

procedure TAbstractPointingDeviceSensorNode.CreateNode;
begin
  inherited;

  FFdDescription := TSFString.Create(Self, True, 'description', '');
   FdDescription.ChangeAlways := chVisibleNonGeometry;
  AddField(FFdDescription);

  FEventIsOver := TSFBoolEvent.Create(Self, 'isOver', false);
  AddEvent(FEventIsOver);
end;

{$endif read_implementation}