// Function: FUN_017d5dc0
// Address: 017d5dc0
// Size: 632 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x017d5ef5) */
/* WARNING: Removing unreachable block (ram,0x017d5f05) */
/* WARNING: Removing unreachable block (ram,0x017d5f56) */
/* WARNING: Removing unreachable block (ram,0x017d5f5f) */
/* WARNING: Removing unreachable block (ram,0x017d5e57) */
/* WARNING: Removing unreachable block (ram,0x017d5e80) */
/* WARNING: Removing unreachable block (ram,0x017d5e59) */
/* WARNING: Removing unreachable block (ram,0x017d5e82) */

void FUN_017d5dc0(ulonglong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong unaff_RDI;
  int iVar4;
  int local_40;
  
  cVar2 = FUN_00d59e50();
  if ((cVar2 != '\0') && (lVar1 = *(longlong *)(unaff_RDI + 0x68), lVar1 != 0)) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar1 + 0xc)) {
      pvVar3 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(lVar1 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018bb110();
    }
    FUN_018bc370();
  }
  param_1 = param_1 & 0xff;
  FUN_00d5af30(param_1,param_2,param_3);
  cVar2 = FUN_00d59e50();
  if ((cVar2 != '\0') && (lVar1 = *(longlong *)(unaff_RDI + 0x68), lVar1 != 0)) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_018bb110();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_018bc370();
  }
  return;
}


