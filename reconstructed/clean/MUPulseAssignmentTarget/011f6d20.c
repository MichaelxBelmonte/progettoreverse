// Function: FUN_011f6d20
// Address: 011f6d20
// Size: 748 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"

int FUN_011f6d20(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int extraout_var;
  int extraout_var_00;
  int64_t *arg1;
  int64_t lVar7;
  uint64_t uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint8_t auVar12 [16];
  int64_t local_48;
  char local_40;
  int local_34;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c99c0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  lVar6 = *arg1;
  if (*(int *)(lVar6 + 0xc) < 1) {
    local_34 = 0;
    if (local_48 == 0) {
      return 0;
    }
  }
  else {
    lVar7 = 0;
    local_34 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + lVar7 * 8);
      if ((g_0272fca8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_027902e0 = "MUPulseAssignmentTarget";
        g_027902f0 = 0;
        g_027902e8 = 0;
        ___cxa_guard_release();
      }
      if (plVar1 == (int64_t *)0x0) {
        lVar6 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar1 + 0x360))();
        lVar6 = FUN_00e86120(uVar8,1);
      }
      (**(code **)(*(int64_t *)((int64_t)plVar1 + lVar6) + 0x38))();
      dVar9 = (double)FUN_00e7c860();
      iVar4 = *(int *)(local_48 + 0xc);
      if (0 < iVar4) {
        lVar6 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + lVar6 * 8);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          dVar10 = (double)FUN_00e7c860();
          dVar11 = (double)FUN_00e7c860();
          dVar11 = (dVar9 - dVar10) / dVar11;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = dVar11;
          auVar12 = roundsd(ZEXT816(0),auVar12,9);
          FUN_011f78b0(dVar11 - auVar12._0_8_);
          FUN_00e7bcc0();
          FUN_00e7b820();
          FUN_00e7bac0();
          FUN_00e7b820();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (((extraout_var != 0) && (extraout_var_00 != 0)) &&
             (cVar3 = FUN_00e7c000(), cVar3 != '\0')) {
            if (local_34 < (int)lVar6) {
              local_34 = (int)lVar6;
            }
            goto LAB_011f6dea;
          }
          lVar6 = lVar6 + 1;
          iVar4 = *(int *)(local_48 + 0xc);
        } while (lVar6 < iVar4);
      }
      local_34 = iVar4 + -1;
LAB_011f6dea:
      lVar6 = *arg1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(lVar6 + 0xc));
  }
  FUN_00d50b20();
  return local_34;
}

