// Function: FUN_00c7b3d0
// Address: 00c7b3d0
// Size: 891 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00c7b3d0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t arg1;
  uint64_t uVar8;
  int64_t *this_ptr;
  
  plVar7 = (int64_t *)*param_2;
  FUN_00053ac0();
  if (plVar7 == (int64_t *)0x0) {
LAB_00c7b418:
    plVar7 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar7 = param_2;
    if (cVar4 == '\0') goto LAB_00c7b418;
  }
  lVar1 = *plVar7;
  lVar3 = plVar7[1];
  if (((char)lVar3 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      plVar7 = (int64_t *)*param_2;
      if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      if (plVar7 == (int64_t *)0x0) {
LAB_00c7b4dd:
        param_2 = &g_02802688;
      }
      else {
        (**(code **)(*plVar7 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_00c7b4dd;
      }
      lVar1 = *param_2;
      cVar4 = (char)param_2[1];
      if ((cVar4 == '\0') || (lVar1 == 0)) {
        if (lVar1 == 0) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          return;
        }
      }
      else {
        FUN_00d50b00();
      }
      if ((*(int64_t *)(arg1 + 0x30) != 0) && (cVar5 = FUN_00d23d70(), cVar5 != '\0')) {
        *(void*)(this_ptr + 1) = 0;
        if (cVar4 == '\0') {
          FUN_00d50b00();
        }
        *this_ptr = lVar1;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
      iVar6 = FUN_00d8d560();
      lVar3 = *(int64_t *)(arg1 + 0x30);
      if (lVar3 != 0) {
        if (*(char *)(lVar3 + 0xc) == '\0') {
          if (0 < (int)*(uint *)(lVar3 + 8)) {
            uVar8 = 0;
            do {
              if (*(int *)(*(int64_t *)(lVar3 + 0x10) + uVar8 * 4) == iVar6) {
                iVar6 = (int)uVar8;
                if (iVar6 != -1) goto LAB_00c7b647;
                break;
              }
              uVar8 = uVar8 + 1;
            } while (*(uint *)(lVar3 + 8) != uVar8);
          }
        }
        else {
          iVar6 = iVar6 - **(int **)(lVar3 + 0x10);
          if ((-1 < iVar6) && (iVar6 < *(int *)(lVar3 + 8))) {
LAB_00c7b647:
            lVar3 = *(int64_t *)
                     (*(int64_t *)(*(int64_t *)(lVar3 + 0x28) + 0x10) + (int64_t)iVar6 * 8);
            *(void*)(this_ptr + 1) = 0;
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            *this_ptr = lVar3;
            *(void*)(this_ptr + 1) = 1;
            goto LAB_00c7b682;
          }
        }
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
LAB_00c7b682:
      if (cVar4 == '\0') {
        return;
      }
      if (lVar1 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  iVar6 = FUN_00d460c0();
  lVar2 = *(int64_t *)(arg1 + 0x30);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0xc) == '\0') {
      if (0 < (int)*(uint *)(lVar2 + 8)) {
        uVar8 = 0;
        do {
          if (*(int *)(*(int64_t *)(lVar2 + 0x10) + uVar8 * 4) == iVar6) {
            iVar6 = (int)uVar8;
            if (iVar6 != -1) goto LAB_00c7b5a3;
            break;
          }
          uVar8 = uVar8 + 1;
        } while (*(uint *)(lVar2 + 8) != uVar8);
      }
    }
    else {
      iVar6 = iVar6 - **(int **)(lVar2 + 0x10);
      if ((-1 < iVar6) && (iVar6 < *(int *)(lVar2 + 8))) {
LAB_00c7b5a3:
        lVar2 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(lVar2 + 0x28) + 0x10) + (int64_t)iVar6 * 8);
        *(void*)(this_ptr + 1) = 0;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        *this_ptr = lVar2;
        *(void*)(this_ptr + 1) = 1;
        goto joined_r0x00c7b5e6;
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
joined_r0x00c7b5e6:
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return;
}

