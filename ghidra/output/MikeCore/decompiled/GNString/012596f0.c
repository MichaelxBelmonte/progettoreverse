// Function: FUN_012596f0
// Address: 012596f0
// Size: 665 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01259986) */
/* WARNING: Removing unreachable block (ram,0x012598f1) */
/* WARNING: Removing unreachable block (ram,0x012598fa) */
/* WARNING: Removing unreachable block (ram,0x0125998f) */
/* WARNING: Removing unreachable block (ram,0x01259803) */
/* WARNING: Removing unreachable block (ram,0x01259810) */
/* WARNING: Removing unreachable block (ram,0x01259767) */
/* WARNING: Removing unreachable block (ram,0x01259790) */
/* WARNING: Removing unreachable block (ram,0x01259769) */
/* WARNING: Removing unreachable block (ram,0x01259792) */

void FUN_012596f0(longlong param_1)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  int iVar5;
  int local_40;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if ((cVar1 != '\0') && (lVar4 = unaff_RDI[0x1c], lVar4 != 0)) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar4 + 0xc)) {
      pvVar2 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(lVar4 + 0x10));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef880();
    }
    FUN_0015edf0();
    param_1 = lVar4;
  }
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  pVar3 = (pthread_key_t)param_1;
  if ((cVar1 != '\0') && (lVar4 = unaff_RDI[0xe], lVar4 != 0)) {
    if (0 < *(int *)(lVar4 + 0xc)) {
      iVar5 = 0;
      do {
        pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c7260();
        pVar3 = (pthread_key_t)param_1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar4 + 0xc));
    }
    FUN_012a3490();
  }
  if ((unaff_RDI[0x19] != 0) && (cVar1 = (**(code **)(*unaff_RDI + 0x368))(), cVar1 != '\0')) {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ec00();
  }
  FUN_00e8b7e0();
  return;
}


