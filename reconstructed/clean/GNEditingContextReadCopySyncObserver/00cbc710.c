// Function: FUN_00cbc710
// Address: 00cbc710
// Size: 1247 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cbc710(uint64_t param_1,void*param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  char *pcVar6;
  int64_t lVar7;
  int iVar8;
  void*arg1;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_88;
  char local_80 [8];
  int64_t local_78;
  uint64_t local_70;
  int local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  lVar4 = local_88;
  FUN_00d4efa0();
  local_48[0] = local_80[0];
  pcVar6 = local_48;
  if (local_80[0] != '\0') {
    pcVar6 = local_80;
  }
  *pcVar6 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c81c40();
  local_40[0] = local_80[0];
  pcVar6 = local_40;
  if (local_80[0] != '\0') {
    pcVar6 = local_80;
  }
  *pcVar6 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    local_80[0] = '\0';
    local_88 = 0;
    local_78 = lVar4;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar8 = -local_70._4_4_;
        }
        else {
          iVar8 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar8);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar8 = 0;
        }
        local_70 = CONCAT44(iVar8,(int)local_70);
      }
      lVar7 = (int64_t)(int)local_70;
      iVar8 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar8);
      if (*(int *)(local_78 + 0xc) <= iVar8) break;
      local_88 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + 8 + lVar7 * 8);
      lVar7 = *(int64_t *)(local_88 + 0x60);
      if (((lVar7 == 0) || ((*(byte *)(lVar7 + 0x18) & 0x10) == 0)) &&
         (*(char *)(lVar7 + 0x19) != '\0')) {
        if (*(char *)(lVar7 + 0x19) == '@') {
          plVar1 = (int64_t *)*arg1;
          (**(code **)(*(int64_t *)*param_2 + 0x210))();
          lVar7 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          (**(code **)(*plVar1 + 0x200))(0,local_88,1);
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar1 = (int64_t *)*arg1;
          (**(code **)(*(int64_t *)*param_2 + 0x218))();
          (**(code **)(*plVar1 + 0x208))(1,local_88);
        }
      }
    }
    FUN_00cc1480();
  }
  FUN_00c820a0();
  pcVar6 = local_80;
  if (local_80[0] == '\0') {
    pcVar6 = local_38;
  }
  local_38[0] = local_80[0];
  *pcVar6 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = lVar4;
  if (local_88 != 0) {
    local_60 = lVar4;
    local_80[0] = '\0';
    local_78 = local_88;
    local_68 = 0;
    local_70 = 0;
    if (0 < *(int *)(local_88 + 0xc)) {
      lVar7 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + lVar7 * 8);
        lVar3 = *(int64_t *)(lVar2 + 0x70);
        if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x18) & 0x10) == 0)) {
          cVar5 = FUN_00d77de0();
          if (cVar5 == '\0') {
            plVar1 = (int64_t *)*arg1;
            (**(code **)(*(int64_t *)*param_2 + 0x210))();
            lVar3 = local_58;
            if (local_50 == '\0') {
              if (local_58 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            (**(code **)(*plVar1 + 0x200))(0,lVar2,1);
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            (**(code **)(*(int64_t *)*arg1 + 0x210))();
            (**(code **)(*(int64_t *)*param_2 + 0x210))();
            if (local_c8 == '\0') {
              if (local_d0 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c8 = '\0';
            }
            local_58 = local_d0;
            local_50 = '\0';
            FUN_00d243f0();
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (local_d0 != 0) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar7 = lVar7 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(local_88 + 0xc));
    }
    FUN_00559a70();
    lVar7 = local_60;
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_40[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}

