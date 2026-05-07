// Function: FUN_015bc030
// Address: 015bc030
// Size: 776 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015bc1a4) */
/* WARNING: Removing unreachable block (ram,0x015bc1ad) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015bc030(pthread_key_t param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong unaff_RDI;
  float fVar11;
  undefined1 auVar12 [16];
  longlong local_58;
  char local_50;
  float local_34;
  
  if (*(int *)(unaff_RDI + 0x40) == 3) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar11 = (float)FUN_017f2da0();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_017f2d90();
    uVar4 = FUN_00e7d780();
    uVar8 = *(int *)(unaff_RDI + 0x44) - 1;
    if ((int)uVar4 < *(int *)(unaff_RDI + 0x44)) {
      uVar8 = uVar4;
    }
    uVar9 = (ulonglong)uVar8;
    if ((int)uVar8 < 0) {
      uVar9 = 0;
    }
    auVar12 = insertps(ZEXT416(*(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10) +
                                        uVar9 * 4)),fVar11 * (float)iVar3,0x10);
    divps(_DAT_02411050,auVar12);
    local_34 = (float)_logf();
    fVar11 = (float)_logf();
  }
  else {
    iVar5 = FUN_00e7d780((DAT_0241145c / *(float *)(unaff_RDI + 0x8c)) * DAT_0239109c);
    iVar3 = 300;
    if (iVar5 < 300) {
      iVar3 = iVar5;
    }
    FUN_00c8e690();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    uVar8 = iVar3 * 2 + 1;
    lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
    puVar2 = *(undefined4 **)(local_58 + 0x10);
    *puVar2 = *(undefined4 *)(lVar1 + 4);
    if (1 < (int)uVar8) {
      iVar5 = *(int *)(unaff_RDI + 0x44);
      uVar9 = 1;
      do {
        iVar10 = iVar5 + -1;
        if ((longlong)uVar9 < (longlong)iVar5) {
          iVar10 = (int)uVar9;
        }
        puVar2[uVar9] = *(undefined4 *)(lVar1 + (longlong)iVar10 * 4);
        iVar10 = (int)(uVar9 + 1);
        if ((longlong)iVar5 <= (longlong)(uVar9 + 1)) {
          iVar10 = iVar5 + -1;
        }
        puVar2[uVar9 + 1] = *(undefined4 *)(lVar1 + (longlong)iVar10 * 4);
        uVar9 = uVar9 + 2;
      } while (uVar9 != uVar8);
    }
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &DAT_025f0d98;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    (*DAT_025f0db0)();
    FUN_015c15b0(1,uVar8);
    fVar11 = *(float *)(*(longlong *)(local_58 + 0x10) + (longlong)iVar3 * 4);
    FUN_00d50b20();
    fVar11 = (float)_logf(DAT_02390124 / fVar11);
    local_34 = (float)_logf((float)iVar3);
    FUN_00d50b20();
  }
  fVar11 = fVar11 / local_34;
  if ((*(float *)(unaff_RDI + 0x98) != fVar11) || (NAN(*(float *)(unaff_RDI + 0x98)) || NAN(fVar11))
     ) {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0x98) = fVar11;
    FUN_00d64910();
  }
  return;
}


