// Function: FUN_0167ab90
// Address: 0167ab90
// Size: 1316 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x0167ad96) */
/* WARNING: Removing unreachable block (ram,0x0167ac5a) */
/* WARNING: Removing unreachable block (ram,0x0167afe6) */
/* WARNING: Removing unreachable block (ram,0x0167aecc) */
/* WARNING: Removing unreachable block (ram,0x0167aed5) */
/* WARNING: Removing unreachable block (ram,0x0167ac26) */
/* WARNING: Removing unreachable block (ram,0x0167ac2f) */
/* WARNING: Removing unreachable block (ram,0x0167ad62) */
/* WARNING: Removing unreachable block (ram,0x0167ad6b) */
/* WARNING: Removing unreachable block (ram,0x0167afa3) */
/* WARNING: Removing unreachable block (ram,0x0167afac) */
/* WARNING: Removing unreachable block (ram,0x0167ada2) */
/* WARNING: Removing unreachable block (ram,0x0167ac60) */
/* WARNING: Removing unreachable block (ram,0x0167ac80) */
/* WARNING: Removing unreachable block (ram,0x0167ac62) */
/* WARNING: Removing unreachable block (ram,0x0167ac82) */
/* WARNING: Removing unreachable block (ram,0x0167ada0) */
/* WARNING: Removing unreachable block (ram,0x0167adc0) */
/* WARNING: Removing unreachable block (ram,0x0167adc2) */
/* WARNING: Removing unreachable block (ram,0x0167aff0) */
/* WARNING: Removing unreachable block (ram,0x0167b010) */
/* WARNING: Removing unreachable block (ram,0x0167aff2) */
/* WARNING: Removing unreachable block (ram,0x0167b012) */

void FUN_0167ab90(pthread_key_t param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  pthread_key_t pVar6;
  longlong local_88;
  char local_80;
  int local_70;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar5 = local_58;
  if (*(longlong *)(*(longlong *)(unaff_RDI + 0x30) + 0x40) == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01537d40();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0167ac34;
    }
  }
  else if (local_58 != 0) {
LAB_0167ac34:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar5 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0166d380();
    }
    FUN_0049cb70();
    param_1 = (pthread_key_t)lVar5;
    FUN_00d50b20();
  }
  lVar5 = local_58;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01537fd0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0167ad70;
    }
  }
  else if (local_58 != 0) {
LAB_0167ad70:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 8 + lVar4 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar5 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016519e0();
    }
    FUN_0049cc10();
    param_1 = (pthread_key_t)lVar5;
    FUN_00d50b20();
  }
  puVar1 = *(ulonglong **)(*(longlong *)(unaff_RDI + 0x30) + 0x40);
  if (((puVar1 != (ulonglong *)0x0) && (0x20 < *puVar1)) && (puVar1[4] != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01537fd0();
    if (local_50 == '\0') {
      if (local_58 == 0) goto LAB_0167b08b;
      FUN_00d50b00();
    }
    else if (local_58 == 0) goto LAB_0167b08b;
    if (0 < *(int *)(local_58 + 0xc)) {
      pVar6 = 0;
      do {
        lVar5 = local_88;
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0164fea0();
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
            goto LAB_0167afc0;
          }
        }
        else if (local_88 != 0) {
LAB_0167afc0:
          local_80 = '\0';
          local_88 = 0;
          local_70 = -1;
          while( true ) {
            lVar4 = (longlong)local_70;
            local_70 = local_70 + 1;
            if (*(int *)(lVar5 + 0xc) <= local_70) break;
            lVar2 = *(longlong *)(lVar5 + 0x10);
            local_88 = *(longlong *)(lVar2 + 8 + lVar4 * 8);
            pvVar3 = _pthread_getspecific((pthread_key_t)lVar2);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01658720();
          }
          FUN_00277f20();
          FUN_00d50b20();
        }
        pVar6 = pVar6 + 1;
      } while ((int)pVar6 < *(int *)(local_58 + 0xc));
    }
    FUN_0049cc10();
    FUN_00d50b20();
  }
LAB_0167b08b:
  if (*(char *)(unaff_RDI + 0x74) != '\0') {
    *(undefined1 *)(unaff_RDI + 0x74) = 0;
    puVar1 = *(ulonglong **)(*(longlong *)(unaff_RDI + 0x30) + 0x40);
    if (((puVar1 != (ulonglong *)0x0) && (0x28 < *puVar1)) && ((code *)puVar1[5] != (code *)0x0)) {
      (*(code *)puVar1[5])();
    }
  }
  return;
}


