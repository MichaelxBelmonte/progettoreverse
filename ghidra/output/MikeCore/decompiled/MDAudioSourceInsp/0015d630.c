// Function: FUN_0015d630
// Address: 0015d630
// Size: 831 bytes
// Class: MDAudioSourceInsp


/* WARNING: Removing unreachable block (ram,0x0015d92a) */
/* WARNING: Removing unreachable block (ram,0x0015d933) */
/* WARNING: Removing unreachable block (ram,0x0015d6fd) */
/* WARNING: Removing unreachable block (ram,0x0015d709) */
/* WARNING: Removing unreachable block (ram,0x0015d807) */
/* WARNING: Removing unreachable block (ram,0x0015d810) */
/* WARNING: Removing unreachable block (ram,0x0015d857) */
/* WARNING: Removing unreachable block (ram,0x0015d880) */
/* WARNING: Removing unreachable block (ram,0x0015d859) */
/* WARNING: Removing unreachable block (ram,0x0015d882) */

undefined8 * FUN_0015d630(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong lVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  pthread_key_t pVar6;
  longlong local_a0;
  char local_98;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x2572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  if (*(longlong *)(unaff_RSI + 0x88) != 0) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_98 == '\0') {
      if (local_a0 == 0) goto LAB_0015d981;
      FUN_00d50b00();
    }
    else if (local_a0 == 0) goto LAB_0015d981;
    if (0 < *(int *)(local_a0 + 0xc)) {
      pVar6 = 0;
      do {
        lVar2 = local_58;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
            goto LAB_0015d820;
          }
        }
        else if (local_58 != 0) {
LAB_0015d820:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          while( true ) {
            lVar5 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar2 + 0xc) <= local_40) break;
            lVar1 = *(longlong *)(lVar2 + 0x10);
            local_58 = *(longlong *)(lVar1 + 8 + lVar5 * 8);
            pvVar4 = _pthread_getspecific((pthread_key_t)lVar1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef640();
            if (local_60 == '\0') {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            FUN_00d235a0();
            if (local_68 != 0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar6 = pVar6 + 1;
      } while ((int)pVar6 < *(int *)(local_a0 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
LAB_0015d981:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


