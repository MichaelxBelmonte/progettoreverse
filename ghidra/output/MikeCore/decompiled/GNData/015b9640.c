// Function: FUN_015b9640
// Address: 015b9640
// Size: 662 bytes
// Class: GNData


float FUN_015b9640(pthread_key_t param_1,char param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  int unaff_ESI;
  longlong unaff_RDI;
  float fVar5;
  float fVar6;
  longlong local_50;
  char local_48;
  float local_34;
  
  lVar4 = *(longlong *)(unaff_RDI + 0x68);
  fVar5 = DAT_02390124;
  if (lVar4 != 0) {
    FUN_00d50b00();
    local_34 = *(float *)(*(longlong *)(lVar4 + 0x10) + (longlong)unaff_ESI * 4);
    if (param_2 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017ed3a0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017ed3a0();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar5 = (float)FUN_012c6af0();
        fVar5 = (float)_exp2f(fVar5 * DAT_023941f4);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        local_34 = local_34 * (DAT_02390124 / fVar5);
      }
    }
    iVar1 = *(int *)(unaff_RDI + 0x44);
    lVar4 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    if (*(int *)(unaff_RDI + 0x40) == 3) {
      fVar5 = (float)_logf(local_34);
      fVar6 = (float)unaff_ESI + fVar5 * DAT_02394208 * DAT_02394254;
      fVar5 = 0.0;
      if (0.0 <= fVar6) {
        fVar5 = fVar6;
      }
    }
    else {
      fVar5 = local_34 * (float)unaff_ESI;
    }
    iVar2 = FUN_00e7d780();
    if (iVar2 < iVar1 + -1) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      if (iVar2 == 0) {
        fVar6 = 0.0;
        if (*(int *)(unaff_RDI + 0x40) == 3) {
          fVar6 = *(float *)(lVar4 + 4);
        }
      }
      else {
        fVar6 = *(float *)(lVar4 + (longlong)iVar2 * 4);
      }
      local_34 = (fVar5 - (float)iVar2) * *(float *)(lVar4 + 4 + (longlong)iVar2 * 4) +
                 (DAT_02390124 - (fVar5 - (float)iVar2)) * fVar6;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      local_34 = *(float *)(lVar4 + -4 + (longlong)iVar1 * 4);
    }
    fVar5 = *(float *)(lVar4 + (longlong)unaff_ESI * 4);
    FUN_00d50b20();
    FUN_00d50b20();
    fVar5 = local_34 / fVar5;
  }
  return fVar5;
}


