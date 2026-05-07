// Function: FUN_014e9f00
// Address: 014e9f00
// Size: 690 bytes
// Class: MUAudioSourceItem


/* WARNING: Removing unreachable block (ram,0x014e9f3f) */
/* WARNING: Removing unreachable block (ram,0x014e9f48) */

longlong FUN_014e9f00(ulonglong param_1)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *unaff_RDI;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  longlong local_38;
  char local_30;
  
  (**(code **)(*unaff_RDI + 0x378))();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*unaff_RDI + 1000))();
  if (cVar4 == '\0') {
    lVar7 = (**(code **)(*unaff_RDI + 0x380))();
    lVar5 = (**(code **)(*unaff_RDI + 0x388))();
    lVar7 = lVar5 / 2 + lVar7;
  }
  else {
    lVar7 = unaff_RDI[0x21];
    iVar2 = *(int *)(lVar7 + 0xc);
    uVar13 = (ulonglong)iVar2;
    uVar11 = iVar2 / 2;
    uVar9 = (ulonglong)uVar11;
    fVar14 = 0.0;
    fVar15 = 0.0;
    if (1 < (longlong)uVar13) {
      lVar5 = *(longlong *)(lVar7 + 0x10);
      if (uVar9 - 1 < 3) {
        fVar15 = 0.0;
        uVar10 = 0;
      }
      else {
        fVar15 = 0.0;
        uVar10 = 0;
        do {
          param_1 = *(ulonglong *)(lVar5 + 0x18 + uVar10 * 8);
          fVar15 = fVar15 + *(float *)(*(longlong *)(lVar5 + uVar10 * 8) + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 8 + uVar10 * 8) + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 0x10 + uVar10 * 8) + 0x28) +
                   *(float *)(param_1 + 0x28);
          uVar10 = uVar10 + 4;
        } while ((uVar11 & 0xfffffffc) != uVar10);
      }
      if ((ulonglong)(uVar11 & 3) != 0) {
        param_1 = 0;
        do {
          fVar15 = fVar15 + *(float *)(*(longlong *)(lVar5 + uVar10 * 8 + param_1 * 8) + 0x28);
          param_1 = param_1 + 1;
        } while ((uVar11 & 3) != param_1);
      }
    }
    uVar10 = (ulonglong)(int)uVar11;
    if ((int)uVar11 < iVar2) {
      lVar5 = *(longlong *)(lVar7 + 0x10);
      fVar14 = 0.0;
      param_1 = (ulonglong)(iVar2 - uVar11) & 3;
      uVar8 = param_1;
      uVar12 = uVar10;
      if ((iVar2 - uVar11 & 3) != 0) {
        do {
          fVar14 = fVar14 + *(float *)(*(longlong *)(lVar5 + uVar12 * 8) + 0x28);
          uVar12 = uVar12 + 1;
          uVar8 = uVar8 - 1;
          param_1 = 0;
        } while (uVar8 != 0);
      }
      if (2 < ~uVar10 + uVar13) {
        do {
          param_1 = *(ulonglong *)(lVar5 + 8 + uVar12 * 8);
          fVar14 = fVar14 + *(float *)(*(longlong *)(lVar5 + uVar12 * 8) + 0x28) +
                   *(float *)(param_1 + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 0x10 + uVar12 * 8) + 0x28) +
                   *(float *)(*(longlong *)(lVar5 + 0x18 + uVar12 * 8) + 0x28);
          uVar12 = uVar12 + 4;
        } while (uVar13 != uVar12);
      }
    }
    if ((fVar15 < fVar14) && ((int)uVar11 < (int)(uVar13 - 1))) {
      uVar10 = uVar10 + 1;
      do {
        param_1 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + -8 + uVar10 * 8);
        fVar14 = fVar14 - *(float *)(param_1 + 0x28);
        fVar15 = fVar15 + *(float *)(param_1 + 0x28);
        uVar9 = (ulonglong)((int)uVar9 + 1);
        if (fVar14 <= fVar15) break;
        param_1 = uVar10 + 1;
        bVar3 = (longlong)uVar10 < (longlong)(uVar13 - 1);
        uVar10 = param_1;
      } while (bVar3);
    }
    if ((fVar14 < fVar15) && (0 < (int)uVar9)) {
      do {
        fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + uVar9 * 8) + 0x28);
        fVar14 = fVar14 + fVar1;
        fVar15 = fVar15 - fVar1;
        param_1 = uVar9;
        if (fVar15 <= fVar14) break;
        bVar3 = 1 < (longlong)uVar9;
        param_1 = uVar9 - 1;
        uVar9 = uVar9 - 1;
      } while (bVar3);
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar7 = FUN_0134c2c0();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return lVar7;
}


