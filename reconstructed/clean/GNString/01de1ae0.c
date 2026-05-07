// Function: FUN_01de1ae0
// Address: 01de1ae0
// Size: 1083 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01de1ae0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int *arg1;
  int64_t this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_78;
  char local_70;
  int64_t *local_50;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = *param_2;
  local_40[0] = '\0';
  iVar6 = FUN_00d23d20();
  if ((local_40[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (iVar6 == -1) {
    FUN_00d23310();
    pcVar8 = local_38;
    if (local_40[0] != '\0') {
      pcVar8 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar8 = '\0';
    if ((local_40[0] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = *param_2;
    if (lVar2 == lVar1) {
      if (((char)param_2[1] == '\0') && (lVar1 != 0)) {
        if (local_38[0] == '\0') {
          FUN_00d50b00();
        }
        goto LAB_01de1d48;
      }
      if ((local_38[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar4 = param_2[1];
      if (local_38[0] == '\0') {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        *param_2 = lVar1;
        if (((char)lVar4 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = lVar1;
        if (((char)lVar4 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_01de1d48:
      local_50 = param_2 + 1;
      *(void*)local_50 = 1;
    }
    *arg1 = 0;
  }
  else {
    if (iVar6 == *(int *)(*(int64_t *)(this_ptr + 0x160) + 0xc) + -1) {
      FUN_00d23310();
      pcVar8 = local_38;
      if (local_40[0] != '\0') {
        pcVar8 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar8 = '\0';
      if ((local_40[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = *param_2;
      if (lVar2 == lVar1) {
        if (((char)param_2[1] == '\0') && (lVar1 != 0)) {
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
          goto LAB_01de1d8e;
        }
        if ((local_38[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar4 = param_2[1];
        if (local_38[0] == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          *param_2 = lVar1;
          if (((char)lVar4 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          *param_2 = lVar1;
          if (((char)lVar4 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_01de1d8e:
        local_50 = param_2 + 1;
        *(void*)local_50 = 1;
      }
      iVar7 = *arg1 + 1;
      *arg1 = iVar7;
      iVar6 = 0;
      if (iVar7 < *(int *)(this_ptr + 0x180)) {
        iVar6 = iVar7;
      }
      *arg1 = iVar6;
      cVar5 = FUN_01db9af0();
      goto joined_r0x01de1d64;
    }
    lVar1 = *(int64_t *)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x160) + 0x10) + 8 + (int64_t)iVar6 * 8);
    lVar2 = *param_2;
    lVar4 = param_2[1];
    if (lVar2 != lVar1) {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *param_2 = lVar1;
      if (((char)lVar4 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_01de1cda:
      *(void*)(param_2 + 1) = 1;
      cVar5 = FUN_01db9af0();
      goto joined_r0x01de1d64;
    }
    if (((char)lVar4 == '\0') && (lVar1 != 0)) {
      FUN_00d50b00();
      goto LAB_01de1cda;
    }
  }
  cVar5 = FUN_01db9af0();
joined_r0x01de1d64:
  if (cVar5 != '\0') {
    plVar3 = *(int64_t **)(this_ptr + 0x1f0);
    if (plVar3 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    local_98 = *param_2;
    local_90 = '\0';
    cVar5 = (**(code **)(*plVar3 + 0x38))(&local_98,*arg1);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      return;
    }
  }
  cVar5 = FUN_01db9ae0();
  if (cVar5 != '\0') {
    plVar3 = *(int64_t **)(this_ptr + 0x1f0);
    if (plVar3 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    local_78 = *param_2;
    local_70 = '\0';
    cVar5 = (**(code **)(*plVar3 + 0x40))(&local_78,*arg1);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      return;
    }
  }
  FUN_01de1ae0();
  return;
}

