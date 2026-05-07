// Function: FUN_01858310
// Address: 01858310
// Size: 1426 bytes
// Class: Unknown


undefined8 * FUN_01858310(undefined4 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  pthread_key_t pVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  uint uVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar11;
  longlong local_a8;
  char local_a0;
  undefined8 local_88;
  longlong local_80;
  char local_78;
  undefined4 local_6c;
  int local_68;
  pthread_key_t local_64;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  undefined1 local_31;
  
  *(bool *)(unaff_RSI + 0x80) = param_4 == 0 || param_3 == 0;
  FUN_0186be40();
  FUN_0186c0d0(param_3,param_1,param_4,0);
  lVar8 = local_50;
  lVar4 = *(longlong *)(unaff_RSI + 0x90);
  if (lVar4 == local_50) {
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
      lVar4 = *(longlong *)(unaff_RSI + 0x90);
    }
    *(longlong *)(unaff_RSI + 0x90) = lVar8;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  pVar6 = *(pthread_key_t *)(*(longlong *)(unaff_RSI + 0x88) + 0x18);
  local_64 = pVar6 + 7;
  if (-1 < (int)pVar6) {
    local_64 = pVar6;
  }
  pVar6 = local_64;
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_0124b580();
  local_40 = plVar2;
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_31 = FUN_017874a0();
  lVar4 = *(longlong *)(unaff_RSI + 0x90);
  if (0 < *(int *)(lVar4 + 0xc)) {
    local_64 = (int)local_64 >> 3;
    uVar11 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + uVar11 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      if (*(int *)(*(longlong *)(lVar4 + 0x18) + 0xc) != 0) {
        lVar8 = *(longlong *)(*(longlong *)(unaff_RSI + 0x88) + 0x10);
        local_6c = *(undefined4 *)(lVar8 + (longlong)*(int *)(lVar4 + 0xc) * 8);
        if (*(int *)(lVar4 + 0x10) < (int)local_64) {
          local_68 = *(int *)(lVar8 + (longlong)*(int *)(lVar4 + 0x10) * 8);
        }
        else {
          lVar8 = *(longlong *)
                   ((longlong)*(int *)(*(longlong *)(unaff_RSI + 0x88) + 0x18) + -8 + lVar8);
          local_68 = (int)((ulonglong)lVar8 >> 0x20) + (int)lVar8;
        }
        pVar6 = (pthread_key_t)lVar8;
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_50 = *(undefined8 *)(unaff_RSI + 0x3c);
        FUN_00e7c260();
        local_88 = FUN_016c4760();
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_50 = *(longlong *)(unaff_RSI + 0x3c);
        FUN_00e7c260();
        uVar5 = FUN_016c4760();
        if (uVar11 == 0) {
          local_88 = FUN_00e7bdb0();
        }
        if (uVar11 == *(int *)(*(longlong *)(unaff_RSI + 0x90) + 0xc) - 1) {
          uVar5 = FUN_00e7bdb0();
        }
        FUN_01876c50();
        local_58 = 0;
        if (local_a0 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a0 = '\0';
        }
        local_58 = '\x01';
        local_60 = local_a8;
        lVar4 = **(longlong **)(*(longlong *)(lVar4 + 0x18) + 0x10);
        iVar7 = *(int *)(lVar4 + 0xc) * 7;
        iVar7 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
        cVar9 = ((byte)(iVar7 >> 0x1f) & 0xc) + (char)iVar7 + '\x06';
        uVar10 = cVar9 * 0x2b;
        cVar9 = cVar9 + ((char)((uVar10 & 0xffff) >> 0xf) + (char)(uVar10 >> 9)) * -0xc;
        iVar1 = *(int *)(lVar4 + 0x10) * 7;
        iVar1 = iVar1 + (((uint)(iVar1 / 6 + (iVar1 >> 0x1f)) >> 1) - (iVar1 >> 0x1f)) * -0xc;
        iVar7 = cVar9 + 0xc;
        if (-1 < cVar9) {
          iVar7 = (int)cVar9;
        }
        iVar7 = iVar7 + (iVar1 >> 0x1f & 0xcU) + iVar1;
        iVar1 = iVar7 + -6;
        if (9 < iVar1) {
          iVar1 = 10;
        }
        uVar10 = (iVar7 - iVar1) + 5;
        iVar1 = (uVar10 % 0xc - uVar10) + iVar7 + -6;
        iVar7 = -5;
        if (-5 < iVar1) {
          iVar7 = iVar1;
        }
        uVar10 = (uint)(iVar7 - iVar1 != 0);
        local_80 = *param_2;
        local_78 = '\0';
        plVar2 = &local_80;
        FUN_01735d80(plVar2,iVar1 + (((iVar7 - iVar1) - uVar10) / 0xc + uVar10) * 0xc);
        lVar4 = local_50;
        pVar6 = (pthread_key_t)plVar2;
        if (local_48 == '\0') {
          if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          pvVar3 = _pthread_getspecific(pVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_48 = '\0';
          local_50 = lVar4;
          FUN_012502a0(uVar5,local_88,0);
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      uVar11 = uVar11 + 1;
      lVar4 = *(longlong *)(unaff_RSI + 0x90);
      pVar6 = *(pthread_key_t *)(lVar4 + 0xc);
    } while ((longlong)uVar11 < (longlong)(int)pVar6);
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124ae40();
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


