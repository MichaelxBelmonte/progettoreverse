// Function: FUN_01308ea0
// Address: 01308ea0
// Size: 2766 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0130944e) */
/* WARNING: Removing unreachable block (ram,0x0130945a) */
/* WARNING: Removing unreachable block (ram,0x01309414) */
/* WARNING: Removing unreachable block (ram,0x01309420) */
/* WARNING: Removing unreachable block (ram,0x013093a1) */
/* WARNING: Removing unreachable block (ram,0x013093ad) */
/* WARNING: Removing unreachable block (ram,0x01308fbd) */
/* WARNING: Removing unreachable block (ram,0x01308fcd) */
/* WARNING: Removing unreachable block (ram,0x0130913e) */
/* WARNING: Removing unreachable block (ram,0x0130914a) */
/* WARNING: Removing unreachable block (ram,0x01309124) */
/* WARNING: Removing unreachable block (ram,0x01309130) */
/* WARNING: Removing unreachable block (ram,0x0130917c) */
/* WARNING: Removing unreachable block (ram,0x01309188) */
/* WARNING: Removing unreachable block (ram,0x013094aa) */
/* WARNING: Removing unreachable block (ram,0x013094b6) */
/* WARNING: Removing unreachable block (ram,0x013093fa) */
/* WARNING: Removing unreachable block (ram,0x01309406) */
/* WARNING: Removing unreachable block (ram,0x0130987f) */
/* WARNING: Removing unreachable block (ram,0x0130988b) */
/* WARNING: Removing unreachable block (ram,0x01309531) */
/* WARNING: Removing unreachable block (ram,0x0130953a) */
/* WARNING: Removing unreachable block (ram,0x01309005) */
/* WARNING: Removing unreachable block (ram,0x0130900e) */
/* WARNING: Removing unreachable block (ram,0x01309212) */
/* WARNING: Removing unreachable block (ram,0x0130921b) */
/* WARNING: Removing unreachable block (ram,0x01309899) */
/* WARNING: Removing unreachable block (ram,0x013098a5) */
/* WARNING: Removing unreachable block (ram,0x01309583) */
/* WARNING: Removing unreachable block (ram,0x013095a0) */
/* WARNING: Removing unreachable block (ram,0x01309585) */
/* WARNING: Removing unreachable block (ram,0x013095a2) */
/* WARNING: Removing unreachable block (ram,0x01309636) */
/* WARNING: Removing unreachable block (ram,0x01309670) */
/* WARNING: Removing unreachable block (ram,0x01309638) */
/* WARNING: Removing unreachable block (ram,0x01309674) */

void FUN_01308ea0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  pthread_key_t pVar9;
  int iVar10;
  longlong *unaff_RDI;
  int local_a8;
  longlong *local_68;
  char local_60;
  int local_50;
  
  lVar6 = unaff_RDI[0x1e];
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar4 != (void *)0x0) {
    lVar6 = unaff_RDI[0x1e];
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  pVar9 = (pthread_key_t)param_1;
  plVar1 = *(longlong **)(lVar6 + 0x118);
  if (plVar1 == (longlong *)0x0) {
LAB_01308f7e:
    if ((longlong *)unaff_RDI[0x20] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x20] + 0x6c0))();
    }
  }
  else {
    FUN_00d50b00();
    if ((longlong *)unaff_RDI[0x20] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x20] + 0x6b0))();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar9 = (pthread_key_t)param_1;
      if (local_68 == plVar1) goto LAB_01308f7e;
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    plVar8 = plVar1;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      param_1 = plVar1;
      plVar8 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    pVar9 = (pthread_key_t)param_1;
    (**(code **)(*plVar8 + 0x398))();
    if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e57e0();
    FUN_00b335a0();
    FUN_00b335d0();
    (**(code **)(*local_68 + 0x398))();
    (**(code **)(*unaff_RDI + 0x3a8))();
    lVar6 = *local_68;
    (**(code **)(lVar6 + 0x3a0))();
    pVar9 = (pthread_key_t)lVar6;
    FUN_00d50b00();
    FUN_012dd9b0();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_68 + 0x368))();
    FUN_00ca0840();
    (**(code **)(*local_68 + 0x6c0))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  if (local_60 == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01309220;
    }
