// Function: FUN_01ceed10
// Address: 01ceed10
// Size: 1015 bytes
// Class: GNMultipleValue

void FUN_01ceed10(void)

{
  int64_t lVar1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if ((int64_t *)this_ptr[0x3a] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x3a] + 0x148))();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*(int64_t *)this_ptr[0x3a] + 0x148))();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
          goto LAB_01ceedce;
        }
        if (this_ptr[0x3a] != 0) {
          this_ptr[0x3a] = 0;
          goto LAB_01ceee0f;
        }
      }
      else {
        local_30 = '\0';
LAB_01ceedce:
        lVar1 = this_ptr[0x3a];
        if (local_38 != lVar1) {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
          this_ptr[0x3a] = local_38;
          if (lVar1 != 0) {
LAB_01ceee0f:
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0x620))();
        }
        if (local_38 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((int64_t *)this_ptr[0x3b] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x3b] + 0x148))();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*(int64_t *)this_ptr[0x3b] + 0x148))();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
          goto LAB_01ceef18;
        }
        if (this_ptr[0x3b] != 0) {
          this_ptr[0x3b] = 0;
          goto LAB_01ceef52;
        }
      }
      else {
        local_30 = '\0';
LAB_01ceef18:
        lVar1 = this_ptr[0x3b];
        if (lVar1 != local_38) {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
          this_ptr[0x3b] = local_38;
          if (lVar1 != 0) {
LAB_01ceef52:
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*this_ptr + 0x620))();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((int64_t *)this_ptr[0x3c] == (int64_t *)0x0) goto LAB_01cef0f2;
  (**(code **)(*(int64_t *)this_ptr[0x3c] + 0x148))();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) goto LAB_01cef0f2;
  (**(code **)(*(int64_t *)this_ptr[0x3c] + 0x148))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01d51a40();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      goto LAB_01cef05b;
    }
    if (this_ptr[0x3c] != 0) {
      this_ptr[0x3c] = 0;
      goto LAB_01cef095;
    }
  }
  else {
    local_30 = '\0';
LAB_01cef05b:
    lVar1 = this_ptr[0x3c];
    if (lVar1 != local_38) {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
      this_ptr[0x3c] = local_38;
      if (lVar1 != 0) {
LAB_01cef095:
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*this_ptr + 0x620))();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01cef0f2:
  FUN_01e47520();
  return;
}

