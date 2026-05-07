// Function: FUN_015b9e20
// Address: 015b9e20
// Size: 611 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015b9e70) */
/* WARNING: Removing unreachable block (ram,0x015b9e79) */
/* WARNING: Removing unreachable block (ram,0x015b9f33) */
/* WARNING: Removing unreachable block (ram,0x015b9f3c) */
/* WARNING: Removing unreachable block (ram,0x015ba06c) */
/* WARNING: Removing unreachable block (ram,0x015ba079) */
/* WARNING: Removing unreachable block (ram,0x015b9fcc) */
/* WARNING: Removing unreachable block (ram,0x015b9fd5) */

void FUN_015b9e20(void *param_1,undefined8 param_2,size_t param_3)

{
  longlong lVar1;
  longlong unaff_RDI;
  float fVar2;
  undefined8 local_38;
  undefined1 local_30;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e4f0();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_00c92170();
  fVar2 = (float)FUN_00c92160();
  if (lVar1 != 0) {
    fVar2 = (float)FUN_00d50b20();
  }
  if (1 < *(int *)(unaff_RDI + 0x44)) {
    lVar1 = 1;
    do {
      fVar2 = (float)FUN_015b9640(fVar2,0);
      param_1 = *(void **)(local_38 + 0x10);
      fVar2 = fVar2 * *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10) + lVar1 * 4);
      *(float *)((longlong)param_1 + lVar1 * 4) = fVar2;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(unaff_RDI + 0x44));
  }
  FUN_015b7cb0();
  FUN_00c8e690();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_38 + 0x18)) {
    _memset_pattern16(param_1,(void *)((ulonglong)((*(uint *)(local_38 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  FUN_015b92d0();
  FUN_00d50b20();
  FUN_00c8e690();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_38 + 0x18)) {
    _memset_pattern16(param_1,(void *)((ulonglong)((*(uint *)(local_38 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  FUN_015b9470();
  FUN_00d50b20();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return;
}


