// Function: FUN_007ebe20
// Address: 007ebe20
// Size: 1648 bytes
// Class: GNModuleView


/* WARNING: Removing unreachable block (ram,0x007ec088) */
/* WARNING: Removing unreachable block (ram,0x007ec094) */
/* WARNING: Removing unreachable block (ram,0x007ec3f2) */
/* WARNING: Removing unreachable block (ram,0x007ec3fe) */
/* WARNING: Removing unreachable block (ram,0x007ec43d) */
/* WARNING: Removing unreachable block (ram,0x007ec42f) */
/* WARNING: Removing unreachable block (ram,0x007ec446) */
/* WARNING: Removing unreachable block (ram,0x007ebeb9) */
/* WARNING: Removing unreachable block (ram,0x007ebeb7) */
/* WARNING: Removing unreachable block (ram,0x007ebee0) */
/* WARNING: Removing unreachable block (ram,0x007ebee2) */
/* WARNING: Removing unreachable block (ram,0x007ebf5f) */
/* WARNING: Removing unreachable block (ram,0x007ebf68) */
/* WARNING: Removing unreachable block (ram,0x007ebfc7) */
/* WARNING: Removing unreachable block (ram,0x007ebfd0) */

void FUN_007ebe20(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong unaff_RDI;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong local_a0;
  char local_98;
  longlong local_78;
  char local_70;
  int local_60;
  longlong local_48;
  char local_40;
  
  FUN_007ec8d0();
  if (local_70 == '\0') {
    if (local_78 == 0) goto LAB_007ec180;
    FUN_00d50b00();
  }
  else if (local_78 == 0) {
LAB_007ec180:
    bVar2 = true;
    plVar1 = *(longlong **)(unaff_RDI + 0xe8);
    goto joined_r0x007ec17c;
  }
  local_60 = -1;
  while (local_60 = local_60 + 1, local_60 < *(int *)(local_78 + 0xc)) {
    pVar4 = (pthread_key_t)*(undefined8 *)(local_78 + 0x10);
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01367820();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01326de0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  param_1 = local_78;
  FUN_001159b0();
  bVar2 = false;
  plVar1 = *(longlong **)(unaff_RDI + 0xe8);
joined_r0x007ec17c:
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x998))();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x918))();
  if (!bVar2) {
    if (*(int *)(local_78 + 0xc) < 1) {
      iVar6 = 0;
      iVar7 = 0;
    }
    else {
      iVar5 = 0;
      iVar7 = 0;
      iVar6 = 0;
      do {
        while( true ) {
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01268710();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 != 0) break;
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb7a0();
          if (local_40 != '\0') {
            local_40 = '\0';
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          iVar7 = (iVar7 + 1) - (uint)(MACH_HEADER.filetype == 0);
          FUN_00d50b20();
          iVar5 = iVar5 + 1;
          if (*(int *)(local_78 + 0xc) <= iVar5) goto LAB_007ec453;
        }
        (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x918))();
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(local_78 + 0xc));
    }
LAB_007ec453:
    FUN_001159b0();
    if ((0 < iVar6) && (0 < iVar7)) {
      bVar2 = false;
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x918))();
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}


