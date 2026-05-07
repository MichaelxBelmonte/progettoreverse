// Function: FUN_016fe3c0
// Address: 016fe3c0
// Size: 1943 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016fe3c0(undefined4 param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int in_ECX;
  pthread_key_t pVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  longlong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined8 *local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined1 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_5c;
  ulonglong local_58;
  char local_50;
  char local_38;
  
  uVar11 = local_58;
  if (param_3 != 0) {
    param_1 = FUN_016d7580();
  }
  lVar8 = *(longlong *)(*(longlong *)(unaff_RDI + 0x60) + 0x10);
  lVar1 = *(longlong *)(lVar8 + (longlong)param_2 * 8);
  if (lVar1 != 0) {
    param_1 = FUN_00d50b00();
  }
  pVar12 = (pthread_key_t)lVar8;
  if (in_ECX == 0) {
    local_5c = 0;
  }
  else {
    uVar13 = FUN_016d53b0();
    if ((local_50 == '\0') && (local_58 != 0)) {
      uVar13 = FUN_00d50b00();
    }
    local_5c = FUN_016f7150(uVar13,in_ECX);
    param_1 = FUN_016d6df0(extraout_XMM0_Da,1);
    local_38 = (char)param_3;
    if ((char)local_5c == '\0') {
      if (((local_38 != '\0') && (*(longlong *)(unaff_RDI + 0x88) != 0)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x88) + 0x10) + 0x10) != 0)) {
        param_1 = FUN_016d7580();
      }
    }
    else {
      pvVar5 = _pthread_getspecific(pVar12);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_018fe5d0();
      param_1 = extraout_XMM0_Da_00;
      if (cVar4 == '\0') {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_025fa538;
        uVar3 = _UNK_0239372c;
        uVar2 = _UNK_02393728;
        uVar13 = _UNK_02393724;
        *(undefined4 *)((longlong)puVar6 + 0xc) = _DAT_02393720;
        *(undefined4 *)(puVar6 + 2) = uVar13;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uVar2;
        *(undefined4 *)(puVar6 + 3) = uVar3;
        FUN_00d500e0();
        uVar7 = FUN_00e7bdb0();
        *(undefined8 *)((longlong)puVar6 + 0x14) = uVar7;
        *(undefined8 *)((longlong)puVar6 + 0xc) = uVar7;
        local_e8 = 0;
        local_f0 = lVar1;
        uVar13 = FUN_016f56f0(extraout_XMM0_Da_01,&local_f0);
        if ((local_50 != '\0') && (local_58 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if (local_58 == 0) {
          pvVar5 = _pthread_getspecific(pVar12);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01909dc0();
          pvVar5 = _pthread_getspecific(pVar12);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = FUN_0165cf20(0,0);
          uVar10 = FUN_00e7bdb0();
          pVar12 = (pthread_key_t)(local_58 >> 0x20);
          uVar9 = local_58;
          uVar13 = extraout_XMM0_Da_02;
          if (((local_58 >> 0x20 != 0) && (uVar10 >> 0x20 != 0)) &&
             (cVar4 = FUN_00e7c000(), uVar13 = extraout_XMM0_Da_03, cVar4 != '\0')) {
            uVar9 = FUN_00e7bdb0();
            uVar13 = extraout_XMM0_Da_04;
          }
          *(ulonglong *)((longlong)puVar6 + 0xc) = uVar9;
        }
        else {
          local_d8 = 0;
          local_e0 = lVar1;
          FUN_016f56f0(uVar13,&local_e0);
          pvVar5 = _pthread_getspecific(pVar12);
          if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar12 = (pthread_key_t)local_58;
          }
          local_78 = FUN_01909dc0();
          pvVar5 = _pthread_getspecific(pVar12);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar9 = FUN_0165cf20(0,0);
          uVar10 = FUN_00e7bdb0();
          pVar12 = (pthread_key_t)(uVar9 >> 0x20);
          uVar13 = extraout_XMM0_Da_05;
          if (((uVar9 >> 0x20 != 0) && (uVar10 >> 0x20 != 0)) &&
             (cVar4 = FUN_00e7c000(), uVar13 = extraout_XMM0_Da_06, cVar4 != '\0')) {
            uVar9 = FUN_00e7bdb0();
            uVar13 = extraout_XMM0_Da_07;
          }
          *(ulonglong *)((longlong)puVar6 + 0xc) = uVar9;
          if ((local_50 != '\0') && (local_58 != 0)) {
            uVar13 = FUN_00d50b20();
          }
        }
        local_c8 = 0;
        local_d0 = lVar1;
        uVar13 = FUN_016ebbb0(uVar13,&local_d0);
        if ((local_50 != '\0') && (local_58 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if (local_58 == 0) {
          uVar7 = FUN_00e7bdb0();
          *(undefined8 *)((longlong)puVar6 + 0x14) = uVar7;
        }
        else {
          local_b8 = 0;
          local_c0 = lVar1;
          FUN_016ebbb0(uVar13,&local_c0);
          pvVar5 = _pthread_getspecific(pVar12);
          if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar12 = (pthread_key_t)local_58;
          }
          local_78 = FUN_01909dc0();
          pvVar5 = _pthread_getspecific(pVar12);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_0165cf20(0,0);
          local_7c = 1;
          FUN_00e7c260();
          uVar9 = FUN_00e7bdb0();
          if (((uVar10 >> 0x20 == 0) || (uVar9 >> 0x20 == 0)) ||
             (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
            FUN_00e7c260();
          }
          else {
            uVar10 = FUN_00e7bdb0();
          }
          *(ulonglong *)((longlong)puVar6 + 0x14) = uVar10;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        pVar12 = 0;
        local_b0 = puVar6;
        FUN_016dcbf0(0,&local_a0);
        FUN_016d63b0();
        param_1 = FUN_00d50b20();
      }
      if (local_38 != '\0') {
        param_1 = FUN_016d8330();
      }
    }
    if (uVar11 != 0) {
      param_1 = FUN_00d50b20();
    }
  }
  local_88 = 0;
  local_90 = lVar1;
  FUN_016ebbb0(param_1,&local_90);
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_016fea03;
    }
  }
  else if (local_58 != 0) {
LAB_016fea03:
    lVar8 = *unaff_RSI;
    pvVar5 = _pthread_getspecific(pVar12);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909dc0();
    pvVar5 = _pthread_getspecific(pVar12);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar9 = FUN_0165cf20(0,0);
    FUN_00e7c280();
    uVar11 = FUN_00e7bdb0();
    if (((uVar9 >> 0x20 == 0) || (uVar11 >> 0x20 == 0)) || (cVar4 = FUN_00e7c000(), cVar4 == '\0'))
    {
      FUN_00e7c260();
    }
    else {
      uVar9 = FUN_00e7bdb0();
    }
    *(ulonglong *)(lVar8 + 0x14) = uVar9;
    FUN_00d50b20();
    goto LAB_016feb35;
  }
  lVar8 = *unaff_RSI;
  uVar7 = FUN_00e7bdb0();
  *(undefined8 *)(lVar8 + 0x14) = uVar7;
LAB_016feb35:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return local_5c;
}


