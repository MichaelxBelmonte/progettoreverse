// Function: FUN_016723c0
// Address: 016723c0
// Size: 909 bytes
// Class: MUAraAudioSource


uint FUN_016723c0(pthread_key_t param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  uint uVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  
  lVar12 = *unaff_RDI;
  lVar11 = *unaff_RSI;
  pvVar6 = _pthread_getspecific(param_1);
  lVar8 = lVar12;
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar8 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  iVar2 = *(int *)(lVar8 + 0x40);
  pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
  pVar9 = (pthread_key_t)lVar8;
  if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    iVar1 = *(int *)(lVar11 + 0x40);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                    0x40);
  }
  uVar5 = 0xffffffff;
  if (iVar1 <= iVar2) {
    pvVar6 = _pthread_getspecific(pVar9);
    lVar8 = lVar12;
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    iVar2 = *(int *)(lVar8 + 0x40);
    pvVar6 = _pthread_getspecific(pVar9);
    if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      iVar1 = *(int *)(lVar11 + 0x40);
    }
    else {
      iVar1 = *(int *)(*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                      + 0x40);
    }
    uVar5 = 1;
    if (iVar2 <= iVar1) {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(longlong *)(lVar12 + 0x48);
      }
      else {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x48);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(longlong *)(lVar11 + 0x48);
        }
        else {
          lVar8 = *(longlong *)
                   (*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x48);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          lVar8 = lVar12;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar8 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          plVar4 = *(longlong **)(lVar8 + 0x48);
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
            lVar8 = *(longlong *)(lVar11 + 0x48);
          }
          else {
            lVar8 = *(longlong *)
                     (*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                     0x48);
          }
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          uVar5 = (**(code **)(*plVar4 + 0x58))();
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if (uVar5 != 0) {
            return uVar5;
          }
        }
      }
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        lVar8 = *(longlong *)(lVar12 + 0x50);
      }
      else {
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                 0x50);
      }
      if (lVar8 != 0) {
        pvVar6 = _pthread_getspecific(pVar9);
        if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
          lVar8 = *(longlong *)(lVar11 + 0x50);
        }
        else {
          lVar8 = *(longlong *)
                   (*(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                   0x50);
        }
        if (lVar8 != 0) {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar12 = *(longlong *)(lVar12 + 0x50);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar11 = *(longlong *)(lVar11 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          lVar11 = *(longlong *)(lVar11 + 0x50);
          if (lVar11 != 0) {
            FUN_00d50b00();
          }
          uVar3 = *(uint *)(lVar12 + 0xc);
          uVar5 = *(uint *)(lVar11 + 0xc);
          uVar10 = 0xffffffff;
          if (uVar5 <= uVar3) {
            uVar10 = (uint)(uVar5 < uVar3);
          }
          FUN_00d50b20();
          FUN_00d50b20();
          if (uVar10 != 0) {
            return uVar10;
          }
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}


