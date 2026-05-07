// Function: FUN_01ef7380
// Address: 01ef7380
// Size: 1001 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01ef7380(uint32_t param_1,uint32_t param_2,int64_t *param_3,uint32_t param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *in_RCX;
  int in_EDX;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar3;
  uint8_t local_res8;
  uint32_t local_res10;
  uint32_t local_108;
  uint32_t local_f8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int local_7c;
  int64_t local_78;
  char local_70;
  int64_t local_40;
  char local_38;
  
  local_108 = param_2;
  local_f8 = param_1;
  local_7c = in_EDX;
  if (in_EDX != 0x19) goto LAB_01ef7688;
  uVar3 = (**(code **)(*this_ptr + 0x548))();
  local_e0 = *param_3;
  if (local_e0 == 0) {
    (**(code **)(*this_ptr + 0x370))();
    lVar1 = *param_3;
    if (lVar1 == local_40) {
      if (((char)param_3[1] != '\0') || (local_40 == 0)) goto LAB_01ef74a2;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01ef749a;
      }
LAB_01ef7463:
      *(void*)(param_3 + 1) = 1;
    }
    else {
      lVar2 = param_3[1];
      if (local_38 != '\0') {
        *param_3 = local_40;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01ef7463;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *param_3 = local_40;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01ef749a:
      *(void*)(param_3 + 1) = 1;
LAB_01ef74a2:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    local_e0 = *param_3;
  }
  local_d8 = '\0';
  local_f8 = FUN_01cc2100(uVar3,&local_e0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  local_d0 = *param_3;
  local_c8 = '\0';
  FUN_01d48a10();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[4];
  if (lVar1 == 0) {
    (**(code **)(*this_ptr + 0x490))(local_res8,0x19,local_res10);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = 0;
    FUN_00d50b00();
    local_70 = '\x01';
    local_78 = lVar1;
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  local_c0 = *in_RCX;
  local_b8 = '\0';
  (**(code **)(*(int64_t *)*arg1 + 0x3f8))(local_f8,param_2);
  local_108 = param_2;
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
LAB_01ef7688:
  local_b0 = *arg1;
  local_a8 = '\0';
  local_a0 = *in_RCX;
  local_98 = '\0';
  local_90 = *param_3;
  local_88 = '\0';
  FUN_01cc1c20(local_f8,local_108,&local_90,param_4);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}

