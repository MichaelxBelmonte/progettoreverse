// Function: FUN_001563c0
// Address: 001563c0
// Size: 2192 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "Melodyne #%d"
//   "%@.%d"


/* WARNING: Removing unreachable block (ram,0x00156744) */
/* WARNING: Removing unreachable block (ram,0x00156c08) */
/* WARNING: Removing unreachable block (ram,0x00156c14) */
/* WARNING: Removing unreachable block (ram,0x00156c60) */
/* WARNING: Removing unreachable block (ram,0x00156c6d) */
/* WARNING: Removing unreachable block (ram,0x0015644a) */
/* WARNING: Removing unreachable block (ram,0x00156453) */
/* WARNING: Removing unreachable block (ram,0x0015698f) */
/* WARNING: Removing unreachable block (ram,0x0015699c) */
/* WARNING: Removing unreachable block (ram,0x00156750) */
/* WARNING: Removing unreachable block (ram,0x00156770) */
/* WARNING: Removing unreachable block (ram,0x00156752) */
/* WARNING: Removing unreachable block (ram,0x00156772) */

void FUN_001563c0(longlong *param_1)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  char cVar8;
  bool bVar9;
  longlong local_f8;
  char local_f0;
  char local_b4;
  longlong *local_a0;
  char local_98;
  int local_74;
  longlong *local_70;
  char local_68;
  int local_58;
  longlong *local_48;
  char local_40;
  
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (local_70 == (longlong *)0x0) {
    bVar9 = false;
  }
  else {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    iVar1 = FUN_00d8c7a0();
    bVar9 = 10 < iVar1;
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_b4 = '\0';
  if (bVar9) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    FUN_00d97ce0();
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026e3cb8;
    if (DAT_026e3cb8 != 0) {
      FUN_00d50b00();
    }
    local_b4 = (**(code **)(*local_70 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_74 = 0;
  plVar7 = local_70;
  do {
    plVar6 = local_70;
    pVar4 = (pthread_key_t)param_1;
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 == (longlong *)0x0) break;
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_58 = -1;
    do {
      lVar3 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) <= local_58) {
        bVar9 = false;
        goto LAB_00156b52;
      }
      plVar5 = (longlong *)plVar6[2];
      local_70 = (longlong *)plVar5[lVar3 + 1];
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      cVar8 = local_a0 == plVar7;
      if ((!(bool)cVar8) && (plVar7 != (longlong *)0x0)) {
        pvVar2 = _pthread_getspecific((pthread_key_t)plVar5);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6000();
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        cVar8 = (**(code **)(*plVar7 + 0x50))();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    } while (cVar8 == '\0');
    local_74 = local_74 + 1;
    if (local_b4 == '\0') {
      pvVar2 = _pthread_getspecific((pthread_key_t)plVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6000();
      local_98 = '\x02';
      if (local_f8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_48 == plVar7) {
LAB_00156af2:
        plVar6 = plVar7;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar6 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar7 = local_48;
            goto LAB_00156af2;
          }
        }
        else {
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          local_40 = '\0';
        }
      }
      local_a0 = &DAT_024c5048;
      if (local_f8 != 0) {
        FUN_00d50b20();
      }
      plVar7 = plVar6;
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\x01';
      plVar5 = &DAT_024cc6f0;
      local_48 = &DAT_024cc6f0;
      FUN_00d8cb40();
      if (local_a0 == plVar7) {
LAB_00156aaa:
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_98 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = plVar7 != (longlong *)0x0;
        plVar7 = local_a0;
        if (bVar9) {
          FUN_00d50b20();
          goto LAB_00156aaa;
        }
      }
      else {
        bVar9 = plVar7 != (longlong *)0x0;
        plVar7 = local_a0;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
    }
    bVar9 = true;
    plVar6 = plVar5;
LAB_00156b52:
    FUN_000be170();
    FUN_00d50b20();
    pVar4 = (pthread_key_t)plVar6;
    param_1 = plVar6;
  } while (bVar9);
  if (0 < local_74) {
    lVar3 = *(longlong *)(unaff_RDI + 0x88);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5f80();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


