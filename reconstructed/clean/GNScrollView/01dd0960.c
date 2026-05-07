// Function: FUN_01dd0960
// Address: 01dd0960
// Size: 894 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01dd0960(uint32_t param_1,uint32_t param_2,int param_3)

{
  int64_t *plVar1;
  int in_ECX;
  int64_t *in_RDX;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  if (((this_ptr[0x40] != 0) && ((int)this_ptr[0x41] == param_3)) &&
     (*(int *)((int64_t)this_ptr + 0x20c) == in_ECX)) {
    return;
  }
  if (((this_ptr[0x28] != 0) && ((int)this_ptr[0x27] == param_3)) &&
     (*(int *)((int64_t)this_ptr + 0x13c) == in_ECX)) {
    return;
  }
  (**(code **)(*this_ptr + 0x938))(in_ECX,param_3);
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01dd0aae;
    FUN_00d50b00();
  }
  else if (local_48 == 0) goto LAB_01dd0aae;
  (**(code **)(*this_ptr + 0x9a0))(param_1,param_2);
LAB_01dd0aae:
  (**(code **)(*(int64_t *)*in_RDX + 0x4d0))(param_1,param_2);
  FUN_01d48370();
  (**(code **)(*this_ptr + 0x940))(in_ECX,param_3);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_01d488d0();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x390))(param_1,param_2);
  plVar1 = (int64_t *)this_ptr[0x3e];
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_90 = *(int64_t *)(*(int64_t *)(this_ptr[0x2c] + 0x10) + (int64_t)in_ECX * 8);
    if (local_90 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_80 = *in_RDX;
    local_78 = '\0';
    (**(code **)(*plVar1 + 0x30))(&local_90,param_3,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_70 = *arg1;
  local_68 = '\0';
  (**(code **)(*(int64_t *)*in_RDX + 0x610))(0,param_2);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}

