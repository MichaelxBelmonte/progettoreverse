// Function: FUN_000bff70
// Address: 000bff70
// Size: 807 bytes
// Class: Unknown


void FUN_000bff70(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong *local_30;
  undefined4 local_28;
  
  uVar1 = *(uint *)(unaff_RDI + 0x30);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 0x10) == 0) {
        if ((uVar1 & 0x20) != 0) {
          local_70 = *(longlong *)(unaff_RDI + 0x10);
          local_68 = '\0';
          uVar2 = FUN_00d8b910();
          local_28 = 0;
          local_30 = (longlong *)&DAT_024caff8;
          FUN_00d3af80(&DAT_027ef998,uVar2,&local_30);
          (**(code **)(*local_60 + 0x368))();
          if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_80 = *(longlong *)(unaff_RDI + 0x10);
        local_78 = '\0';
        uVar2 = FUN_00d8b910();
        local_50 = *unaff_RSI;
        local_58 = 1;
        local_60 = &DAT_024c5048;
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        FUN_00d3af80(&DAT_026dc63a,uVar2,&local_60);
        (**(code **)(*local_30 + 0x368))();
        if (((char)local_28 != '\0') && (local_30 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_60 = &DAT_024c5048;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_90 = *(longlong *)(unaff_RDI + 0x10);
      local_88 = '\0';
      uVar2 = FUN_00d8b910();
      local_50 = *param_2;
      local_58 = 1;
      local_60 = &DAT_024c5048;
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      FUN_00d3af80(&DAT_026dc637,uVar2,&local_60);
      (**(code **)(*local_30 + 0x368))();
      if (((char)local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = &DAT_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a0 = *(longlong *)(unaff_RDI + 0x10);
    local_98 = '\0';
    uVar2 = FUN_00d8b910();
    local_a8 = *param_2;
    FUN_00083ea0(2,&local_a8);
    FUN_00d3af80(&DAT_026dc633,uVar2,&local_60);
    (**(code **)(*local_30 + 0x368))();
    if (((char)local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_60 = (longlong *)&DAT_0253d630;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


