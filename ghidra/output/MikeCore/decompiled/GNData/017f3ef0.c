// Function: FUN_017f3ef0
// Address: 017f3ef0
// Size: 650 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x017f3f65) */
/* WARNING: Removing unreachable block (ram,0x017f3f6e) */
/* WARNING: Removing unreachable block (ram,0x017f3f9e) */
/* WARNING: Removing unreachable block (ram,0x017f3fa7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017f3ef0(void *param_1,undefined8 param_2,size_t param_3)

{
  float fVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong unaff_RDI;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b9440();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(param_1,(void *)((ulonglong)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  fVar1 = *(float *)(unaff_RDI + 0xac);
  **(undefined4 **)(local_40 + 0x10) = 0x3f800000;
  lVar4 = 1;
  do {
    fVar5 = (float)(int)lVar4 * fVar1;
    fVar6 = (float)_logf(fVar5 * DAT_02394204);
    fVar6 = (fVar6 * DAT_02394208) / DAT_023908e0 + DAT_0240d174;
    uVar2 = FUN_00e7d780();
    if ((int)uVar2 < 0) {
      fVar5 = **(float **)(local_40 + 0x10);
    }
    else if ((int)uVar2 < 0x65) {
      fVar7 = fVar6 - (float)(int)uVar2;
      fVar7 = (float)_logf(fVar7 * *(float *)(*(longlong *)(local_40 + 0x10) + 4 +
                                             (ulonglong)uVar2 * 4) +
                           (DAT_02390124 - fVar7) *
                           *(float *)(*(longlong *)(local_40 + 0x10) + (ulonglong)uVar2 * 4));
      fVar6 = fVar7 * DAT_02394208 * DAT_02394254 + fVar6;
      fVar7 = 0.0;
      if (0.0 <= fVar6) {
        fVar7 = fVar6;
      }
      fVar6 = (float)_exp2f((fVar7 + _DAT_0240d154) * DAT_023908e0 * DAT_023941f4);
      fVar5 = (fVar6 * DAT_023941f8) / fVar5;
    }
    else {
      fVar5 = *(float *)(*(longlong *)(local_40 + 0x10) + 0x194);
    }
    *(float *)(*(longlong *)(local_40 + 0x10) + lVar4 * 4) = fVar5;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x800);
  if (*(longlong *)(unaff_RDI + 0x98) != local_40) {
    FUN_00d64850();
    lVar4 = *(longlong *)(unaff_RDI + 0x98);
    if (lVar4 != local_40) {
      FUN_00d50b00();
      *(longlong *)(unaff_RDI + 0x98) = local_40;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}


