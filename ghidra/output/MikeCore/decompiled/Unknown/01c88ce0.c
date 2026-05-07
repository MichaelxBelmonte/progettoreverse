// Function: FUN_01c88ce0
// Address: 01c88ce0
// Size: 846 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01c88ce0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  undefined8 *in_RCX;
  undefined8 *puVar10;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  
  local_58 = &local_b0;
  if (param_2 != (undefined8 *)0x0) {
    local_58 = param_2;
  }
  if (param_3 == (undefined4 *)0x0) {
    local_5c = 0xffffffff;
    param_3 = &local_5c;
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x158);
  local_88 = param_1;
  local_68 = in_RCX;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pVar9 = (pthread_key_t)in_RCX;
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar5 = FUN_016c2ea0();
  if (iVar5 == 0) {
    uVar8 = FUN_00e7bdb0();
    *local_58 = uVar8;
    puVar10 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      uVar8 = FUN_00e7bdb0();
      *puVar10 = uVar8;
    }
    *param_3 = 0xffffffff;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_4c = 0xffffffff;
    pvVar6 = _pthread_getspecific(pVar9);
    if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
      plVar2 = *(longlong **)(unaff_RSI + 0x140);
    }
    else {
      plVar2 = *(longlong **)(unaff_RSI + 0x140);
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_70 = (**(code **)(*plVar2 + 0x388))();
    FUN_0123fd00();
    pVar9 = (pthread_key_t)&local_4c;
    uVar8 = FUN_016cb9d0(local_70,1);
    FUN_00d50b20();
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar10 = local_58;
    FUN_016ca840(local_58,uVar8,local_68,param_3);
    lVar7 = local_48;
    pVar9 = (pthread_key_t)puVar10;
    if (((((char)uStack_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), (char)uStack_40 != '\0')
        ) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_48 = DAT_023dccec;
    uStack_40 = DAT_023dccf4;
    local_98 = lVar7;
    local_90 = 0;
    FUN_01c8b390();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = *(longlong **)(unaff_RSI + 0x140);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar3 = *(longlong *)(unaff_RSI + 0x158);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c98e0();
    uVar8 = (**(code **)(*plVar2 + 0x390))();
    auVar11._0_4_ = _DAT_023945e0 & (uint)(float)uVar8;
    auVar11._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar8 >> 0x20);
    auVar11._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb;
    auVar11._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar12._4_12_ = SUB1612(auVar11 | _DAT_023945f0,4);
    auVar12._0_4_ = SUB164(auVar11 | _DAT_023945f0,0) + (float)uVar8;
    auVar11 = roundss(ZEXT816(0),auVar12,0xb);
    local_48 = CONCAT44(local_48._4_4_,auVar11._0_4_ + (float)local_48);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    cVar4 = FUN_00d05410();
    if (cVar4 == '\0') {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RDI = lVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


