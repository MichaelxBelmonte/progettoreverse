// Function: FUN_00e3fb50
// Address: 00e3fb50
// Size: 3770 bytes
// Class: GNString
// String references:
//   "%@.%I"
//   "%@%@"


/* WARNING: Removing unreachable block (ram,0x00e401f5) */
/* WARNING: Removing unreachable block (ram,0x00e40205) */
/* WARNING: Removing unreachable block (ram,0x00e405fc) */
/* WARNING: Removing unreachable block (ram,0x00e40608) */
/* WARNING: Removing unreachable block (ram,0x00e40544) */
/* WARNING: Removing unreachable block (ram,0x00e40550) */
/* WARNING: Removing unreachable block (ram,0x00e40738) */
/* WARNING: Removing unreachable block (ram,0x00e40744) */
/* WARNING: Removing unreachable block (ram,0x00e3fdc3) */
/* WARNING: Removing unreachable block (ram,0x00e3fdcf) */
/* WARNING: Removing unreachable block (ram,0x00e403e5) */
/* WARNING: Removing unreachable block (ram,0x00e403f1) */
/* WARNING: Removing unreachable block (ram,0x00e40915) */
/* WARNING: Removing unreachable block (ram,0x00e40925) */
/* WARNING: Removing unreachable block (ram,0x00e4055e) */
/* WARNING: Removing unreachable block (ram,0x00e4056a) */
/* WARNING: Removing unreachable block (ram,0x00e409e1) */
/* WARNING: Removing unreachable block (ram,0x00e409ed) */
/* WARNING: Removing unreachable block (ram,0x00e40337) */
/* WARNING: Removing unreachable block (ram,0x00e40343) */
/* WARNING: Removing unreachable block (ram,0x00e400f1) */
/* WARNING: Removing unreachable block (ram,0x00e400fd) */

