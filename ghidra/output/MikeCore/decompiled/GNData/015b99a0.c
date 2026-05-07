// Function: FUN_015b99a0
// Address: 015b99a0
// Size: 720 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015b9b26) */
/* WARNING: Removing unreachable block (ram,0x015b9b2f) */
/* WARNING: Removing unreachable block (ram,0x015b9c59) */
/* WARNING: Removing unreachable block (ram,0x015b9c66) */
/* WARNING: Removing unreachable block (ram,0x015b99e0) */
/* WARNING: Removing unreachable block (ram,0x015b99e9) */
/* WARNING: Removing unreachable block (ram,0x015b9ba9) */
/* WARNING: Removing unreachable block (ram,0x015b9bb2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015b99a0(void *param_1,undefined8 param_2,size_t param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong unaff_RDI;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  undefined8 local_40;
  undefined1 local_38;
  
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
  uVar2 = FUN_00e7dff0();
  if (1 < *(int *)(unaff_RDI + 0x44)) {
    fVar4 = (float)((double)uVar2 / _DAT_023934c0) + (float)((double)uVar2 / _DAT_023934c0) +
            DAT_02390d34;
    lVar3 = 1;
    do {
      uVar2 = FUN_00e7dff0();
      lVar1 = *(longlong *)(local_40 + 0x10);
      fVar5 = (float)_powf((float)(int)lVar3,DAT_02391094);
      dVar8 = (double)uVar2 / _DAT_023934c0 + DAT_02394dd0;
      fVar6 = (float)dVar8;
      uVar7 = _exp2f(CONCAT44((int)((ulonglong)dVar8 >> 0x20),
                              (fVar6 + fVar6) * (fVar4 / fVar5) * DAT_0239394c * DAT_023941f4));
      *(undefined4 *)(lVar1 + lVar3 * 4) = uVar7;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(unaff_RDI + 0x44));
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_015b7cb0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
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
  FUN_015b92d0();
  FUN_00d50b20();
  FUN_015b9470();
  FUN_00d50b20();
  return;
}


