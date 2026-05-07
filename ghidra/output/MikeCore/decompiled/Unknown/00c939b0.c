// Function: FUN_00c939b0
// Address: 00c939b0
// Size: 1735 bytes
// Class: Unknown


void FUN_00c939b0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  time_t tVar7;
  undefined8 *puVar8;
  undefined4 extraout_var;
  longlong *plVar9;
  tm *ptVar10;
  undefined8 *unaff_RDI;
  bool bVar11;
  undefined4 uVar12;
  longlong local_a0;
  char local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar8 = DAT_028a7220;
  if ((DAT_028a7220 == (undefined8 *)0x0) || (DAT_028a7229 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a7220 == (undefined8 *)0x0) {
      uVar12 = FUN_00003000();
      FUN_00d91a70(uVar12,1);
      lVar3 = local_68;
      if (((char)local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
        if (((char)local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar1 = DAT_027259e0;
      local_90 = lVar3;
      if (DAT_027259e0 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar1;
      local_98 = '\x01';
      FUN_00d91000(1,&local_a0);
      lVar3 = local_68;
      if ((char)local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
          if (((char)local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_60 = local_60 & 0xffffff00;
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      plVar9 = *(longlong **)(lVar3 + 0x10);
      lVar1 = *plVar9;
      if (lVar1 != 0) {
        FUN_00d50b00();
        plVar9 = *(longlong **)(lVar3 + 0x10);
      }
      lVar2 = plVar9[1];
      local_88 = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b00();
        plVar9 = *(longlong **)(lVar3 + 0x10);
      }
      lVar3 = plVar9[2];
      local_78 = lVar2;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar3;
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      ptVar10 = (tm *)&DAT_02572358;
      *puVar8 = &DAT_02572358;
      (*DAT_02572370)();
      lVar3 = DAT_02772ef8;
      local_70 = puVar8;
      if (DAT_02772ef8 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f00;
      if (DAT_02772f00 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f08;
      if (DAT_02772f08 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f10;
      if (DAT_02772f10 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f18;
      if (DAT_02772f18 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f20;
      if (DAT_02772f20 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f28;
      if (DAT_02772f28 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f30;
      if (DAT_02772f30 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f38;
      if (DAT_02772f38 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f40;
      if (DAT_02772f40 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f48;
      if (DAT_02772f48 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f50;
      if (DAT_02772f50 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar3;
      local_60 = local_60 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      local_60 = local_60 & 0xffffff00;
      local_68 = lVar1;
      uVar12 = FUN_00d237a0();
      if (((char)local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      iVar5 = FUN_00d8d560();
      uVar6 = FUN_00d8d560();
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_02568770;
      FUN_00d500e0();
      local_50 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_54 = iVar5 + -0x76c;
      local_60 = 0;
      local_68 = 0;
      uStack_48 = 0xffffffff;
      local_5c = uVar6;
      local_58 = uVar12;
      tVar7 = _mktime(ptVar10);
      lVar3 = local_90;
      puVar8[2] = CONCAT44(extraout_var,tVar7);
      if (DAT_028a7220 == puVar8) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
        bVar11 = DAT_028a7220 != (undefined8 *)0x0;
        DAT_028a7220 = puVar8;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a7228 == '\0') {
        DAT_028a7228 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar4) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      lVar1 = local_78;
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_88 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a7229 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a7229 = '\x01';
      FUN_00e8cb70();
    }
    puVar8 = DAT_028a7220;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      goto LAB_00c94059;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c94059:
  *unaff_RDI = puVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


