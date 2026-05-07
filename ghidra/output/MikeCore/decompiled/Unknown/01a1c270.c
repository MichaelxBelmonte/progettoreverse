// Function: FUN_01a1c270
// Address: 01a1c270
// Size: 854 bytes
// Class: Unknown


ulonglong FUN_01a1c270(undefined8 param_1,byte param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *unaff_RDI;
  bool bVar4;
  undefined4 uVar5;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  longlong lVar3;
  
  FUN_01a58dc0();
  (**(code **)(*local_48 + 0xe30))();
  if (local_38 == 0) {
    bVar4 = true;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_98 + 0xe30))();
    bVar4 = *(int *)(local_a8 + 0xc) == 0;
    if (local_a0 != '\0') {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4) {
    uVar2 = 0;
  }
  else {
    FUN_01a58dc0();
    (**(code **)(*local_48 + 0xe30))();
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    uVar1 = (**(code **)(*unaff_RDI + 0x488))();
    uVar2 = (ulonglong)uVar1;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((byte)uVar1 & param_2) != 0) {
      uVar5 = FUN_01caec40();
      local_88 = DAT_027e1e88;
      if (DAT_027e1e88 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_80 = '\x01';
      FUN_000175c0(uVar5,&local_88);
      lVar3 = local_38;
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        FUN_01a58dc0();
        (**(code **)(*local_48 + 0xe30))();
        lVar3 = local_38;
        local_60 = 0;
        if (local_30 == '\0') {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        local_60 = '\x01';
        local_68 = lVar3;
        (**(code **)(*unaff_RDI + 0x4b8))(DAT_0241b660);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01a58dc0();
        (**(code **)(*local_48 + 0xe30))();
        lVar3 = local_38;
        local_70 = 0;
        if (local_30 == '\0') {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        local_70 = '\x01';
        local_78 = lVar3;
        (**(code **)(*unaff_RDI + 0x4b8))(DAT_02394210);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffffff;
}


