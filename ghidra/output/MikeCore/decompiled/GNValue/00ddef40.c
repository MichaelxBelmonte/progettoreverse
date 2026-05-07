// Function: FUN_00ddef40
// Address: 00ddef40
// Size: 1511 bytes
// Class: GNValue


void FUN_00ddef40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *in_RDX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 in_XMM1_Qb;
  longlong local_78;
  char local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  longlong local_38;
  char local_30;
  
  if ((*in_RDX == 0) || (iVar8 = FUN_00d8c7a0(), local_78 = DAT_0276cc80, iVar8 == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if (DAT_0276cc80 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  FUN_00d91000(1,&local_78);
  lVar6 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  switch(*(undefined1 *)(unaff_RSI + 0x10)) {
  case 0x45:
    if (*(longlong *)(unaff_RSI + 0x18) == 0) {
      local_48 = ZEXT816(0);
      local_58 = ZEXT816(0);
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    else {
      local_48._0_8_ = FUN_00dd6b50();
      local_48._8_8_ = extraout_XMM0_Qb;
      local_58._8_8_ = in_XMM1_Qb;
      local_58._0_8_ = param_2;
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    if ((cVar1 != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_60 = extraout_XMM0_Qb_03;
      FUN_00d23620();
      auVar2._4_4_ = uStack_64;
      auVar2._0_4_ = local_68;
      auVar2._8_8_ = uStack_60;
      local_48 = blendps(local_48,auVar2,1);
    }
    if ((*(char *)(unaff_RSI + 0xd) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_00d23620();
      local_48 = insertps(local_48,local_68,0x10);
    }
    if ((*(char *)(unaff_RSI + 0xe) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_60 = extraout_XMM0_Qb_04;
      FUN_00d23620();
      auVar3._4_4_ = uStack_64;
      auVar3._0_4_ = local_68;
      auVar3._8_8_ = uStack_60;
      local_58 = blendps(local_58,auVar3,1);
    }
    if ((*(char *)(unaff_RSI + 0xf) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_00d23620();
      insertps(local_58,local_68,0x10);
    }
    FUN_00dd6530();
    lVar7 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00ddf50a;
      }
LAB_00ddf500:
      local_38 = 0;
    }
    break;
  default:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_00ddf50a;
  case 0x50:
    if (*(longlong *)(unaff_RSI + 0x18) == 0) {
      local_48 = ZEXT816(0);
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    else {
      local_48._0_8_ = FUN_00dd6bf0();
      local_48._8_8_ = extraout_XMM0_Qb_00;
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    if ((cVar1 != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      local_58._0_8_ = FUN_00d8d7b0();
      local_58._8_8_ = extraout_XMM0_Qb_05;
      FUN_00d23620();
      local_48 = blendps(local_48,local_58,1);
    }
    if ((*(char *)(unaff_RSI + 0xd) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      local_58._0_8_ = FUN_00d8d7b0();
      local_58._8_8_ = extraout_XMM0_Qb_06;
      FUN_00d23620();
      insertps(local_48,local_58._0_4_,0x10);
    }
    FUN_00dd65e0();
    lVar7 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00ddf50a;
      }
      goto LAB_00ddf500;
    }
    break;
  case 0x52:
    if (*(longlong *)(unaff_RSI + 0x18) == 0) {
      local_48 = ZEXT816(0);
      local_58 = ZEXT816(0);
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    else {
      local_48._0_8_ = FUN_00dd6ab0();
      local_48._8_8_ = extraout_XMM0_Qb_01;
      local_58._8_8_ = in_XMM1_Qb;
      local_58._0_8_ = param_2;
      cVar1 = *(char *)(unaff_RSI + 0xc);
    }
    if ((cVar1 != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_60 = extraout_XMM0_Qb_07;
      FUN_00d23620();
      auVar4._4_4_ = uStack_64;
      auVar4._0_4_ = local_68;
      auVar4._8_8_ = uStack_60;
      local_48 = blendps(local_48,auVar4,1);
    }
    if ((*(char *)(unaff_RSI + 0xd) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_00d23620();
      local_48 = insertps(local_48,local_68,0x10);
    }
    if ((*(char *)(unaff_RSI + 0xe) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_60 = extraout_XMM0_Qb_08;
      FUN_00d23620();
      auVar5._4_4_ = uStack_64;
      auVar5._0_4_ = local_68;
      auVar5._8_8_ = uStack_60;
      local_58 = blendps(local_58,auVar5,1);
    }
    if ((*(char *)(unaff_RSI + 0xf) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      uVar9 = FUN_00d8d7b0();
      local_68 = (undefined4)uVar9;
      uStack_64 = (undefined4)((ulonglong)uVar9 >> 0x20);
      FUN_00d23620();
      insertps(local_58,local_68,0x10);
    }
    FUN_00dd6480();
    lVar7 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00ddf50a;
      }
      goto LAB_00ddf500;
    }
    break;
  case 0x53:
    if (*(longlong *)(unaff_RSI + 0x18) == 0) {
      local_48 = ZEXT816(0);
      cVar1 = *(char *)(unaff_RSI + 0xe);
    }
    else {
      local_48._0_8_ = FUN_00dd6c90();
      local_48._8_8_ = extraout_XMM0_Qb_02;
      cVar1 = *(char *)(unaff_RSI + 0xe);
    }
    if ((cVar1 != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      local_58._0_8_ = FUN_00d8d7b0();
      local_58._8_8_ = extraout_XMM0_Qb_09;
      FUN_00d23620();
      local_48 = blendps(local_48,local_58,1);
    }
    if ((*(char *)(unaff_RSI + 0xf) != '\0') && (*(int *)(lVar6 + 0xc) != 0)) {
      local_58._0_8_ = FUN_00d8d7b0();
      local_58._8_8_ = extraout_XMM0_Qb_10;
      FUN_00d23620();
      insertps(local_48,local_58._0_4_,0x10);
    }
    FUN_00dd6740();
    lVar7 = local_38;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        *unaff_RDI = lVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00ddf50a;
      }
      goto LAB_00ddf500;
    }
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00ddf50a:
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}


