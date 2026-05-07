// Function: FUN_00da50e0
// Address: 00da50e0
// Size: 783 bytes
// Class: GNString


ulonglong FUN_00da50e0(undefined8 param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  longlong lVar6;
  pthread_t p_Var7;
  int iVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  uint unaff_ESI;
  ulonglong unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined4 local_58;
  undefined4 uStack_54;
  char local_50;
  
  iVar3 = *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0x18);
  iVar8 = iVar3 + 7;
  if (-1 < iVar3) {
    iVar8 = iVar3;
  }
  uVar1 = iVar8 >> 3;
  if ((int)unaff_ESI <= iVar8 >> 3) {
    uVar1 = unaff_ESI;
  }
  uVar10 = (ulonglong)uVar1;
  iVar3 = FUN_00e31390();
  if ((*(int *)(unaff_RDI + 0xc) == 4) ||
     (pvVar4 = _pthread_getspecific((pthread_key_t)uVar10), pvVar4 != (void *)0x0)) {
    bVar13 = false;
    lVar12 = 0;
    uVar5 = unaff_RDI;
    while (iVar3 < (int)uVar1) {
      FUN_00da4d70();
      lVar6 = CONCAT44(uStack_54,local_58);
      if (lVar6 == lVar12) {
        if ((bVar13) || (lVar6 == 0)) {
          if ((local_50 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar13 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_50 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((!bVar13) || (lVar12 == 0)) goto LAB_00da5220;
        FUN_00d50b20();
        lVar12 = lVar6;
        bVar13 = true;
      }
      else if ((bVar13) && (lVar12 != 0)) {
        FUN_00d50b20();
        lVar12 = lVar6;
        bVar13 = true;
      }
      else {
LAB_00da5220:
        lVar12 = lVar6;
        bVar13 = true;
      }
      FUN_00e316f0();
      iVar3 = FUN_00e31390();
      if (iVar3 < (int)uVar1) {
        *(int *)(lVar12 + 0x60) = iVar3;
        if ((!bVar13) && (lVar12 != 0)) {
          FUN_00d50b00();
        }
        lVar6 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10);
        *(longlong *)(lVar6 + (longlong)iVar3 * 8) = lVar12;
        bVar13 = false;
        iVar3 = FUN_00e31530(lVar6,0);
      }
      uVar5 = FUN_00e31730();
    }
    if ((bVar13) && (lVar12 != 0)) {
      uVar5 = FUN_00d50b20();
    }
  }
  else {
    uVar5 = (ulonglong)uVar1;
    if (iVar3 < (int)uVar1) {
      lVar12 = 0;
      do {
        FUN_00e316f0();
        iVar3 = FUN_00e31390();
        pVar9 = (pthread_key_t)uVar10;
        lVar6 = lVar12;
        if (iVar3 < (int)uVar1) {
          lVar6 = *(longlong *)(unaff_RDI + 0x20);
          if (*(longlong *)(lVar6 + 0x20) == 0) {
            p_Var7 = _pthread_self();
            *(pthread_t *)(lVar6 + 0x10) = p_Var7;
          }
          _pthread_setspecific(pVar9,param_2);
          uVar2 = MXCSR;
          *(uint *)(lVar6 + 0x70) = MXCSR;
          if ((~MXCSR & 0x8040) != 0) {
            MXCSR = MXCSR | 0x804;
          }
          *(undefined4 *)(lVar6 + 100) = 1;
          FUN_00da4d70();
          lVar6 = CONCAT44(uStack_54,uVar2);
          if (lVar6 == lVar12) {
            lVar11 = lVar12;
            if (lVar6 == 0) goto LAB_00da53ce;
            lVar6 = lVar12;
            if (local_50 == '\0') {
              FUN_00d50b00();
            }
LAB_00da52be:
            *(int *)(lVar6 + 0x60) = iVar3;
          }
          else {
            if (local_50 != '\0') goto LAB_00da52be;
            lVar11 = lVar6;
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
LAB_00da53ce:
            *(int *)(lVar11 + 0x60) = iVar3;
            bVar13 = lVar6 == lVar12;
            lVar6 = lVar11;
            if ((bVar13) && (lVar11 != 0)) {
              FUN_00d50b00();
            }
          }
          uVar10 = *(ulonglong *)(*(longlong *)(unaff_RDI + 0x10) + 0x10);
          *(longlong *)(uVar10 + (longlong)iVar3 * 8) = lVar6;
          param_2 = (void *)0x0;
          iVar3 = FUN_00e31530();
          FUN_00da5480();
        }
        uVar5 = FUN_00e31730();
        lVar12 = lVar6;
      } while (iVar3 < (int)uVar1);
    }
  }
  return uVar5;
}


