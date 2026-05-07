// Function: FUN_00b6e810
// Address: 00b6e810
// Size: 1362 bytes
// Class: Unknown
// String references:
//   "%@ %@"


void FUN_00b6e810(void)

{
  longlong lVar1;
  int iVar2;
  longlong *unaff_RDI;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_9c;
  longlong local_98;
  char local_90;
  undefined4 local_84;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 *local_48;
  char local_40;
  char local_31;
  
  local_84 = 0;
  local_9c = 0;
  iVar2 = _MIDIEndpointGetEntity();
  if ((iVar2 == 0) && (iVar2 = _MIDIEntityGetDevice(), iVar2 == 0)) {
    local_50 = 0;
    iVar2 = _MIDIObjectGetStringProperty();
    if (iVar2 == 0) {
      FUN_00e1c780();
      puVar4 = local_80;
      if (local_80 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
        if (((local_78 == '\0') && (FUN_00d50b00(), local_78 != '\0')) &&
           (local_80 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_50 != 0) {
        _CFRelease();
      }
    }
    else {
      cVar3 = '\0';
      puVar4 = (undefined8 *)0x0;
    }
    local_a8 = 0;
    iVar2 = _MIDIObjectGetStringProperty();
    if (iVar2 == 0) {
      local_31 = cVar3;
      if (puVar4 == (undefined8 *)0x0) {
        FUN_00e1c780();
        puVar5 = local_80;
        if (local_80 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          local_31 = '\x01';
          if (((local_78 == '\0') && (FUN_00d50b00(), local_78 != '\0')) &&
             (local_80 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00e1c780();
        local_b0 = local_98;
        FUN_00083ea0(2,&local_b0);
        FUN_00d8cb40();
        puVar5 = local_48;
        if (local_48 == puVar4) {
          puVar5 = puVar4;
          if ((cVar3 == '\0') && (local_48 != (undefined8 *)0x0)) {
            if (local_40 != '\0') goto LAB_00b6ecc5;
            local_31 = '\x01';
            FUN_00d50b00();
          }
LAB_00b6ecd2:
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            local_31 = '\x01';
            if (cVar3 != '\0') {
              FUN_00d50b20();
            }
            goto LAB_00b6ecd2;
          }
          if (cVar3 != '\0') {
            FUN_00d50b20();
          }
LAB_00b6ecc5:
          local_40 = '\0';
          local_31 = '\x01';
        }
        local_80 = (undefined8 *)&DAT_0253d630;
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        local_80 = &DAT_024c5048;
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
      cVar3 = local_31;
      puVar4 = puVar5;
      if (local_a8 != 0) {
        _CFRelease();
      }
    }
  }
  else {
    cVar3 = '\0';
    puVar4 = (undefined8 *)0x0;
  }
  local_50 = 0;
  iVar2 = _MIDIObjectGetStringProperty();
  if (iVar2 != 0) goto LAB_00b6eae4;
  if (puVar4 == (undefined8 *)0x0) {
    FUN_00e1c780();
    puVar4 = local_80;
    if (local_80 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      cVar3 = '\x01';
      if (((local_78 == '\0') && (FUN_00d50b00(), local_78 != '\0')) &&
         (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00e1c780();
    local_b0 = local_98;
    FUN_00083ea0(2,&local_b0);
    FUN_00d8cb40();
    puVar5 = local_48;
    if (local_48 == puVar4) {
      if ((cVar3 == '\0') && (local_48 != (undefined8 *)0x0)) {
        if (local_40 != '\0') goto LAB_00b6ea74;
        FUN_00d50b00();
        cVar3 = '\x01';
      }
joined_r0x00b6ea5f:
      if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40 == '\0') {
        if (local_48 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        bVar6 = cVar3 != '\0';
        puVar4 = puVar5;
        cVar3 = '\x01';
        if (bVar6) {
          FUN_00d50b20();
          cVar3 = '\x01';
        }
        goto joined_r0x00b6ea5f;
      }
      puVar4 = local_48;
      if (cVar3 != '\0') {
        FUN_00d50b20();
      }
LAB_00b6ea74:
      local_40 = '\0';
      cVar3 = '\x01';
    }
    local_80 = (undefined8 *)&DAT_0253d630;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    _CFRelease();
  }
LAB_00b6eae4:
  lVar1 = DAT_02763500;
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (cVar3 == '\0') {
      FUN_00d50b00();
    }
    *unaff_RDI = (longlong)puVar4;
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


