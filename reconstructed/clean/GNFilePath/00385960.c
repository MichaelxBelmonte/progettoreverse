// Function: FUN_00385960
// Address: 00385960
// Size: 555 bytes
// Class: GNFilePath

uint64_t FUN_00385960(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  int64_t *this_ptr;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_38;
  char local_30 [8];
  char local_28 [8];
  
  cVar3 = (**(code **)(*(int64_t *)this_ptr[0x1b] + 0x5e8))();
  if (cVar3 == '\0') {
    (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x3f8))();
    if ((local_30[0] != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x3f8))();
      FUN_00d23310();
      pcVar4 = local_28;
      if (local_30[0] != '\0') {
        pcVar4 = local_30;
      }
      local_28[0] = local_30[0];
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_28[0] == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28[0] = '\0';
      }
      (**(code **)(*this_ptr + 0x6a0))();
      if (local_68 == (int64_t *)0x0) {
        bVar2 = true;
        local_68 = (int64_t *)0x0;
      }
      else if (local_60 == '\0') {
        (**(code **)(*local_68 + 0x10))();
        FUN_00d50b00();
        bVar2 = false;
      }
      else {
        bVar2 = false;
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != (int64_t *)0x0) {
        cVar3 = (**(code **)(*local_68 + 0x18))();
        if (cVar3 != '\0') {
          (**(code **)(*local_68 + 0x20))();
        }
        if (!bVar2) {
          (**(code **)(*local_68 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    plVar1 = (int64_t *)this_ptr[0x1b];
    FUN_0141cb10();
    if (local_30[0] == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30[0] = '\0';
    }
    (**(code **)(*plVar1 + 0x690))();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30[0] != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}

