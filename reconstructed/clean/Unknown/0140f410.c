// Function: FUN_0140f410
// Address: 0140f410
// Size: 1128 bytes
// Class: Unknown

void FUN_0140f410(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t arg1;
  void*this_ptr;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x18) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    FUN_0177f010();
    lVar4 = *param_1;
    if (lVar4 == local_40) {
      if (((char)param_1[1] == '\0') && (local_40 != 0)) {
        if (local_38 != '\0') goto LAB_0140f4b2;
        FUN_00d50b00();
        goto LAB_0140f4e7;
      }
LAB_0140f4ee:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = param_1[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_40;
        if (((char)lVar3 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
LAB_0140f4e7:
        local_48 = param_1 + 1;
        *(void*)local_48 = 1;
        goto LAB_0140f4ee;
      }
      *param_1 = local_40;
      if (((char)lVar3 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
LAB_0140f4b2:
      local_48 = param_1 + 1;
      *(void*)local_48 = 1;
    }
    lVar4 = *param_1;
  }
  lVar3 = *(int64_t *)(arg1 + 0x10);
  if (lVar3 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(arg1 + 0x10) = lVar4;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_017162e0();
  lVar4 = *(int64_t *)(arg1 + 0x30);
  lVar3 = lVar4;
  if (lVar4 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_0140f54d;
      }
      FUN_00d50b00();
      lVar4 = *(int64_t *)(arg1 + 0x30);
      *(int64_t *)(arg1 + 0x30) = local_40;
    }
    else {
      local_38 = '\0';
LAB_0140f54d:
      *(int64_t *)(arg1 + 0x30) = lVar3;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar4 = *(int64_t *)(arg1 + 0x38);
  lVar3 = lVar4;
  if (lVar4 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_0140f5bf;
      }
      FUN_00d50b00();
      lVar4 = *(int64_t *)(arg1 + 0x38);
      *(int64_t *)(arg1 + 0x38) = local_40;
    }
    else {
      local_38 = '\0';
LAB_0140f5bf:
      *(int64_t *)(arg1 + 0x38) = lVar3;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar4 = *(int64_t *)(arg1 + 0x40);
  lVar3 = lVar4;
  if (lVar4 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_0140f631;
      }
      FUN_00d50b00();
      lVar4 = *(int64_t *)(arg1 + 0x40);
      *(int64_t *)(arg1 + 0x40) = local_40;
    }
    else {
      local_38 = '\0';
LAB_0140f631:
      *(int64_t *)(arg1 + 0x40) = lVar3;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar4 = *(int64_t *)(arg1 + 0x48);
  lVar3 = lVar4;
  if (lVar4 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_0140f6a3;
      }
      FUN_00d50b00();
      lVar4 = *(int64_t *)(arg1 + 0x48);
      *(int64_t *)(arg1 + 0x48) = local_40;
    }
    else {
      local_38 = '\0';
LAB_0140f6a3:
      *(int64_t *)(arg1 + 0x48) = lVar3;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(arg1 + 0x50) != 0) {
    *(void*)(arg1 + 0x50) = 0;
    FUN_00d50b20();
  }
  FUN_017162e0();
  lVar4 = *(int64_t *)(arg1 + 0x58);
  lVar3 = lVar4;
  if (lVar4 != local_40) {
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar3 = 0;
        goto LAB_0140f72b;
      }
      FUN_00d50b00();
      lVar4 = *(int64_t *)(arg1 + 0x58);
      *(int64_t *)(arg1 + 0x58) = local_40;
    }
    else {
      local_38 = '\0';
LAB_0140f72b:
      *(int64_t *)(arg1 + 0x58) = lVar3;
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar3 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  lVar4 = *(int64_t *)(arg1 + 0x18);
  lVar3 = *(int64_t *)(arg1 + 0x20);
  if (lVar3 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(arg1 + 0x20) = lVar4;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_0140f990();
  cVar2 = FUN_0140c2c0();
  if (cVar2 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if (param_2 != (int64_t *)0x0) {
    lVar4 = *(int64_t *)(arg1 + 0x20);
    lVar3 = *param_2;
    lVar1 = param_2[1];
    if (lVar3 == lVar4) {
      if (((char)lVar1 != '\0') || (lVar4 == 0)) goto LAB_0140f82c;
      FUN_00d50b00();
    }
    else {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      *param_2 = lVar4;
      if (((char)lVar1 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(param_2 + 1) = 1;
  }
LAB_0140f82c:
  FUN_01715620();
  FUN_00d46530();
  return;
}

