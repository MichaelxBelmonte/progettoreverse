// Function: FUN_012c2b70
// Address: 012c2b70
// Size: 797 bytes
// Class: Unknown


ulonglong FUN_012c2b70(pthread_key_t param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  char local_78;
  
  if (((*(char *)(unaff_RDI + 0xd0) != '\0') || (*(double *)(unaff_RDI + 0x100) != 0.0)) ||
     (NAN(*(double *)(unaff_RDI + 0x100)))) {
    return 0;
  }
  uVar9 = (ulonglong)param_2;
  lVar10 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar10 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  lVar10 = *(longlong *)(lVar10 + 0xd8);
  if (lVar10 == 0) {
    lVar6 = 0;
  }
  else {
    FUN_00d50b00();
    lVar6 = lVar10;
  }
  lVar11 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar11 = *unaff_RSI;
    lVar7 = FUN_00e8b990();
    if (lVar7 != 0) {
      lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
  }
  lVar11 = *(longlong *)(lVar11 + 0xe0);
  local_88 = lVar11;
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    FUN_00d50b00();
  }
  if (lVar6 != 0) {
    local_a8 = 0;
    local_b0 = lVar6;
    FUN_012c2f70(param_2,&local_b0);
    lVar7 = local_80;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    uVar9 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
    if (lVar7 != 0) goto joined_r0x012c2e9f;
  }
  uVar1 = *(uint *)(lVar11 + 0xc);
  if ((int)uVar1 < 1) {
    uVar9 = 0;
  }
  else {
    local_90 = -(ulonglong)uVar1;
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
    uVar12 = 1;
    bVar2 = false;
    lVar7 = 0;
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + -8 + uVar12 * 8);
      if (lVar7 == lVar8) {
        lVar4 = lVar7;
        bVar3 = bVar2;
        if ((!bVar2) && (lVar8 != 0)) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        lVar4 = lVar8;
        if ((bVar2) && (lVar7 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar3;
      lVar7 = lVar4;
      if (lVar7 != lVar6) {
        local_98 = 0;
        local_a0 = lVar7;
        FUN_012c2f70(param_2,&local_a0);
        lVar8 = local_80;
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) break;
      }
      uVar9 = CONCAT71((int7)(uVar9 >> 8),uVar12 < uVar1);
      lVar8 = local_90 + uVar12;
      uVar12 = uVar12 + 1;
    } while (lVar8 != 0);
    if ((bVar2) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
  }
joined_r0x012c2e9f:
  if ((lVar10 != 0) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != 0) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return uVar9;
}


