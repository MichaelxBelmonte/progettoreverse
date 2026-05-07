// Function: FUN_0027db70
// Address: 0027db70
// Size: 751 bytes
// Class: MDURLOpenedController

void FUN_0027db70(void)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar1 = local_68;
  (**(code **)(*this_ptr + 0x728))();
  FUN_01da4890();
  FUN_01da6400();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01da4890();
  FUN_01caf660();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01da4e80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_01caf660();
  FUN_01cafe30();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    local_60 = '\0';
    local_68 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar3 = 0;
      do {
        local_68 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar3 * 8);
        do {
          FUN_01caf470();
          if (local_80 == '\0') {
            if (local_88 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          cVar2 = FUN_00d23f50();
          if (local_88 != 0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        } while (cVar2 != '\0');
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_002a0990();
    FUN_00d50b20();
  }
  FUN_01da4890();
  FUN_01da64d0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