LAB_013092a6:
    bVar3 = true;
    lVar6 = unaff_RDI[0x21];
joined_r0x013092b6:
    if (lVar6 != 0) {
      FUN_013e9e30();
    }
  }
  else {
    if (local_68 == (longlong *)0x0) goto LAB_013092a6;
LAB_01309220:
    if (unaff_RDI[0x21] != 0) {
      FUN_013e9df0();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = false;
      lVar6 = unaff_RDI[0x21];
      goto joined_r0x013092b6;
    }
    plVar8 = (longlong *)FUN_00e8fc40();
    FUN_01312e30();
    (**(code **)(*plVar8 + 0x18))();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f0ad0();
    FUN_00b33530();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011f0b20();
    FUN_00b335a0();
    FUN_00b335d0();
    (**(code **)(*plVar8 + 0x398))();
    (**(code **)(*unaff_RDI + 0x3a8))();
    lVar6 = *plVar8;
    (**(code **)(lVar6 + 0x3a0))();
    pVar9 = (pthread_key_t)lVar6;
    FUN_00d50b00();
    FUN_012dd9b0();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_013e9010();
    (**(code **)(*plVar8 + 0x368))();
    FUN_00ca0840();
    FUN_013e9e30();
    FUN_00d50b20();
    bVar3 = false;
  }
  pvVar4 = _pthread_getspecific(pVar9);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_013098ec;
    FUN_00d50b00();
  }
  else if (local_68 == (longlong *)0x0) goto LAB_013098ec;
  local_50 = -1;
  while( true ) {
    lVar6 = (longlong)local_50;
    local_50 = local_50 + 1;
    if (*(int *)((longlong)local_68 + 0xc) <= local_50) break;
    lVar5 = local_68[2];
    lVar6 = *(longlong *)(lVar5 + 8 + lVar6 * 8);
    lVar2 = unaff_RDI[0x1f];
    if (lVar2 == 0) {
LAB_013096fc:
      pVar9 = (pthread_key_t)lVar5;
      plVar8 = (longlong *)FUN_00e8fc40();
      FUN_011ce1f0();
      (**(code **)(*plVar8 + 0x18))();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_00b33530();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e57e0();
      FUN_00b335a0();
      (**(code **)(*unaff_RDI + 0x3a8))();
      (**(code **)(*plVar8 + 0x3a0))();
      FUN_00b335d0();
      (**(code **)(*plVar8 + 0x398))();
      FUN_00d50b00();
      FUN_012dd9b0();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_01308480();
      (**(code **)(*plVar8 + 0x368))();
      FUN_00ca0840();
      FUN_01308ea0();
      FUN_00d50b20();
    }
    else {
      local_a8 = -1;
      do {
        while( true ) {
          lVar5 = 0;
          lVar7 = (longlong)local_a8;
          local_a8 = local_a8 + 1;
          if (*(int *)(lVar2 + 0xc) <= local_a8) {
            FUN_01312d90();
            goto LAB_013096fc;
          }
          lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar7 * 8) + 0xf0);
          if (lVar5 == 0) break;
          FUN_00d50b00();
          FUN_00d50b20();
          if (lVar5 == lVar6) goto LAB_01309570;
        }
      } while (lVar6 != 0);
LAB_01309570:
      FUN_01312d90();
    }
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_013098ec:
  lVar6 = unaff_RDI[0x1f];
  if (lVar6 != 0) {
    for (iVar10 = 0; iVar10 < *(int *)(lVar6 + 0xc); iVar10 = iVar10 + 1) {
      FUN_01308ea0();
    }
    FUN_01312d90();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


