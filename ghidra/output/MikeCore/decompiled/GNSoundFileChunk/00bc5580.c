// Function: FUN_00bc5580
// Address: 00bc5580
// Size: 1689 bytes
// Class: GNSoundFileChunk


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bc5580(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *unaff_RSI;
  ulonglong uVar11;
  undefined8 *unaff_RDI;
  bool bVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar13;
  double dVar14;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  char local_30;
  
  if ((DAT_028a56f0 == 0) || (DAT_028a56f9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a56f0 == 0) {
      FUN_00bc5e50();
      puVar8 = (undefined8 *)DAT_028a56d0;
      if ((undefined8 *)DAT_028a56d0 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            FUN_00d50b00();
            puVar8 = local_38;
          }
        }
        else {
          local_30 = '\0';
          puVar8 = local_38;
        }
        bVar2 = DAT_028a56d0 != 0;
        DAT_028a56d0 = (longlong)puVar8;
        if (bVar2) {
          FUN_00d50b20();
          puVar8 = local_38;
        }
      }
      if ((puVar8 != (undefined8 *)0x0) && (DAT_028a56d8 == '\0')) {
        DAT_028a56d8 = '\x01';
        FUN_00e8cb90();
        puVar8 = local_38;
      }
      if ((local_30 != '\0') && (puVar8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_02581c90;
      (*DAT_02581ca8)();
      if (DAT_028a56e0 == puVar8) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = DAT_028a56e0 != (undefined8 *)0x0;
        DAT_028a56e0 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a56e8 == '\0') {
        DAT_028a56e8 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      local_58 = 0;
      local_50 = '\0';
      FUN_00da62d0(_DAT_02391038,&local_58);
      puVar8 = (undefined8 *)DAT_028a56f0;
      if ((undefined8 *)DAT_028a56f0 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            FUN_00d50b00();
            puVar8 = local_38;
          }
        }
        else {
          local_30 = '\0';
          puVar8 = local_38;
        }
        bVar2 = DAT_028a56f0 != 0;
        DAT_028a56f0 = (longlong)puVar8;
        if (bVar2) {
          FUN_00d50b20();
          puVar8 = local_38;
        }
      }
      if ((puVar8 != (undefined8 *)0x0) && (DAT_028a56f8 == '\0')) {
        DAT_028a56f8 = '\x01';
        FUN_00e8cb90();
        puVar8 = local_38;
      }
      if ((local_30 != '\0') && (puVar8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      DAT_028a56f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a56f9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028a5730 == 0) || (DAT_028a5739 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5730 == 0) {
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a5700 == puVar8) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = DAT_028a5700 != (undefined8 *)0x0;
        DAT_028a5700 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5708 == '\0') {
        DAT_028a5708 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar7 = (longlong)&DAT_02573318;
      (*DAT_02573330)();
      if (DAT_028a5710 == plVar7) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = DAT_028a5710 != (longlong *)0x0;
        DAT_028a5710 = plVar7;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5718 == '\0') {
        DAT_028a5718 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_02581c90;
      (*DAT_02581ca8)();
      if (DAT_028a5720 == puVar8) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = DAT_028a5720 != (undefined8 *)0x0;
        DAT_028a5720 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5728 == '\0') {
        DAT_028a5728 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      local_48 = 0;
      local_40 = '\0';
      FUN_00da62d0(_DAT_02391038,&local_48);
      puVar8 = (undefined8 *)DAT_028a5730;
      if ((undefined8 *)DAT_028a5730 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)0x0;
          }
          else {
            FUN_00d50b00();
            puVar8 = local_38;
          }
        }
        else {
          local_30 = '\0';
          puVar8 = local_38;
        }
        bVar2 = DAT_028a5730 != 0;
        DAT_028a5730 = (longlong)puVar8;
        if (bVar2) {
          FUN_00d50b20();
          puVar8 = local_38;
        }
      }
      if ((puVar8 != (undefined8 *)0x0) && (DAT_028a5738 == '\0')) {
        DAT_028a5738 = '\x01';
        FUN_00e8cb90();
        puVar8 = local_38;
      }
      if ((local_30 != '\0') && (puVar8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      DAT_028a5739 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5739 = '\x01';
      FUN_00e8cb70();
    }
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_0254a198;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  FUN_00d500e0();
  puVar8[2] = *unaff_RSI;
  iVar3 = FUN_00b7a700();
  uVar13 = extraout_XMM0_Qa;
  if (DAT_028024fc == 0) {
    iVar4 = FUN_00e83090();
    iVar5 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    DAT_028024fc = iVar5 >> 2;
    uVar13 = extraout_XMM0_Qa_00;
  }
  *(int *)(puVar8 + 4) = DAT_028024fc / iVar3;
  if (1 < iVar3) {
    uVar6 = FUN_00e7d930(uVar13,1);
    *(undefined4 *)(puVar8 + 4) = uVar6;
  }
  dVar14 = (double)FUN_00e7d6f0();
  lVar9 = FUN_00e7dae0(((dVar14 - _DAT_02765b70) - _DAT_028024d8) * DAT_02411988);
  lVar10 = 0;
  if (0 < lVar9) {
    lVar10 = lVar9;
  }
  uVar11 = (ulonglong)(lVar10 - lVar9 != 0);
  lVar9 = (((lVar10 - lVar9) - uVar11) / 0xffffffff + uVar11) * 0xffffffff + lVar9;
  lVar10 = 0xffffffff;
  if (lVar9 < 0xffffffff) {
    lVar10 = lVar9;
  }
  *(int *)((longlong)puVar8 + 0x24) =
       (int)lVar9 + (int)((ulonglong)((lVar9 + 0xfffffffe) - lVar10) / 0xffffffff);
  (**(code **)(*DAT_028a5710 + 0x368))();
  local_30 = '\0';
  local_38 = puVar8;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028a5710 + 0x378))();
  FUN_00bc6940();
  *unaff_RDI = puVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


