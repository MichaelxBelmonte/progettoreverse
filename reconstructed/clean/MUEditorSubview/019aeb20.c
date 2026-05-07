// Function: FUN_019aeb20
// Address: 019aeb20
// Size: 592 bytes
// Class: MUEditorSubview

void FUN_019aeb20(uint64_t param_1,int64_t param_2)

{
  char cVar1;
  uint64_t uVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  uint64_t unaff_R14;
  undefined7 uVar5;
  uint64_t uVar4;
  int64_t lVar6;
  uint8_t local_90 [16];
  uint8_t local_80 [8];
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40;
  uint64_t local_38;
  
  if (*arg1 == 0) {
    if (*(char *)((int64_t)this_ptr + 0x35c) == '\0') {
      return;
    }
    (**(code **)(*this_ptr + 0xce0))(g_023b3490,this_ptr + 0x6e);
    *(void*)((int64_t)this_ptr + 0x35c) = 0;
    return;
  }
  uVar2 = (**(code **)(*this_ptr + 0xe20))();
  lVar3 = local_48;
  local_58 = local_48;
  uVar5 = (undefined7)((uint64_t)unaff_R14 >> 8);
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019aebc5;
    }
LAB_019aec25:
    local_38 = CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
  }
  else {
    if (local_48 == 0) goto LAB_019aec25;
LAB_019aebc5:
    if (*(int *)(lVar3 + 0xc) != 0) {
      if (*arg1 != 0) {
        local_40 = '\0';
        local_48 = *arg1;
        cVar1 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = local_58;
        if (cVar1 == '\0') goto LAB_019aec29;
      }
      uVar4 = CONCAT71(uVar5,1);
      local_38 = 0;
      local_50 = 0;
      FUN_00d50b00();
      goto LAB_019aec97;
    }
LAB_019aec29:
    local_38 = 0;
  }
  local_78 = *arg1;
  local_70 = '\0';
  FUN_0039e8b0();
  lVar3 = local_48;
  if (local_48 == 0) {
    uVar4 = 0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    uVar4 = CONCAT71(uVar5,1);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
    uVar4 = CONCAT71(uVar5,1);
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_019aec97:
  local_50 = uVar4 & 0xffffffff;
  if (*(char *)((int64_t)this_ptr + 0x35c) == '\0') {
    *(void*)((int64_t)this_ptr + 0x35c) = 1;
    lVar6 = (**(code **)(*this_ptr + 0xa50))();
    this_ptr[0x6c] = lVar6;
    this_ptr[0x6d] = param_2;
    lVar6 = (**(code **)(*this_ptr + 0xa98))();
    this_ptr[0x6e] = lVar6;
  }
  local_60 = '\0';
  local_68 = lVar3;
  (**(code **)(*this_ptr + 0xca8))(local_80,local_90);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xce0))(g_023b3490,local_80);
  if ((char)local_38 == '\0') {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return;
}

