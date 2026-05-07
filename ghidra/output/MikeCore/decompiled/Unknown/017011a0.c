// Function: FUN_017011a0
// Address: 017011a0
// Size: 1509 bytes
// Class: Unknown
// String references:
//   "%I bpm  (%I)"
//   "%@ = %I bpm  (%I)"
//   "%I bpm"
//   "%@ = %I bpm"


undefined8 * FUN_017011a0(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  int iVar8;
  pthread_key_t pVar9;
  undefined8 *unaff_RDI;
  ulonglong uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 local_e8;
  undefined1 local_e0;
  double local_d8;
  uint *local_d0;
  double local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  char local_a0;
  double local_98;
  uint local_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  uint local_70;
  undefined4 local_6c;
  longlong local_68;
  char local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 *local_50;
  uint local_48;
  undefined4 local_44;
  undefined8 *local_40;
  char local_38;
  double *pdVar10;
  
  local_d0 = param_1;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  local_88 = puVar6;
  (*DAT_02572370)();
  local_8c = 0;
  local_c0 = 120.0;
  local_e8 = *param_2;
  local_e0 = 0;
  pdVar10 = &local_c0;
  local_b8 = param_2;
  FUN_016fafa0(pdVar10,&local_e8,&local_8c);
  puVar6 = local_78;
  if (((char)local_70 == '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  if (7 < *(int *)(puVar6 + 3)) {
    uVar11 = 0;
    local_80 = puVar6;
    do {
      pVar9 = (pthread_key_t)pdVar10;
      local_b0 = *(undefined8 *)(puVar6[2] + uVar11 * 8);
      local_98 = local_c0;
      local_d8 = (double)FUN_00e7c860();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = (undefined8 *)FUN_0190a000();
      FUN_00e7bdc0();
      puVar6 = local_80;
      local_98 = local_98 * local_d8;
      if ((int)((ulonglong)local_78 >> 0x20) == 1) {
        uVar5 = SUB84(local_78,0);
        if (uVar11 == local_8c) {
          local_6c = FUN_00e7d850(local_98);
          local_70 = 2;
          local_78 = (undefined8 *)&DAT_024c3df0;
          local_68 = CONCAT44(local_68._4_4_,uVar5);
          FUN_00d8cb40(extraout_XMM0_Qa,&local_78);
          puVar3 = local_50;
          puVar6 = local_80;
          if ((char)local_48 == '\0') {
            if (local_50 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = local_48 & 0xffffff00;
          }
          local_40 = puVar3;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar3 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d970b0();
          uVar4 = FUN_00e7d850(local_98);
          lVar2 = local_a8;
          local_70 = 3;
          local_78 = &DAT_024c5048;
          local_60 = 0;
          uVar12 = extraout_XMM0_Qa_00;
          if (local_a8 != 0) {
            uVar12 = FUN_00d50b00();
          }
          local_68 = lVar2;
          local_60 = '\x01';
          local_78 = (undefined8 *)&DAT_02509758;
          local_58 = uVar4;
          local_54 = uVar5;
          FUN_00d8cb40(uVar12,&local_78);
          puVar3 = local_50;
          puVar6 = local_80;
          if ((char)local_48 == '\0') {
            if (local_50 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = local_48 & 0xffffff00;
          }
          local_40 = puVar3;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar3 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          local_78 = &DAT_024c5048;
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if (uVar11 == local_8c) {
        local_44 = FUN_00e7d850(local_98);
        local_48 = 1;
        local_50 = &DAT_024cc6f0;
        FUN_00d8cb40(&DAT_024cc6f0,&local_50);
        puVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = puVar3;
        local_70 = local_70 & 0xffffff00;
        FUN_00d21140();
        if (((char)local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d970b0();
        uVar5 = FUN_00e7d850(local_98);
        lVar2 = local_a8;
        local_70 = 2;
        local_78 = &DAT_024c5048;
        local_60 = 0;
        uVar12 = extraout_XMM0_Qa_01;
        if (local_a8 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_68 = lVar2;
        local_60 = '\x01';
        local_78 = (undefined8 *)&DAT_025df2a0;
        local_58 = uVar5;
        FUN_00d8cb40(uVar12,&local_78);
        puVar3 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
        }
        local_40 = puVar3;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_78 = &DAT_024c5048;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      uVar11 = uVar11 + 1;
      iVar1 = *(int *)(puVar6 + 3);
      iVar8 = iVar1 + 7;
      if (-1 < iVar1) {
        iVar8 = iVar1;
      }
      pdVar10 = (double *)(ulonglong)(uint)(iVar8 >> 3);
    } while ((longlong)uVar11 < (longlong)(iVar8 >> 3));
  }
  if (local_d0 != (uint *)0x0) {
    *local_d0 = local_8c;
  }
  *unaff_RDI = local_88;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}


