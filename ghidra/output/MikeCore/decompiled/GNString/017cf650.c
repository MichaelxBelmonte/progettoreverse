// Function: FUN_017cf650
// Address: 017cf650
// Size: 789 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x017cf866) */
/* WARNING: Removing unreachable block (ram,0x017cf86f) */
/* WARNING: Removing unreachable block (ram,0x017cf94b) */
/* WARNING: Removing unreachable block (ram,0x017cf957) */
/* WARNING: Removing unreachable block (ram,0x017cf6f7) */
/* WARNING: Removing unreachable block (ram,0x017cf720) */
/* WARNING: Removing unreachable block (ram,0x017cf6f9) */
/* WARNING: Removing unreachable block (ram,0x017cf722) */

undefined8 * FUN_017cf650(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_78;
  char local_70;
  int local_50;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RSI + 200);
  if (lVar1 != 0) {
    FUN_00d50b00();
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
      pVar4 = (pthread_key_t)*(undefined8 *)(lVar1 + 0x10);
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01911500();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01911500();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01910920();
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_40 = local_78;
        local_38 = '\0';
        FUN_00d235a0();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_0190c060();
    FUN_00d50b20();
  }
  FUN_00d242c0();
  lVar1 = DAT_026fce10;
  if (*(int *)((longlong)puVar2 + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if (DAT_026fce10 != 0) {
      FUN_00d50b00();
    }
    FUN_00d95130();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return unaff_RDI;
}


