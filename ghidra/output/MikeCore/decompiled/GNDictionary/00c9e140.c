// Function: FUN_00c9e140
// Address: 00c9e140
// Size: 991 bytes
// Class: GNDictionary
// String references:
//   "%@%@"


void FUN_00c9e140(float param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 *local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  float local_80;
  undefined4 local_7c;
  undefined8 *local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  float local_34;
  
  local_34 = param_1;
  FUN_00d4ab90();
  puVar6 = local_68;
  lVar2 = DAT_02727800;
  if (local_68 != (undefined8 *)0x0) {
    if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = puVar6;
    goto LAB_00c9e451;
  }
  if (local_34 <= 0.0) {
    if (DAT_02727800 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02773100;
    local_b0 = lVar2;
    local_a8 = '\x01';
    if (DAT_02773100 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar3;
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    uVar4 = FUN_00d31230(&local_90,&local_a0);
    puVar6 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      local_34 = (float)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      puVar6 = (undefined8 *)0x0;
      bVar1 = false;
    }
    else {
      if (local_60 == '\0') {
        FUN_00d50b00();
        local_34 = 0.0;
        bVar1 = true;
        if ((local_60 == '\0') || (local_68 == (undefined8 *)0x0)) goto LAB_00c9e37b;
        FUN_00d50b20();
      }
      else {
        local_60 = '\0';
      }
      bVar1 = true;
      local_34 = 0.0;
    }
LAB_00c9e37b:
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (puVar6 != (undefined8 *)0x0) {
      puVar5 = puVar6;
      if (unaff_RSI[9] == 0) goto LAB_00c9e319;
      local_b8 = puVar6;
      uVar8 = FUN_00083ea0(2,&local_b8);
      FUN_00d8cb40(uVar8,&local_68);
      puVar5 = local_78;
      if (local_78 == puVar6) {
        puVar5 = puVar6;
        if ((local_78 != (undefined8 *)0x0 & local_34._0_1_) == 1) {
          if (local_70 != '\0') goto LAB_00c9e481;
          bVar1 = true;
          FUN_00d50b00();
        }
LAB_00c9e4c0:
        if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_70 == '\0') {
          if (local_78 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if (local_34._0_1_ == '\0') {
            FUN_00d50b20();
          }
          goto LAB_00c9e4c0;
        }
        puVar6 = local_78;
        if (local_34._0_1_ == 0) {
          FUN_00d50b20();
        }
LAB_00c9e481:
        local_70 = '\0';
        bVar1 = true;
        puVar5 = puVar6;
      }
      local_68 = (undefined8 *)&DAT_0253d630;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_68 = &DAT_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00c9e319;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    puVar5 = (undefined8 *)0x0;
  }
  else {
    local_80 = *(float *)(unaff_RSI + 2);
    fVar7 = local_80;
    if (local_80 <= 0.0) {
      *(undefined4 *)(unaff_RSI + 2) = 0x3727c5ac;
      fVar7 = DAT_02411280;
    }
    local_7c = *(undefined4 *)((longlong)unaff_RSI + 0x14);
    uVar8 = (**(code **)(*unaff_RSI + 0x3c8))(fVar7);
    *(undefined4 *)(unaff_RSI + 2) = uVar8;
    uVar8 = (**(code **)(*unaff_RSI + 0x3c8))(*(undefined4 *)((longlong)unaff_RSI + 0x14));
    *(undefined4 *)((longlong)unaff_RSI + 0x14) = uVar8;
    (**(code **)(*unaff_RSI + 0x3c8))(local_34);
    FUN_00d49aa0();
    puVar5 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(float *)(unaff_RSI + 2) = local_80;
    *(undefined4 *)((longlong)unaff_RSI + 0x14) = local_7c;
LAB_00c9e319:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar1) {
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  *unaff_RDI = puVar5;
LAB_00c9e451:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


