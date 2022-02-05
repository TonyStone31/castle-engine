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

  public
    procedure CreateNode; override;
    class function ClassX3DType: string; override;

    strict private FFdKeyValue: TMFVec3f;
    { X3D field "keyValue". } { }
    public property FdKeyValue: TMFVec3f read FFdKeyValue;
    { Set X3D field "keyValue". } { }
    procedure SetKeyValue(const Value: array of TVector3); overload;
    { Set X3D field "keyValue". } { }
    procedure SetKeyValue(const Value: TVector3List); overload;

    strict private FEventValue_changed: TMFVec3fEvent;
    { X3D out event "value_changed". } { }
    public property EventValue_changed: TMFVec3fEvent read FEventValue_changed;

{$endif read_interface}

{$ifdef read_implementation}

{ TCoordinateInterpolatorNode ----------------------------------------------- }

procedure TCoordinateInterpolatorNode.SetKeyValue(const Value: array of TVector3);
begin
  FdKeyValue.Send(Value);
end;

procedure TCoordinateInterpolatorNode.SetKeyValue(const Value: TVector3List);
begin
  FdKeyValue.Send(Value);
end;

class function TCoordinateInterpolatorNode.ClassX3DType: String;
begin
  Result := 'CoordinateInterpolator';
end;

procedure TCoordinateInterpolatorNode.CreateNode;
begin
  inherited;

  FFdKeyValue := TMFVec3f.Create(Self, True, 'keyValue', []);
   FdKeyValue.ChangeAlways := chNone;
  AddField(FFdKeyValue);

  FEventValue_changed := TMFVec3fEvent.Create(Self, 'value_changed', false);
  AddEvent(FEventValue_changed);
end;

{$endif read_implementation}