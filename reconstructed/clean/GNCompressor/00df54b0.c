// Function: FUN_00df54b0
// Address: 00df54b0
// Size: 1201 bytes
// Class: GNCompressor
// String references:
//   "Cannot open %@."
// === GNCompressor properties ===
//                   _userInfo
//                   _objectPointers
//                   _mutableObjects
//                   _immutableObjects
//                   _classDescriptions
//                   _state
//                   _rootObject
//                   _stream


void FUN_00df54b0(char *param_1,int param_2)

{
  int64_t lVar1;
  int iVar2;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (unaff_ESI == 1) {
    (**(code **)(*this_ptr + 0x3b0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00cde020();
    iVar2 = _open(param_1,0x1e4);
    *(int *)(this_ptr + 3) = iVar2;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02784870;
    if ((int)this_ptr[3] == -1) {
      if (g_02784870 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x3b0))();
      (**(code **)(*local_48 + 0x388))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (unaff_ESI == 6) {
    (**(code **)(*this_ptr + 0x3b0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00cde020();
    iVar2 = _open(param_1,param_2);
    *(int *)(this_ptr + 3) = iVar2;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02784870;
    if ((int)this_ptr[3] == -1) {
      if (g_02784870 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x3b0))();
      (**(code **)(*local_48 + 0x388))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (unaff_ESI == 2) {
    (**(code **)(*this_ptr + 0x3b0))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00cde020();
    iVar2 = _open(param_1,param_2);
    *(int *)(this_ptr + 3) = iVar2;
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02784870;
    if ((int)this_ptr[3] == -1) {
      if (g_02784870 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x3b0))();
      (**(code **)(*local_48 + 0x388))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

