// Function: FUN_011f70a0
// Address: 011f70a0
// Size: 943 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"


/* WARNING: Removing unreachable block (ram,0x011f713f) */
/* WARNING: Removing unreachable block (ram,0x011f7148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_011f70a0(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  int extraout_var;
  ulonglong uVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  longlong local_50;
  char local_48;
  uint local_34;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c99c0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  iVar3 = *(int *)(local_50 + 0xc);
  while (iVar3 <= (int)param_1) {
    FUN_011f7510();
    iVar3 = *(int *)(local_50 + 0xc);
  }
  lVar8 = (longlong)(int)param_1;
  lVar1 = *(longlong *)(*(longlong *)(local_50 + 0x10) + lVar8 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar5 = *unaff_RSI;
  if (*(int *)(lVar5 + 0xc) < 1) {
    local_34 = (uint)CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
  }
  else {
    lVar8 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
    local_34 = (uint)lVar8;
    lVar10 = 0;
    plVar9 = (longlong *)0x0;
    do {
      pVar7 = (pthread_key_t)lVar8;
      plVar11 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + lVar10 * 8);
      if ((DAT_0272fca8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_027902e0 = "MUPulseAssignmentTarget";
        DAT_027902f0 = 0;
        _DAT_027902e8 = 0;
        ___cxa_guard_release();
      }
      if (plVar11 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        uVar12 = (**(code **)(*plVar11 + 0x360))();
        lVar8 = FUN_00e86120(uVar12,1);
      }
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar11 = (longlong *)((longlong)plVar11 + lVar8);
      (**(code **)(*plVar11 + 0x18))();
      dVar13 = (double)FUN_016c25f0();
      dVar14 = (double)FUN_00e7c860();
      dVar15 = (double)FUN_00e7c860();
      dVar15 = (dVar13 - dVar14) / dVar15;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar15;
      auVar16 = roundsd(ZEXT816(0),auVar16,9);
      FUN_011f78b0(dVar15 - auVar16._0_8_);
      FUN_00e7bcc0();
      FUN_00e7b820();
      FUN_00e7bac0();
      FUN_00e7b820();
      (**(code **)(*plVar11 + 0x40))();
      (**(code **)(*plVar11 + 0x58))();
      (**(code **)(*plVar11 + 0x60))();
      if (plVar9 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        if (plVar11 != (longlong *)0x0) {
          plVar9 = plVar11;
        }
      }
      else {
        (**(code **)(*plVar11 + 0x38))();
        uVar6 = (**(code **)(*plVar9 + 0x38))();
        if ((extraout_var == 0) || (uVar6 >> 0x20 == 0)) {
          local_34 = 0;
        }
        else {
          cVar2 = FUN_00e7c020();
          local_34 = local_34 & 0xff;
          if (cVar2 == '\0') {
            local_34 = 0;
          }
        }
        if (plVar11 != plVar9) {
          (**(code **)(*plVar9 + 0x10))();
          plVar9 = plVar11;
        }
      }
      lVar5 = *unaff_RSI;
      lVar8 = (longlong)*(int *)(lVar5 + 0xc);
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar8);
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  return local_34;
}