void FUN_00e3fb50(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  uint7 uVar11;
  bool bVar12;
  undefined8 *local_1b8;
  undefined8 *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  char local_88;
  undefined8 *local_80;
  uint local_78;
  undefined8 *local_70;
  char local_68;
  int local_60;
  undefined4 uStack_5c;
  char local_58;
  undefined8 *local_50;
  ulonglong local_48;
  undefined8 *local_40;
  char local_31;
  
  if (*(longlong *)(unaff_RDI + 0x10) == 0) {
    local_40 = (undefined8 *)*param_2;
    if (local_40 == (undefined8 *)0x0) {
      local_48 = 0;
      local_40 = (undefined8 *)0x0;
      plVar6 = (longlong *)*unaff_RSI;
    }
    else {
      local_48 = CONCAT71((int7)((ulonglong)local_40 >> 8),*(char *)(param_2 + 1));
      if (*(char *)(param_2 + 1) == '\0') goto LAB_00e3fc9d;
      FUN_00d50b00();
      plVar6 = (longlong *)*unaff_RSI;
    }
    if (plVar6 != (longlong *)0x0) goto LAB_00e3fca9;
LAB_00e3fc1c:
    local_31 = (char)unaff_RSI[1] != '\0';
    puVar3 = (undefined8 *)0x0;
  }
  else {
    local_e8 = (undefined8 *)*param_2;
    local_c0 = (undefined8 *)*(longlong *)(unaff_RDI + 0x10);
    FUN_00083ea0(2,&local_e8);
    FUN_00d8cb40();
    local_40 = local_90;
    if (local_90 == (undefined8 *)0x0) {
      local_40 = (undefined8 *)0x0;
      local_48 = 0;
    }
    else if (local_88 == '\0') {
      uVar4 = FUN_00d50b00();
      local_48 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
      local_48 = CONCAT71((int7)((ulonglong)local_90 >> 8),1);
    }
    local_80 = (undefined8 *)&DAT_0253d630;
    if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
      FUN_00d50b20();
    }
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_00e3fc9d:
    plVar6 = (longlong *)*unaff_RSI;
    if (plVar6 == (longlong *)0x0) goto LAB_00e3fc1c;
LAB_00e3fca9:
    puVar3 = (undefined8 *)(**(code **)(*plVar6 + 0x10))();
    local_31 = (char)unaff_RSI[1] != '\0';
    if (((bool)local_31) && (puVar3 != (undefined8 *)0x0)) {
      FUN_00d50b00();
      local_31 = true;
    }
  }
  local_e8 = local_40;
  local_c8 = puVar3;
  local_c0 = puVar3;
  FUN_00083ea0(2,&local_e8);
  FUN_019f9540();
  puVar5 = local_90;
  if (local_88 == '\0') {
    if (((local_90 != (undefined8 *)0x0) && (FUN_00d50b00(), local_88 != '\0')) &&
       (local_90 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_88 = '\0';
  }
  local_a0 = puVar5;
  local_80 = (undefined8 *)&DAT_0253d630;
  if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
    FUN_00d50b20();
  }
  local_80 = &DAT_024c5048;
  if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e41440();
  puVar5 = local_80;
  if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 == (undefined8 *)0x0) {
    local_80 = local_40;
    local_78 = local_78 & 0xffffff00;
    cVar1 = FUN_00c9ff50();
    if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      local_80 = local_40;
      local_78 = local_78 & 0xffffff00;
      cVar1 = FUN_00c9ff50();
      if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar3 = local_40;
      if (cVar1 == '\0') {
        local_98 = 0;
        puVar3 = (undefined8 *)0x0;
        cVar1 = local_31;
        goto LAB_00e4010e;
      }
      FUN_000175c0();
      local_90 = local_e8;
      local_1b8 = puVar3;
      FUN_00083ea0(2,&local_1b8);
      FUN_019f9540();
      puVar5 = local_c0;
      if (local_b8 == '\0') {
        if (local_c0 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      local_90 = puVar5;
      local_88 = '\0';
      FUN_00ca0840();
      if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_80 = (undefined8 *)&DAT_0253d630;
      if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
        FUN_00d50b20();
      }
      local_80 = &DAT_024c5048;
      if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02575d80;
      uVar4 = (*DAT_02575d98)();
      local_98 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      FUN_00d46080();
      local_80 = local_40;
      local_78 = local_78 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar8 = local_40;
      local_78 = 2;
      local_80 = &DAT_024c5048;
      local_68 = 0;
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar8;
      local_68 = '\x01';
      local_80 = (undefined8 *)&DAT_025df2a0;
      local_60 = 2;
      FUN_00d8cb40();
      puVar7 = local_90;
      uVar10 = (undefined7)((ulonglong)puVar5 >> 8);
      if (local_90 == puVar8) {
        if (((char)local_48 == '\0') && (local_40 != (undefined8 *)0x0)) {
          puVar7 = local_40;
          if (local_88 != '\0') goto LAB_00e406ba;
          uVar9 = CONCAT71(uVar10,1);
          FUN_00d50b00();
        }
        else {
          uVar9 = local_48 & 0xffffffff;
        }
LAB_00e40948:
        cVar1 = local_31;
        if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_88 == '\0') {
          if (local_90 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          uVar9 = CONCAT71(uVar10,1);
          if (((char)local_48 == '\0') || (local_40 == (undefined8 *)0x0)) {
            local_40 = puVar7;
          }
          else {
            local_40 = puVar7;
            FUN_00d50b20();
          }
          goto LAB_00e40948;
        }
        if (((char)local_48 != '\0') && (local_40 != (undefined8 *)0x0)) {
          local_40 = local_90;
          FUN_00d50b20();
        }
LAB_00e406ba:
        local_88 = '\0';
        uVar9 = CONCAT71(uVar10,1);
        cVar1 = local_31;
        local_40 = puVar7;
      }
      local_80 = &DAT_024c5048;
      if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_80 = local_a0;
      local_78 = local_78 & 0xffffff00;
      uVar4 = FUN_00ca0840();
      if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        uVar4 = FUN_00d50b20();
      }
      local_98 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    else {
      uVar4 = FUN_000175c0();
      puVar5 = local_80;
      if (local_80 == (undefined8 *)0x0) {
        local_98 = 0;
        local_50 = (undefined8 *)0x0;
        bVar12 = false;
joined_r0x00e400ae:
        if (((char)local_78 != '\0') &&
           (bVar12 = puVar5 != (undefined8 *)0x0, local_80 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((char)local_78 == '\0') {
          uVar4 = FUN_00d50b00();
          local_98 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          bVar12 = puVar5 != (undefined8 *)0x0;
          local_50 = puVar5;
          goto joined_r0x00e400ae;
        }
        local_78 = local_78 & 0xffffff00;
        local_98 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        local_50 = local_80;
        bVar12 = true;
      }
      iVar2 = FUN_00d45870();
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02575d80;
      uVar4 = (*DAT_02575d98)();
      uVar10 = (undefined7)((ulonglong)uVar4 >> 8);
      if (puVar3 == local_50) {
        if (puVar5 == (undefined8 *)0x0) {
          local_98 = CONCAT71(uVar10,1);
          puVar3 = local_50;
        }
        else {
          FUN_00d50b20();
          puVar3 = local_50;
        }
      }
      else {
        local_98 = CONCAT71(uVar10,1);
        if ((bool)(bVar12 & local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d46080();
      local_80 = local_40;
      local_78 = local_78 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar5 = local_40;
      local_78 = 2;
      local_80 = &DAT_024c5048;
      local_68 = 0;
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar5;
      local_68 = '\x01';
      local_80 = (undefined8 *)&DAT_025df2a0;
      local_60 = iVar2 + 1;
      FUN_00d8cb40();
      puVar8 = local_90;
      uVar11 = (uint7)(uint3)((uint)(iVar2 + 1) >> 8);
      if (local_90 == puVar5) {
        if (((char)local_48 == '\0') && (local_40 != (undefined8 *)0x0)) {
          puVar8 = local_40;
          if (local_88 != '\0') goto LAB_00e407e7;
          uVar9 = CONCAT71(uVar11,1);
          FUN_00d50b00();
        }
        else {
          uVar9 = local_48 & 0xffffffff;
        }
LAB_00e40881:
        cVar1 = local_31;
        if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_88 == '\0') {
          if (local_90 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          uVar9 = CONCAT71(uVar11,1);
          if (((char)local_48 == '\0') || (local_40 == (undefined8 *)0x0)) {
            local_40 = puVar8;
          }
          else {
            local_40 = puVar8;
            FUN_00d50b20();
          }
          goto LAB_00e40881;
        }
        if (((char)local_48 != '\0') && (local_40 != (undefined8 *)0x0)) {
          local_40 = local_90;
          FUN_00d50b20();
        }
LAB_00e407e7:
        local_88 = '\0';
        uVar9 = CONCAT71(uVar11,1);
        cVar1 = local_31;
        local_40 = puVar8;
      }
      local_80 = &DAT_024c5048;
      if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      local_80 = local_a0;
      local_78 = local_78 & 0xffffff00;
      FUN_00ca0840();
      if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_48 = uVar9 & 0xffffffff;
    goto LAB_00e4010e;
  }
  uVar4 = FUN_00e41440();
  cVar1 = local_31;
  puVar5 = local_80;
  uVar10 = (undefined7)((ulonglong)puVar3 >> 8);
  if (local_80 == local_40) {
    if (((char)local_48 == '\0') && (local_80 != (undefined8 *)0x0)) {
      puVar5 = local_40;
      if ((char)local_78 != '\0') goto LAB_00e3ff36;
      uVar9 = CONCAT71(uVar10,1);
      FUN_00d50b00();
    }
    else {
      uVar9 = local_48 & 0xffffffff;
    }
LAB_00e400c5:
    if (((char)local_78 == '\0') || (local_80 == (undefined8 *)0x0)) {
      local_48 = uVar9 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      local_48 = uVar9 & 0xffffffff;
    }
  }
  else {
    if ((char)local_78 == '\0') {
      if (local_80 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      uVar9 = CONCAT71(uVar10,1);
      if (((char)local_48 == '\0') || (local_40 == (undefined8 *)0x0)) {
        local_40 = puVar5;
      }
      else {
        local_40 = puVar5;
        FUN_00d50b20();
      }
      goto LAB_00e400c5;
    }
    if (((char)local_48 != '\0') && (local_40 != (undefined8 *)0x0)) {
      local_40 = local_80;
      uVar4 = FUN_00d50b20();
    }
LAB_00e3ff36:
    local_78 = local_78 & 0xffffff00;
    local_48 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    local_40 = puVar5;
  }
  local_98 = 0;
  puVar3 = (undefined8 *)0x0;
LAB_00e4010e:
  local_d0 = 0;
  if ((longlong *)*unaff_RSI == (longlong *)0x0) {
    local_d8 = 0;
  }
  else {
    local_d8 = (**(code **)(*(longlong *)*unaff_RSI + 0x10))();
  }
  local_d0 = '\0';
  local_80 = local_40;
  local_78 = local_78 & 0xffffff00;
  FUN_00ca0840();
  if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (*param_1 == 0) {
    FUN_00d8ede0();
    local_b0 = local_90;
    local_a8 = 0;
    if (local_88 == '\0') {
      if (local_90 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_a8 = '\x01';
    local_80 = local_40;
    local_78 = local_78 & 0xffffff00;
    FUN_00ca0840();
    puVar5 = local_c8;
    if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = local_40;
    local_78 = local_78 & 0xffffff00;
    FUN_00ca0840();
    puVar5 = local_c8;
    if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_80 = local_40;
  local_78 = local_78 & 0xffffff00;
  FUN_00ca0840();
  if (((char)local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a0 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar1 != '\0') && (puVar5 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (puVar3 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


