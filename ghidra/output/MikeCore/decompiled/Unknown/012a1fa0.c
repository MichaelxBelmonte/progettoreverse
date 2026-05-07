// Function: FUN_012a1fa0
// Address: 012a1fa0
// Size: 687 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x012a21a9) */
/* WARNING: Removing unreachable block (ram,0x012a21b6) */
/* WARNING: Removing unreachable block (ram,0x012a20f3) */
/* WARNING: Removing unreachable block (ram,0x012a20fc) */

void FUN_012a1fa0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  longlong *unaff_RDI;
  longlong lVar8;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *unaff_RDI;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          lVar4 = *(longlong *)(lVar5 + 0x48);
          if (lVar4 == 0) goto LAB_012a2092;
LAB_012a2120:
          FUN_00d50b00();
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
          if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
            lVar5 = *(longlong *)(lVar4 + 0x100);
          }
          else {
            lVar5 = *(longlong *)
                     (*(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                     0x100);
          }
          if (lVar5 != 0) {
            FUN_00d50b00();
            FUN_00d235a0();
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        else {
          lVar4 = *(longlong *)
                   (*(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                   0x48);
          if (lVar4 != 0) goto LAB_012a2120;
LAB_012a2092:
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
          }
          if (*(longlong *)(lVar5 + 0x100) != 0) {
            FUN_00d50b00();
            FUN_00d235a0();
            FUN_00d50b20();
          }
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
  }
  for (iVar7 = 0; iVar7 < *(int *)((longlong)puVar2 + 0xc); iVar7 = iVar7 + 1) {
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e4520();
  }
  FUN_000be170();
  FUN_00d50b20();
  return;
}


