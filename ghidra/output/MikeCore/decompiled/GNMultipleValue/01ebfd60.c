// Function: FUN_01ebfd60
// Address: 01ebfd60
// Size: 734 bytes
// Class: GNMultipleValue


void FUN_01ebfd60(undefined8 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined7 uVar6;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined8 local_48;
  longlong local_40;
  char local_38;
  
  lVar7 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar7;
  local_90 = '\x01';
  FUN_01ccab60(param_1,&local_98);
  lVar7 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_02800140;
  lVar2 = DAT_027e7c20;
  if (lVar7 == 0) {
    if (DAT_02800140 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = '\x01';
    uVar4 = FUN_01ccaae0(param_1,&local_68);
    lVar7 = local_40;
    if (local_40 == 0) {
      bVar1 = true;
      lVar7 = 0;
      local_48 = 0;
    }
    else {
      if (local_38 == '\0') {
        uVar4 = FUN_00d50b00();
        bVar1 = false;
        local_48 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        if ((local_38 == '\0') || (local_40 == 0)) goto LAB_01ebffe2;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
        local_48 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      }
      bVar1 = false;
    }
LAB_01ebffe2:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = local_48;
    if (!bVar1) {
      cVar5 = (char)local_48;
      FUN_01d25f70();
      goto LAB_01ec001b;
    }
  }
  else {
    if (DAT_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar2;
    local_80 = '\x01';
    FUN_01ccaae0(param_1,&local_88);
    lVar7 = local_40;
    if (local_40 == 0) {
      lVar7 = 0;
      uVar4 = 0;
    }
    else {
      uVar6 = (undefined7)((ulonglong)lVar2 >> 8);
      if (local_38 == '\0') {
        FUN_00d50b00();
        uVar4 = CONCAT71(uVar6,1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar4 = CONCAT71(uVar6,1);
      }
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d25f70();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01ebfef5;
      }
    }
    else if (local_40 != 0) {
LAB_01ebfef5:
      lVar2 = DAT_027e7c20;
      local_48 = uVar4;
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar2;
      local_70 = '\x01';
      FUN_01ccab60(param_1,&local_78);
      local_58 = local_40;
      local_50 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_50 = '\x01';
      cVar5 = (char)local_48;
      FUN_00c85450(param_1,&local_58);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01ec001b;
    }
  }
  cVar5 = (char)uVar4;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01ec001b:
  if ((cVar5 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}


