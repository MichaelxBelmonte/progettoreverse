// Function: FUN_012e4e50
// Address: 012e4e50
// Size: 1091 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x012e51b1) */
/* WARNING: Removing unreachable block (ram,0x012e51ba) */
/* WARNING: Removing unreachable block (ram,0x012e50ef) */
/* WARNING: Removing unreachable block (ram,0x012e506c) */
/* WARNING: Removing unreachable block (ram,0x012e507c) */
/* WARNING: Removing unreachable block (ram,0x012e50f8) */
/* WARNING: Removing unreachable block (ram,0x012e5281) */
/* WARNING: Removing unreachable block (ram,0x012e528a) */
/* WARNING: Removing unreachable block (ram,0x012e4fc7) */
/* WARNING: Removing unreachable block (ram,0x012e4ff0) */
/* WARNING: Removing unreachable block (ram,0x012e4eb7) */
/* WARNING: Removing unreachable block (ram,0x012e4ee0) */
/* WARNING: Removing unreachable block (ram,0x012e4eb9) */
/* WARNING: Removing unreachable block (ram,0x012e4ee2) */
/* WARNING: Removing unreachable block (ram,0x012e4fc9) */
/* WARNING: Removing unreachable block (ram,0x012e4ff2) */

void FUN_012e4e50(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  int iVar6;
  int local_40;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x368))();
  if (cVar1 != '\0') {
    lVar5 = unaff_RDI[0x15];
    if (lVar5 != 0) {
      local_40 = -1;
      while( true ) {
        lVar2 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar5 + 0xc) <= local_40) break;
        lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 8 + lVar2 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar5 + 0x10));
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar2 = *(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if (*(longlong *)(lVar2 + 0x110) != 0) {
          FUN_00d64850();
          *(undefined8 *)(lVar2 + 0x110) = 0;
          FUN_00d64910();
        }
      }
      FUN_000be170();
      param_1 = lVar5;
    }
    lVar5 = unaff_RDI[0x16];
    if (lVar5 != 0) {
      local_40 = -1;
      while (local_40 = local_40 + 1, local_40 < *(int *)(lVar5 + 0xc)) {
        pvVar3 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(lVar5 + 0x10));
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266f80();
      }
      FUN_001159b0();
      param_1 = lVar5;
    }
    if (unaff_RDI[0x23] != 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0123f2c0();
    }
    lVar5 = unaff_RDI[0x1a];
    if (lVar5 != 0) {
      if (0 < *(int *)(lVar5 + 0xc)) {
        iVar6 = 0;
        do {
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01307b90();
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar5 + 0xc));
      }
      FUN_013073d0();
    }
    lVar5 = unaff_RDI[0x1b];
    if (lVar5 != 0) {
      if (0 < *(int *)(lVar5 + 0xc)) {
        iVar6 = 0;
        do {
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dd780();
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar5 + 0xc));
      }
      FUN_01307470();
    }
  }
  FUN_00e8b7e0();
  return;
}


