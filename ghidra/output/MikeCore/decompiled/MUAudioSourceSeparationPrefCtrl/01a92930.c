// Function: FUN_01a92930
// Address: 01a92930
// Size: 1249 bytes
// Class: MUAudioSourceSeparationPrefCtrl
// String references:
//   "%I:%02I"


/* WARNING: Removing unreachable block (ram,0x01a92a67) */
/* WARNING: Removing unreachable block (ram,0x01a92a73) */
/* WARNING: Removing unreachable block (ram,0x01a92db6) */
/* WARNING: Removing unreachable block (ram,0x01a92dc6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01a92930(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  double dVar7;
  ulonglong uVar8;
  ulonglong extraout_XMM0_Qb;
  ulonglong extraout_XMM0_Qb_00;
  ulonglong extraout_XMM0_Qb_01;
  ulonglong extraout_XMM0_Qb_02;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong local_88;
  char local_80;
  double local_78;
  longlong *local_70;
  uint local_68;
  int local_64;
  int local_60;
  double local_58;
  ulonglong uStack_50;
  char local_40;
  undefined7 uStack_3f;
  char local_38;
  
  local_78 = (double)CONCAT44(local_78._4_4_,param_2);
  local_58 = (double)CONCAT44(local_58._4_4_,param_1);
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  dVar7 = (double)(**(code **)(*(longlong *)unaff_RSI[2] + 0x388))();
  local_58 = dVar7 - (double)unaff_RSI[7];
  dVar7 = (double)(**(code **)(*(longlong *)unaff_RSI[2] + 0x388))();
  local_78 = dVar7 - (double)unaff_RSI[7];
  dVar7 = (double)FUN_01a93060();
  local_58 = (double)(**(code **)(*unaff_RSI + 0x370))(local_58 - dVar7);
  local_80 = 0;
  local_88 = unaff_RSI[8];
  uStack_50 = extraout_XMM0_Qb;
  if (local_88 != 0) {
    FUN_00d50b00();
  }
  local_78 = local_78 + dVar7;
  local_80 = '\x01';
  (**(code **)(*unaff_RSI + 0x3a8))(local_58,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (0 < *(int *)((longlong)puVar4 + 0xc)) {
    FUN_00d23340();
    plVar1 = local_70;
    puVar6 = (uint *)&local_40;
    if ((char)local_68 != '\0') {
      puVar6 = &local_68;
    }
    local_40 = (char)local_68;
    *(undefined1 *)puVar6 = 0;
    if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = (double)(**(code **)(*plVar1 + 0x370))();
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if (local_78 <= local_58) goto LAB_01a92e00;
    local_58 = (double)(**(code **)(*unaff_RSI + 0x380))();
    uStack_50 = extraout_XMM0_Qb_00;
  }
  pcVar2 = DAT_025795c0;
  dVar7 = local_58;
  while (dVar7 < local_78) {
    local_58 = dVar7;
    uVar8 = (**(code **)(*(longlong *)unaff_RSI[2] + 0x390))((double)unaff_RSI[7] + dVar7);
    auVar9._0_8_ = uVar8 & _DAT_023945e0;
    auVar9._8_8_ = extraout_XMM0_Qb_02 & _UNK_023945e8;
    auVar11._4_12_ = SUB1612(auVar9 | _DAT_023945f0,4);
    auVar11._0_4_ = SUB164(auVar9 | _DAT_023945f0,0) + (float)uVar8;
    auVar9 = roundss(ZEXT816(0),auVar11,0xb);
    auVar10._8_8_ = uStack_50 & _UNK_023945b8 | _UNK_023945c8;
    auVar10._0_8_ = (double)((ulonglong)local_58 & _DAT_023945b0 | _DAT_023945c0) + local_58;
    auVar11 = roundsd(ZEXT816(0),auVar10,0xb);
    if (DAT_02391030 <= (double)((ulonglong)(auVar11._0_8_ - local_58) & _DAT_023908f0)) {
      FUN_01a8b960(auVar9._0_8_,local_58);
      plVar1 = (longlong *)CONCAT71(uStack_3f,local_40);
      if (local_38 == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = local_68 & 0xffffff00;
      local_70 = plVar1;
      FUN_00d21140();
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      iVar3 = FUN_00e7d850((ulonglong)local_58 & _DAT_023908f0);
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_025795a8;
      (*pcVar2)();
      if (local_58 < 0.0) {
        FUN_00d8db40();
      }
      local_64 = iVar3 / 0x3c;
      local_60 = iVar3 % 0x3c;
      local_68 = 2;
      local_70 = (longlong *)&DAT_024c3df0;
      FUN_00d94d80(&DAT_024c3df0,&local_70);
      FUN_01a8b9f0();
      plVar1 = (longlong *)CONCAT71(uStack_3f,local_40);
      if (local_38 == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = local_68 & 0xffffff00;
      local_70 = plVar1;
      FUN_00d21140();
      if (((char)local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    dVar7 = (double)(**(code **)(*unaff_RSI + 0x380))(local_58);
    uStack_50 = extraout_XMM0_Qb_01;
  }
  puVar5 = (undefined8 *)unaff_RSI[8];
  if (puVar5 != puVar4) {
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    unaff_RSI[8] = (longlong)puVar4;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01a92e00:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


