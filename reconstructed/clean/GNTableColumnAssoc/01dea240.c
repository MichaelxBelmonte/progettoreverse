// Function: FUN_01dea240
// Address: 01dea240
// Size: 950 bytes
// Class: GNTableColumnAssoc

void FUN_01dea240(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int local_44;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x548))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  lVar4 = g_02800140;
  if (g_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_40 == 0) goto LAB_01dea5dd;
  if (*param_2 == 0) {
LAB_01dea592:
    iVar3 = FUN_01dcc980();
    if (iVar3 != -1) {
      FUN_01dd0010();
    }
  }
  else {
    if (*param_1 == 0) {
      FUN_01d25cb0();
      local_44 = FUN_00d23d20();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d25cb0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if (*(int *)(local_40 + 0xc) < 1) {
        local_44 = -1;
      }
      else {
        local_44 = -1;
        lVar4 = 0;
        do {
          plVar1 = *(int64_t **)(*(int64_t *)(local_40 + 0x10) + lVar4 * 8);
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar1 + 0x98))();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          bVar2 = true;
          if (local_40 == *param_2) {
            if (local_44 == -1) {
              local_44 = (int)lVar4;
            }
            else {
              local_44 = -1;
              bVar2 = false;
            }
          }
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (!bVar2) {
            if (local_40 == 0) goto LAB_01dea540;
            break;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(local_40 + 0xc));
      }
      FUN_00d50b20();
    }
LAB_01dea540:
    if (local_44 == -1) goto LAB_01dea592;
    iVar3 = FUN_01dcc980();
    if (iVar3 != -1) {
      FUN_01dd0280();
    }
  }
  FUN_00d50b20();
LAB_01dea5dd:
  FUN_00d50b20();
  return;
}

