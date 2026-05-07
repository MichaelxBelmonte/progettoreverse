// Function: FUN_017712c0
// Address: 017712c0
// Size: 553 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x017713c3) */
/* WARNING: Removing unreachable block (ram,0x017713d0) */
/* WARNING: Removing unreachable block (ram,0x01771412) */
/* WARNING: Removing unreachable block (ram,0x0177141b) */
/* WARNING: Removing unreachable block (ram,0x01771327) */
/* WARNING: Removing unreachable block (ram,0x01771350) */
/* WARNING: Removing unreachable block (ram,0x01771329) */
/* WARNING: Removing unreachable block (ram,0x01771352) */

void FUN_017712c0(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong unaff_RDI;
  int iVar3;
  int local_40;
  
  lVar2 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar2 != 0) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar2 + 0xc)) {
      pvVar1 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(lVar2 + 0x10));
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779fc0();
    }
    FUN_01777940();
    param_1 = lVar2;
  }
  FUN_00d64850();
  FUN_00d243f0();
  FUN_00d64910();
  lVar2 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01779fc0();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar2 + 0xc));
    }
    FUN_01777940();
  }
  return;
}


