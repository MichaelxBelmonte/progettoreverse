// Function: FUN_012e8440
// Address: 012e8440
// Size: 785 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012e866f) */
/* WARNING: Removing unreachable block (ram,0x012e8678) */
/* WARNING: Removing unreachable block (ram,0x012e8717) */
/* WARNING: Removing unreachable block (ram,0x012e8720) */

ulonglong FUN_012e8440(pthread_key_t param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *unaff_RSI;
  ulonglong *unaff_RDI;
  
  uVar1 = *unaff_RDI;
  uVar3 = unaff_RDI[1];
  if (((char)uVar3 != '\0') && (uVar1 != 0)) {
    FUN_00d50b00();
  }
  uVar2 = *unaff_RSI;
  uVar4 = unaff_RSI[1];
  if (((char)uVar4 != '\0') && (uVar2 != 0)) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    lVar8 = *(longlong *)(uVar1 + 0x110);
  }
  else {
    lVar8 = *(longlong *)
             (*(longlong *)(uVar1 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x110);
  }
  if (lVar8 != 0) {
    pvVar7 = _pthread_getspecific(param_1);
    if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      lVar8 = *(longlong *)(uVar2 + 0x110);
    }
    else {
      lVar8 = *(longlong *)
               (*(longlong *)(uVar2 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x110)
      ;
    }
    if (lVar8 != 0) {
      pvVar7 = _pthread_getspecific(param_1);
      uVar10 = uVar1;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        uVar10 = *(ulonglong *)(uVar1 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      lVar8 = *(longlong *)(uVar10 + 0x110);
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
        lVar9 = *(longlong *)(uVar2 + 0x110);
      }
      else {
        lVar9 = *(longlong *)
                 (*(longlong *)(uVar2 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8) +
                 0x110);
      }
      if (lVar8 == lVar9) {
        pvVar7 = _pthread_getspecific(param_1);
        uVar10 = uVar1;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          uVar10 = *(ulonglong *)(uVar1 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(uVar10 + 0x110);
        pvVar7 = _pthread_getspecific(param_1);
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(lVar8 + 0xa8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        iVar5 = FUN_00d23d20();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(param_1);
        uVar10 = uVar2;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          uVar10 = *(ulonglong *)(uVar2 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(uVar10 + 0x110);
        pvVar7 = _pthread_getspecific(param_1);
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(lVar8 + 0xa8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        iVar6 = FUN_00d23d20();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        uVar10 = 0xffffffff;
        if (iVar6 <= iVar5) {
          uVar10 = (ulonglong)(iVar6 < iVar5);
        }
        goto joined_r0x012e85ce;
      }
    }
  }
  uVar10 = 0xffffffff;
  if (uVar2 <= uVar1) {
    uVar10 = (ulonglong)(uVar1 != uVar2);
  }
joined_r0x012e85ce:
  if (((char)uVar4 != '\0') && (uVar2 != 0)) {
    FUN_00d50b20();
  }
  if (((char)uVar3 != '\0') && (uVar1 != 0)) {
    FUN_00d50b20();
  }
  return uVar10;
}


