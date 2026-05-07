// Function: FUN_00c880c0
// Address: 00c880c0
// Size: 598 bytes
// Class: Unknown

int64_t * FUN_00c880c0(void)

{
  int64_t lVar1;
  char *pcVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if ((*arg1 == 0) || (*(int *)(*arg1 + 0xc) == 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00d23310();
    local_40[0] = local_58[0];
    pcVar2 = local_40;
    if (local_58[0] != '\0') {
      pcVar2 = local_58;
    }
    *pcVar2 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d4efa0();
    lVar3 = local_50;
    local_38[0] = local_48[0];
    pcVar2 = local_48;
    if (local_48[0] == '\0') {
      pcVar2 = local_38;
    }
    *pcVar2 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (1 < *(int *)(*arg1 + 0xc)) {
      lVar4 = 1;
      do {
        FUN_00d4efa0();
        lVar1 = local_50;
        if (local_48[0] == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = '\0';
        }
        FUN_00c87ef0();
        if (lVar3 == local_60) {
          if (((local_38[0] == '\0') && (lVar3 != 0)) && (local_58[0] != '\0')) goto LAB_00c8825a;
        }
        else {
          bVar5 = lVar3 != 0;
          lVar3 = local_60;
          if (local_58[0] == '\0') {
            pcVar2 = local_38;
            if (bVar5 && local_38[0] != '\0') {
              FUN_00d50b20();
              pcVar2 = local_38;
            }
          }
          else {
            if (bVar5 && local_38[0] != '\0') {
              FUN_00d50b20();
            }
LAB_00c8825a:
            local_38[0] = '\x01';
            pcVar2 = local_58;
          }
          *pcVar2 = '\0';
        }
        if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(*arg1 + 0xc));
    }
    *(void*)(this_ptr + 1) = 0;
    if (local_38[0] == '\0') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    *this_ptr = lVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

