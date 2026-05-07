// Function: FUN_014b7630
// Address: 014b7630
// Size: 753 bytes
// Class: MUElementAnalyzer


void FUN_014b7630(float param_1,float param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int in_ECX;
  longlong *in_RDX;
  longlong *plVar5;
  longlong lVar6;
  char unaff_SIL;
  longlong *unaff_RDI;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float extraout_XMM0_Da;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = (float)_logf(DAT_02394204 * param_1);
  iVar4 = FUN_00e7d780((fVar9 * DAT_02394208) / DAT_023908e0);
  bVar3 = true;
  fVar9 = extraout_XMM0_Da;
  if (unaff_SIL == '\0') {
LAB_014b7754:
    bVar3 = true;
    lVar6 = 0;
  }
  else {
    lVar8 = *in_RDX;
    lVar6 = 0;
    if ((lVar8 != 0) && (lVar6 = 0, in_ECX + -1 <= iVar4)) {
      iVar4 = ((iVar4 - in_ECX) + 1) / 3;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      iVar7 = *(int *)(lVar8 + 0xc) + -1;
      if (iVar4 < *(int *)(lVar8 + 0xc)) {
        iVar7 = iVar4;
      }
      lVar6 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar7 * 8);
      fVar9 = (float)FUN_00d50b00();
      iVar4 = *(int *)(lVar6 + 0x18);
      iVar7 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar7 = iVar4;
      }
      in_RDX = (longlong *)(ulonglong)(uint)(iVar7 >> 2);
      if (7 < iVar4) {
        plVar5 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
        fVar11 = **(float **)(lVar6 + 0x10);
        do {
          fVar9 = (*(float **)(lVar6 + 0x10))[(longlong)plVar5];
          if (fVar9 < fVar11) {
            fVar9 = (float)FUN_00d50b20();
            goto LAB_014b7754;
          }
          plVar5 = (longlong *)((longlong)plVar5 + 1);
          fVar11 = fVar9;
        } while (in_RDX != plVar5);
      }
      bVar3 = false;
    }
  }
  uVar10 = FUN_00c8e340(fVar9,0);
  lVar8 = *unaff_RDI;
  iVar4 = *(int *)(lVar8 + 0x18);
  FUN_00c8e340(uVar10,1);
  *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar4) = 0;
  fVar9 = param_1;
  if (lVar6 != 0) {
    fVar12 = 0.0;
    lVar8 = 1;
    if ((longlong)(int)in_RDX < 2) goto LAB_014b77e0;
    do {
      fVar12 = *(float *)(*(longlong *)(lVar6 + 0x10) + lVar8 * 4);
      while( true ) {
        fVar11 = fVar12 * param_1;
        if (param_2 < fVar11) goto LAB_014b78a3;
        lVar2 = *unaff_RDI;
        iVar4 = *(int *)(lVar2 + 0x18);
        FUN_00c8e340(param_1,1);
        *(float *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar4) = fVar11;
        lVar8 = lVar8 + 1;
        if (lVar8 < (int)in_RDX) break;
LAB_014b77e0:
        fVar12 = fVar12 + DAT_02390124;
      }
    } while( true );
  }
  fVar11 = param_1;
  if (param_1 <= param_2) {
    iVar4 = 2;
    fVar12 = param_1;
    do {
      lVar8 = *unaff_RDI;
      iVar7 = *(int *)(lVar8 + 0x18);
      FUN_00c8e340(fVar9,1);
      *(float *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar7) = fVar12;
      fVar11 = (float)iVar4 * param_1;
      iVar4 = iVar4 + 1;
      fVar9 = fVar12;
      fVar12 = fVar11;
    } while (fVar11 <= param_2);
  }
LAB_014b78a3:
  lVar8 = *unaff_RDI;
  uVar1 = *(uint *)(lVar8 + 0x18);
  if ((uVar1 & 0xfffffffc) == 4) {
    FUN_00c8e340(fVar9,1);
    *(float *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)uVar1) = fVar11;
  }
  if (!bVar3 && lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}


