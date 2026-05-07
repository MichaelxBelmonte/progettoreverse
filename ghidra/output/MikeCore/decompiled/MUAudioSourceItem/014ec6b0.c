// Function: FUN_014ec6b0
// Address: 014ec6b0
// Size: 540 bytes
// Class: MUAudioSourceItem


/* WARNING: Removing unreachable block (ram,0x014ec8ba) */
/* WARNING: Removing unreachable block (ram,0x014ec8c7) */
/* WARNING: Removing unreachable block (ram,0x014ec7fc) */
/* WARNING: Removing unreachable block (ram,0x014ec809) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_014ec6b0(double param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined *puVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  double dVar8;
  double dVar9;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8) != unaff_RSI) {
          pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_014bb920();
          if (((*(int *)(unaff_RSI + 0x98) == 0) || (uVar5 >> 0x20 == 0)) ||
             (cVar2 = FUN_00e7c000(), cVar2 == '\0')) {
            dVar8 = (double)FUN_014bb3e0();
            pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar9 = (double)FUN_014bb3e0();
            if ((double)((ulonglong)(dVar8 - dVar9) & _DAT_023908f0) < param_1) {
              FUN_00d21140();
            }
          }
          else {
            FUN_00d21140();
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_0131c810();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


