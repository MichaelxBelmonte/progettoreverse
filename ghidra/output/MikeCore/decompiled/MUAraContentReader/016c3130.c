// Function: FUN_016c3130
// Address: 016c3130
// Size: 1225 bytes
// Class: MUAraContentReader


/* WARNING: Removing unreachable block (ram,0x016c33f7) */
/* WARNING: Removing unreachable block (ram,0x016c3400) */
/* WARNING: Removing unreachable block (ram,0x016c327a) */
/* WARNING: Removing unreachable block (ram,0x016c3286) */
/* WARNING: Removing unreachable block (ram,0x016c3260) */
/* WARNING: Removing unreachable block (ram,0x016c326c) */
/* WARNING: Removing unreachable block (ram,0x016c3330) */
/* WARNING: Removing unreachable block (ram,0x016c3339) */
/* WARNING: Removing unreachable block (ram,0x016c35fd) */
/* WARNING: Removing unreachable block (ram,0x016c3602) */
/* WARNING: Removing unreachable block (ram,0x016c340e) */
/* WARNING: Removing unreachable block (ram,0x016c341a) */

void FUN_016c3130(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong unaff_RDI;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  longlong local_d8;
  char local_d0;
  int iStack_74;
  double local_68;
  ulonglong local_60;
  char local_58;
  int local_4c;
  longlong local_40;
  
  FUN_016d63b0();
  uVar2 = *(undefined8 *)(unaff_RDI + 0x68);
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  local_40 = **(longlong **)(local_60 + 0x10);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  lVar6 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  local_68 = (double)FUN_019079d0();
  local_4c = 2;
  while( true ) {
    pVar5 = (pthread_key_t)param_1;
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    iVar1 = *(int *)(local_60 + 0xc);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 <= local_4c) break;
    if (lVar6 != local_40) {
      local_40 = lVar6;
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    param_1 = *(longlong *)(local_60 + 0x10);
    lVar6 = *(longlong *)(param_1 + (longlong)local_4c * 8);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    dVar7 = (double)FUN_019079d0();
    dVar8 = dVar7;
    if (dVar7 <= local_68) {
      dVar8 = local_68;
    }
    dVar10 = dVar7;
    if (local_68 <= dVar7) {
      dVar10 = local_68;
    }
    if (DAT_02411148 < dVar8 / dVar10) {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_016cc400();
    }
    if ((local_68 != dVar7) || (NAN(local_68) || NAN(dVar7))) {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = FUN_019079b0();
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_00e7b970();
      if (((local_60 >> 0x20 != 0) && (iStack_74 = (int)((ulonglong)uVar2 >> 0x20), iStack_74 != 0))
         && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = FUN_019079b0();
        uVar9 = FUN_00e7b970();
        FUN_016da710(uVar9,local_60);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        local_4c = local_4c + 1;
      }
    }
    local_4c = local_4c + 1;
    local_68 = dVar7;
  }
  return;
}


