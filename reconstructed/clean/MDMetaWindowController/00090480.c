// Function: FUN_00090480
// Address: 00090480
// Size: 527 bytes
// Class: MDMetaWindowController

uint64_t FUN_00090480(uint64_t param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int64_t *plVar3;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar4 = this_ptr;
  do {
    (**(code **)(*plVar4 + 0x370))();
    if (local_48 == plVar4) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0'))
      goto LAB_00090527;
    }
    else {
      plVar4 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar2 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar2 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
LAB_00090527:
        local_38[0] = '\x01';
        pcVar2 = local_40;
      }
      *pcVar2 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar3 = &g_02802688;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar3 = (int64_t *)&stack0xffffffffffffffa8;
      if (cVar1 == '\0') {
        plVar3 = &g_02802688;
      }
    }
    if (*plVar3 != 0) {
      if ((local_38[0] == '\0') && (plVar4 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar4 != (int64_t *)0x0);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_0078e590();
  }
  FUN_0008b310();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_00090675;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) goto LAB_00090675;
  FUN_01aa3c40();
  FUN_003243b0();
  (**(code **)(*(int64_t *)this_ptr[0x10] + 0x930))();
  FUN_00aea630();
  FUN_00324900();
  FUN_00d50b20();
LAB_00090675:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}

