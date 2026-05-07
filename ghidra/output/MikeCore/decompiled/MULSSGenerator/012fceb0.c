// Function: FUN_012fceb0
// Address: 012fceb0
// Size: 1272 bytes
// Class: MULSSGenerator
// String references:
//   "%@ (%I)"


/* WARNING: Removing unreachable block (ram,0x012fd1a7) */
/* WARNING: Removing unreachable block (ram,0x012fd13b) */
/* WARNING: Removing unreachable block (ram,0x012fd359) */
/* WARNING: Removing unreachable block (ram,0x012fd30c) */
/* WARNING: Removing unreachable block (ram,0x012fd205) */
/* WARNING: Removing unreachable block (ram,0x012fd20e) */
/* WARNING: Removing unreachable block (ram,0x012fd377) */
/* WARNING: Removing unreachable block (ram,0x012fd2b6) */
/* WARNING: Removing unreachable block (ram,0x012fd025) */
/* WARNING: Removing unreachable block (ram,0x012fd02e) */
/* WARNING: Removing unreachable block (ram,0x012fd0e6) */
/* WARNING: Removing unreachable block (ram,0x012fcf5b) */
/* WARNING: Removing unreachable block (ram,0x012fcf64) */

longlong * FUN_012fceb0(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar9;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  
  lVar7 = *unaff_RSI;
  if (lVar7 != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      lVar7 = *unaff_RSI;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    lVar7 = *(longlong *)(lVar7 + 0xa0);
    if (lVar7 != 0) {
      FUN_00d50b00();
      bVar1 = true;
      bVar9 = true;
      goto LAB_012fcf2e;
    }
  }
  bVar1 = false;
  bVar9 = false;
  lVar7 = 0;
LAB_012fcf2e:
  FUN_00d8ede0();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  bVar2 = true;
  lVar6 = local_68;
  if (((lVar7 != 0) && (iVar4 = FUN_00d8c7a0(), 0 < iVar4)) && (local_68 != lVar7)) {
    if (bVar1) {
      FUN_00d50b00();
    }
    lVar6 = lVar7;
    bVar2 = bVar9;
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  lVar8 = lVar7;
  bVar1 = bVar9;
  if (lVar6 == 0) {
LAB_012fd1d4:
    while (((bVar9 = bVar1, lVar7 = lVar8, lVar7 == 0 || (iVar4 = FUN_00d8c7a0(), iVar4 == 0)) ||
           (cVar3 = FUN_00d23d70(), cVar3 != '\0'))) {
      FUN_00d8cb40();
      if (local_78 == lVar7) {
        if ((!bVar9) && (local_78 != 0)) {
          lVar8 = lVar7;
          if (local_70 != '\0') goto LAB_012fd297;
          FUN_00d50b00();
          goto LAB_012fd320;
        }
        goto joined_r0x012fd2f6;
      }
      lVar8 = local_78;
      if (local_70 == '\0') goto LAB_012fd2c0;
      if ((bVar9) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
LAB_012fd297:
      local_70 = '\0';
      bVar1 = true;
    }
  }
  else {
    while (((lVar7 == 0 || (iVar4 = FUN_00d8c7a0(), iVar4 == 0)) ||
           (cVar3 = FUN_00d23d70(), cVar3 != '\0'))) {
      FUN_00d50b00();
      FUN_00d8cb40();
      if (local_78 == lVar7) {
        if ((!bVar9) && (local_78 != 0)) {
          lVar8 = lVar7;
          if (local_70 == '\0') {
            FUN_00d50b00();
            goto LAB_012fd150;
          }
          goto LAB_012fd0c7;
        }
joined_r0x012fd125:
        lVar8 = lVar7;
        bVar1 = bVar9;
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar8 = local_78;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if ((bVar9) && (lVar7 != 0)) {
            FUN_00d50b20();
            lVar7 = local_78;
LAB_012fd150:
            bVar9 = true;
            goto joined_r0x012fd125;
          }
        }
        else {
          if ((bVar9) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_012fd0c7:
          local_70 = '\0';
          bVar1 = true;
        }
      }
      bVar9 = bVar1;
      lVar7 = lVar8;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (!bVar9) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar2) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_012fd2c0:
  if (local_78 != 0) {
    FUN_00d50b00();
  }
  bVar1 = true;
  if ((bVar9) && (lVar7 != 0)) {
    FUN_00d50b20();
    lVar7 = local_78;
LAB_012fd320:
    bVar9 = true;
joined_r0x012fd2f6:
    lVar8 = lVar7;
    bVar1 = bVar9;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  goto LAB_012fd1d4;
}


