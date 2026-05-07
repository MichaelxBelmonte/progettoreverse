// Function: FUN_012c8a40
// Address: 012c8a40
// Size: 879 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x012c8ac7) */
/* WARNING: Removing unreachable block (ram,0x012c8af0) */
/* WARNING: Removing unreachable block (ram,0x012c8ac9) */
/* WARNING: Removing unreachable block (ram,0x012c8af2) */

void FUN_012c8a40(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  int local_40;
  
  if (*(longlong *)(unaff_RDI + 0x40) != *unaff_RSI) {
    plVar1 = (longlong *)(unaff_RDI + 0x40);
    if (*(longlong *)(unaff_RDI + 0x40) != 0) {
      lVar4 = *(longlong *)(unaff_RDI + 0x48);
      if (lVar4 != 0) {
        local_40 = -1;
        while (local_40 = local_40 + 1, local_40 < *(int *)(lVar4 + 0xc)) {
          pvVar3 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(lVar4 + 0x10));
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar2 = *plVar1;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_01657d60();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00277f20();
        param_1 = lVar4;
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50b00();
      FUN_017145f0();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64850();
    lVar4 = *unaff_RSI;
    lVar2 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar2 != lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      *plVar1 = lVar4;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (*(longlong *)(unaff_RDI + 0x40) != 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50b00();
      FUN_01713d00();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      lVar4 = *(longlong *)(unaff_RDI + 0x48);
      if (lVar4 != 0) {
        if (0 < *(int *)(lVar4 + 0xc)) {
          iVar5 = 0;
          do {
            pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar2 = *plVar1;
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            FUN_01657410();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(lVar4 + 0xc));
        }
        FUN_00277f20();
      }
    }
  }
  return;
}


