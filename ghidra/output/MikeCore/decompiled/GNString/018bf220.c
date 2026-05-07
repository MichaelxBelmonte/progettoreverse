// Function: FUN_018bf220
// Address: 018bf220
// Size: 502 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x018bf2a8) */
/* WARNING: Removing unreachable block (ram,0x018bf2b1) */

void FUN_018bf220(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong unaff_RDI;
  longlong lVar7;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018c2810();
  FUN_00c8e690();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  ___bzero();
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 == local_68) {
    FUN_00d50b20();
  }
  else {
    *(longlong *)(unaff_RDI + 0x50) = local_68;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
        pVar5 = (pthread_key_t)param_1;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_018220f0();
        pvVar3 = _pthread_getspecific(pVar5);
        lVar6 = local_40;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar6 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        param_1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
        *(undefined8 *)(param_1 + (longlong)*(int *)(lVar6 + 0x98) * 8) = uVar2;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_01894d60();
  }
  return;
}


