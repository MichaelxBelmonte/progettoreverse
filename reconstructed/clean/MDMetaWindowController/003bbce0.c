// Function: FUN_003bbce0
// Address: 003bbce0
// Size: 1045 bytes
// Class: MDMetaWindowController

uint64_t FUN_003bbce0(uint64_t param_1,char param_2)

{
  char cVar1;
  uint8_t uVar2;
  char *pcVar3;
  uint64_t unaff_RBX;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  undefined7 uVar5;
  
  FUN_003ba530();
  pcVar3 = local_38;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar5 = (undefined7)((uint64_t)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,local_48 != (int64_t *)0x0);
  if ((local_48 != (int64_t *)0x0) && (param_2 != '\0')) {
    FUN_01caea20();
    FUN_003bc3e0();
    if ((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    cVar1 = FUN_0071f9e0();
    if (cVar1 != '\0') {
      FUN_01c00e50();
      FUN_01bbfb40();
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        FUN_002e9590();
        if (local_48 != (int64_t *)0x0) {
          if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((int64_t *)this_ptr[0x10] != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)this_ptr[0x10] + 0x918))();
          }
          FUN_01c00e50();
          FUN_01bbfb40();
          FUN_01c00e50();
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          FUN_003bc740();
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          (**(code **)(*local_48 + 0x9d0))();
          if (local_a8 != 0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (local_98 != 0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_48 + 0x5d8))();
          FUN_00652320();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0x5c0))();
          FUN_003bc830();
          (**(code **)(*this_ptr + 0x5d8))();
          FUN_00d50b20();
          FUN_00d50b20();
          uVar4 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_003bbf4a;
        }
        FUN_00d50b20();
      }
    }
    cVar1 = FUN_0071fab0();
    if (cVar1 == '\0') {
      uVar2 = FUN_0071fb80();
      FUN_003bcea0(0,uVar2,0);
    }
    else {
      uVar2 = FUN_0071fb80();
      FUN_003bcea0(1,uVar2,0);
      FUN_003ba640();
    }
    FUN_003bc830();
    (**(code **)(*this_ptr + 0x5d8))();
    uVar4 = CONCAT71(uVar5,1);
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_003bbf4a:
  if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar4 & 0xffffffff;
}

