// Function: FUN_014ed8e0
// Address: 014ed8e0
// Size: 711 bytes
// Class: MUAudioSourceItem


void FUN_014ed8e0(double param_1,double param_2)

{
  pthread_key_t pVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar6;
  pthread_key_t in_ECX;
  pthread_key_t *in_RDX;
  ulonglong uVar7;
  float *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  longlong local_58;
  char local_50;
  
  if (*(longlong *)(unaff_RDI + 0x88) != 0) {
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    iVar2 = *(int *)(local_58 + 0x18);
    iVar10 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar10 = iVar2;
    }
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    lVar9 = *(longlong *)(unaff_RDI + 0x88);
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      lVar9 = *(longlong *)(unaff_RDI + 0x88);
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    dVar13 = *(double *)(lVar9 + 0x50);
    pvVar4 = _pthread_getspecific(in_ECX);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb920();
    lVar9 = *(longlong *)(local_58 + 0x10);
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    dVar12 = (double)FUN_014bb3e0();
    iVar2 = 0;
    if (dVar12 < param_1) {
      dVar12 = (double)FUN_014bb3e0();
      iVar2 = FUN_00e7d850((param_1 - dVar12) * dVar13);
    }
    iVar10 = iVar10 >> 2;
    dVar12 = (double)FUN_014bb4b0();
    iVar3 = iVar10;
    if (param_2 < dVar12) {
      dVar12 = (double)FUN_014bb3e0();
      iVar3 = FUN_00e7d850(dVar13 * (param_2 - dVar12));
    }
    if (iVar10 < iVar3) {
      iVar3 = iVar10;
    }
    if (iVar2 < iVar3) {
      uVar7 = (ulonglong)iVar2;
      pVar1 = *in_RDX;
      fVar11 = *unaff_RSI;
      uVar8 = ~uVar7;
      uVar6 = (ulonglong)(uint)(iVar3 - iVar2) & 3;
      if ((iVar3 - iVar2 & 3U) != 0) {
        do {
          fVar11 = fVar11 + *(float *)(lVar9 + uVar7 * 4);
          *unaff_RSI = fVar11;
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (2 < uVar8 + (longlong)iVar3) {
        do {
          fVar11 = fVar11 + *(float *)(lVar9 + uVar7 * 4);
          *unaff_RSI = fVar11;
          fVar11 = fVar11 + *(float *)(lVar9 + 4 + uVar7 * 4);
          *unaff_RSI = fVar11;
          fVar11 = fVar11 + *(float *)(lVar9 + 8 + uVar7 * 4);
          *unaff_RSI = fVar11;
          fVar11 = fVar11 + *(float *)(lVar9 + 0xc + uVar7 * 4);
          *unaff_RSI = fVar11;
          uVar7 = uVar7 + 4;
        } while ((longlong)iVar3 != uVar7);
      }
      in_ECX = (pVar1 + iVar3) - iVar2;
      *in_RDX = in_ECX;
    }
    dVar13 = (double)FUN_014bb4b0();
    if ((dVar13 < param_2) && (*(longlong *)(unaff_RDI + 0x118) != 0)) {
      pvVar4 = _pthread_getspecific(in_ECX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed8e0(param_1,param_2);
    }
  }
  return;
}


