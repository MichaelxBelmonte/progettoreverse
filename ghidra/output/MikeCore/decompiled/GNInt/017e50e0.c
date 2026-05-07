// Function: FUN_017e50e0
// Address: 017e50e0
// Size: 812 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x017e5351) */
/* WARNING: Removing unreachable block (ram,0x017e535e) */
/* WARNING: Removing unreachable block (ram,0x017e53e4) */
/* WARNING: Removing unreachable block (ram,0x017e53ed) */
/* WARNING: Removing unreachable block (ram,0x017e5287) */
/* WARNING: Removing unreachable block (ram,0x017e52b0) */
/* WARNING: Removing unreachable block (ram,0x017e5289) */
/* WARNING: Removing unreachable block (ram,0x017e52b2) */

void FUN_017e50e0(void)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  longlong unaff_RDI;
  undefined8 local_a0;
  code *local_98;
  longlong local_70;
  char local_68;
  undefined8 *local_58;
  char local_50;
  int local_40;
  
  plVar4 = (longlong *)FUN_010eca10();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0x58);
  *(longlong **)(unaff_RDI + 0x58) = plVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pcVar2 = DAT_02572370;
  local_68 = '\0';
  local_70 = 0;
  pcVar7 = DAT_02572370;
  do {
    do {
      pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_00e7bdb0();
      pcVar7 = (code *)FUN_00e7bdb0();
      cVar3 = FUN_01252960(pcVar7,uVar6,&local_70,&local_a0);
      pVar9 = (pthread_key_t)pcVar7;
      if (cVar3 == '\0') {
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        return;
      }
    } while (local_70 == 0);
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    (*pcVar2)();
    FUN_017e4b40();
    if (local_50 == '\0') {
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b00();
        goto LAB_017e5251;
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
LAB_017e5251:
      local_40 = -1;
      while (local_40 = local_40 + 1, local_40 < *(int *)((longlong)local_58 + 0xc)) {
        pvVar5 = _pthread_getspecific((pthread_key_t)local_58[2]);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_017dde70();
        if (cVar3 != '\0') {
          FUN_00d24b60(0,FUN_017db4e0,0);
        }
      }
      FUN_01916320();
      pVar9 = (pthread_key_t)local_58;
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = '\0';
    pcVar7 = local_98;
    FUN_012502a0(local_98,local_a0,0);
    local_58 = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  } while( true );
}


