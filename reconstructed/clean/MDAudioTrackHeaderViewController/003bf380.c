// Function: FUN_003bf380
// Address: 003bf380
// Size: 682 bytes
// Class: MDAudioTrackHeaderViewController

uint64_t FUN_003bf380(uint64_t param_1,char param_2)

{
  char cVar1;
  uint8_t uVar2;
  char *pcVar3;
  uint64_t unaff_RBX;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
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
  plVar4 = (int64_t *)CONCAT71((int7)((uint64_t)unaff_RBX >> 8),local_48 != (int64_t *)0x0);
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
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      plVar4 = local_48;
      if (local_48 != (int64_t *)0x0) {
        FUN_002e9590();
        if (local_48 != (int64_t *)0x0) {
          if (local_40[0] == '\0') {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((int64_t *)this_ptr[0x11] != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)this_ptr[0x11] + 0x918))();
          }
          (**(code **)(*local_48 + 0x5d8))();
          FUN_006525e0();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0x5c0))();
          FUN_003bc830();
          (**(code **)(*this_ptr + 0x5d8))();
          FUN_00d50b20();
          FUN_00d50b20();
          plVar4 = (int64_t *)CONCAT71((int7)((uint64_t)local_48 >> 8),1);
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_003bf606;
        }
        FUN_00d50b20();
      }
    }
    cVar1 = FUN_0071fab0();
    if (cVar1 == '\0') {
      uVar2 = FUN_0071fb80();
      FUN_003bf7a0(0,uVar2,0);
    }
    else {
      uVar2 = FUN_0071fb80();
      FUN_003bf7a0(1,uVar2,0);
      FUN_003ba640();
    }
    FUN_003bc830();
    (**(code **)(*this_ptr + 0x5d8))();
    plVar4 = (int64_t *)CONCAT71((int7)((uint64_t)plVar4 >> 8),1);
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_003bf606:
  if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return (uint64_t)plVar4 & 0xffffffff;
}

