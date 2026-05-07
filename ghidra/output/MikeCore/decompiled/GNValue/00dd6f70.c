// Function: FUN_00dd6f70
// Address: 00dd6f70
// Size: 1194 bytes
// Class: GNValue
// String references:
//   "%@ can not be converted into an GNValue."


void FUN_00dd6f70(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 *puVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  ulonglong uStack_60;
  longlong local_58;
  char local_50;
  char local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 extraout_XMM0_Qb_01;
  
  cVar4 = FUN_00d8ca50();
  lVar1 = DAT_02704060;
  if (cVar4 == '\0') {
    local_48 = '\0';
    uStack_47 = 0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    if (DAT_02704060 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar1;
    local_90 = '\x01';
    pvVar8 = (void *)((longlong)&MACH_HEADER.magic + 1);
    uVar7 = FUN_00d91000(1,&local_98);
    puVar11 = local_68;
    if (local_68 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      local_48 = '\0';
      uStack_47 = 0;
    }
    else if ((char)uStack_60 == '\0') {
      uVar7 = FUN_00d50b00();
      uStack_47 = (undefined7)((ulonglong)uVar7 >> 8);
      local_48 = '\x01';
      if (((char)uStack_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      uStack_60 = uStack_60 & 0xffffffffffffff00;
      uStack_47 = (undefined7)((ulonglong)uVar7 >> 8);
      local_48 = '\x01';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)((longlong)puVar11 + 0xc) == 2) {
      FUN_00d8d560();
      FUN_00d8d560();
      local_68 = (undefined8 *)FUN_00e7bcc0();
      *(undefined1 *)(unaff_RDI + 0xc) = 0x71;
      uVar6 = FUN_00e82730();
      pvVar9 = (void *)(ulonglong)uVar6;
      if ((int)uVar6 < 9) {
        pvVar9 = (void *)(longlong)(int)uVar6;
      }
      else {
        uVar7 = FUN_00e83010();
        *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
      }
      _memcpy(pvVar8,pvVar9,param_3);
      cVar4 = local_48;
      goto joined_r0x00dd740f;
    }
  }
  lVar1 = DAT_0276cc80;
  if (DAT_0276cc80 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  pvVar8 = (void *)((longlong)&MACH_HEADER.magic + 1);
  uVar7 = FUN_00d91000(1,&local_88);
  puVar10 = local_68;
  if (local_68 == puVar11) {
    puVar10 = puVar11;
    cVar4 = local_48;
    if ((local_48 != '\0') || (local_68 == (undefined8 *)0x0)) goto joined_r0x00dd715d;
    if ((char)uStack_60 == '\0') {
      uVar7 = FUN_00d50b00();
      goto LAB_00dd714a;
    }
LAB_00dd7115:
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    cVar4 = '\x01';
  }
  else {
    if ((char)uStack_60 != '\0') {
      if ((local_48 != '\0') && (puVar11 != (undefined8 *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
      goto LAB_00dd7115;
    }
    if (local_68 != (undefined8 *)0x0) {
      uVar7 = FUN_00d50b00();
    }
    cVar4 = '\x01';
    if ((local_48 != '\0') && (puVar11 != (undefined8 *)0x0)) {
      uVar7 = FUN_00d50b20();
      puVar11 = puVar10;
LAB_00dd714a:
      puVar10 = puVar11;
      cVar4 = '\x01';
    }
joined_r0x00dd715d:
    if (((char)uStack_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar1 = DAT_027732f0;
  if (*(int *)((longlong)puVar10 + 0xc) == 2) {
    cVar5 = FUN_00d8ca50();
    if ((cVar5 == '\0') && (cVar5 = FUN_00d8ca50(), cVar5 == '\0')) {
      FUN_00d8d560();
      FUN_00d8d560();
      local_68 = (undefined8 *)FUN_00e7b4e0();
      *(undefined1 *)(unaff_RDI + 0xc) = 0x43;
      uVar6 = FUN_00e82730();
      pvVar9 = (void *)(ulonglong)uVar6;
      if ((int)uVar6 < 9) {
LAB_00dd73d9:
        _memcpy(pvVar8,(void *)(longlong)(int)uVar6,param_3);
        goto joined_r0x00dd740f;
      }
      uVar7 = FUN_00e83010();
    }
    else {
      uVar7 = FUN_00d8d7b0();
      local_48 = (char)uVar7;
      uStack_47 = (undefined7)((ulonglong)uVar7 >> 8);
      uStack_40 = extraout_XMM0_Qb_02;
      auVar15._0_8_ = FUN_00d8d7b0();
      auVar15._8_8_ = extraout_XMM0_Qb_03;
      auVar14._1_7_ = uStack_47;
      auVar14[0] = local_48;
      auVar14._8_8_ = uStack_40;
      auVar14 = insertps(auVar14,auVar15,0x10);
      local_68 = auVar14._0_8_;
      *(undefined1 *)(unaff_RDI + 0xc) = 0x50;
      uVar6 = FUN_00e82730();
      pvVar9 = (void *)(ulonglong)uVar6;
      if ((int)uVar6 < 9) goto LAB_00dd73d9;
      uVar7 = FUN_00e83010();
    }
  }
  else {
    if (*(int *)((longlong)puVar10 + 0xc) != 4) {
      if (DAT_027732f0 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_78 = lVar1;
      local_70 = '\x01';
      lVar1 = *unaff_RSI;
      uStack_60 = CONCAT44(uStack_60._4_4_,1);
      local_68 = &DAT_024c5048;
      if (lVar1 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_50 = '\x01';
      local_58 = lVar1;
      FUN_00cc7b40(uVar7,&local_68);
      local_68 = &DAT_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      goto joined_r0x00dd740f;
    }
    uVar7 = FUN_00d8d7b0();
    local_48 = (char)uVar7;
    uStack_47 = (undefined7)((ulonglong)uVar7 >> 8);
    uStack_40 = extraout_XMM0_Qb;
    uVar12 = FUN_00d8d7b0();
    uVar7 = FUN_00d8d7b0();
    auVar13._0_8_ = FUN_00d8d7b0();
    auVar13._8_8_ = extraout_XMM0_Qb_01;
    auVar3._1_7_ = uStack_47;
    auVar3[0] = local_48;
    auVar3._8_8_ = uStack_40;
    auVar14 = insertps(auVar3,uVar12,0x10);
    auVar2._8_8_ = extraout_XMM0_Qb_00;
    auVar2._0_8_ = uVar7;
    auVar15 = insertps(auVar2,auVar13,0x10);
    local_68 = auVar14._0_8_;
    uStack_60 = auVar15._0_8_;
    *(undefined1 *)(unaff_RDI + 0xc) = 0x52;
    uVar6 = FUN_00e82730();
    pvVar9 = (void *)(ulonglong)uVar6;
    if ((int)uVar6 < 9) goto LAB_00dd73d9;
    uVar7 = FUN_00e83010();
  }
  *(undefined8 *)(unaff_RDI + 0x10) = uVar7;
  _memcpy(pvVar8,pvVar9,param_3);
joined_r0x00dd740f:
  if (cVar4 != '\0') {
    FUN_00d50b20();
  }
  return;
}


