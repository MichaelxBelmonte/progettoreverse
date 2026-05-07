// Function: FUN_0135abc0
// Address: 0135abc0
// Size: 1352 bytes
// Class: Unknown


void FUN_0135abc0(void)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong *local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  longlong *local_100;
  undefined1 local_f8;
  longlong local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  undefined1 local_b8;
  ulonglong local_b0;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  uint local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  longlong *local_48;
  char local_40;
  
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    return;
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  local_60 = puVar3;
  FUN_00c92160();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar4 = *unaff_RSI;
  uVar1 = *(uint *)(lVar4 + 0xc);
  if (0 < (int)uVar1) {
    plVar8 = (longlong *)0x0;
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
    uVar11 = 0;
    local_6c = uVar1;
    local_b0 = (ulonglong)uVar1;
    local_68 = puVar3;
    do {
      pVar7 = local_6c - 1;
      uVar6 = (ulonglong)pVar7;
      lVar4 = *(longlong *)(lVar4 + 0x10);
      plVar9 = *(longlong **)(lVar4 + uVar6 * 8);
      local_6c = pVar7;
      if (plVar8 == plVar9) {
        plVar9 = plVar8;
        local_50 = uVar12;
        if (((char)uVar12 == '\0') && (plVar8 != (longlong *)0x0)) {
          local_50 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
          FUN_00d50b00();
          pVar7 = (pthread_key_t)uVar6;
        }
      }
      else {
        if (plVar9 != (longlong *)0x0) {
          lVar4 = FUN_00d50b00();
          pVar7 = (pthread_key_t)uVar6;
        }
        local_50 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        if (((char)uVar12 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar8 = plVar9;
      pvVar5 = _pthread_getspecific(pVar7);
      plVar9 = plVar8;
      if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar9 + 0x380))();
      pvVar5 = _pthread_getspecific(pVar7);
      plVar9 = plVar8;
      if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar9 + 0x388))();
      FUN_00e7b4e0();
      local_118 = 0;
      local_110 = 0;
      local_108 = 0;
      local_a0 = 0;
      local_98 = '\0';
      local_90 = 0;
      local_88 = '\0';
      local_120 = plVar8;
      FUN_01351de0(1,&local_120,&local_110,&local_a0);
      plVar9 = local_48;
      if (local_48 == plVar10) {
        if (((char)uVar11 == '\0') && (local_48 != (longlong *)0x0)) {
          uVar11 = 1;
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
        }
        else if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = uVar11;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          uVar11 = 1;
          if (((char)local_58 == '\0') || (plVar10 == (longlong *)0x0)) goto LAB_0135ae90;
          FUN_00d50b20();
          plVar10 = plVar9;
        }
        else if (((char)uVar11 == '\0') || (plVar10 == (longlong *)0x0)) {
LAB_0135ae90:
          plVar10 = plVar9;
          uVar11 = 1;
        }
        else {
          FUN_00d50b20();
          plVar10 = plVar9;
          uVar11 = 1;
        }
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        local_40 = '\0';
        local_48 = plVar8;
        cVar2 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_f8 = 0;
          local_100 = plVar8;
          FUN_0134aad0();
        }
        local_40 = '\0';
        local_48 = plVar10;
        cVar2 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_e8 = 0;
          local_f0 = (longlong)plVar10;
          FUN_0134aea0();
        }
        local_80 = local_60;
        local_78 = '\0';
        FUN_015b4ee0();
        if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        local_48 = plVar10;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((longlong)local_b0 < 2) goto LAB_0135b04f;
      local_b0 = local_b0 - 1;
      lVar4 = *unaff_RSI;
      uVar12 = local_50 & 0xffffffff;
    } while( true );
  }
  uVar11 = 0;
  plVar10 = (longlong *)0x0;
  cVar2 = '\0';
  plVar8 = (longlong *)0x0;
LAB_0135b065:
  if (0xe < *(int *)(local_60 + 3) + 7U) {
    local_d8 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_58 = uVar11;
    FUN_013469e0();
    uVar11 = local_58;
    local_c0 = local_60;
    local_b8 = 0;
    FUN_01353f80();
  }
  if (((char)uVar11 != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((cVar2 != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
LAB_0135b04f:
  cVar2 = (char)local_50;
  puVar3 = local_68;
  goto LAB_0135b065;
}


