// Function: FUN_01d741d0
// Address: 01d741d0
// Size: 603 bytes
// Class: GNMultipleValue

void FUN_01d741d0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_027f0ae8;
  local_60 = 0;
  if (*param_2 != 0) {
    if (g_027f0ae8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90870();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027f0ae8;
    if (cVar3 != '\0') {
      if (g_027f0ae8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8c7a0();
      FUN_00d8f140();
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) {
        return;
      }
      iVar4 = FUN_00d8d560();
      if ((0 < iVar4) && (iVar5 = FUN_01d6fde0(), iVar4 <= iVar5)) {
        FUN_01d701d0();
        FUN_01d64eb0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (iVar4 + -1 == (int)this_ptr[0x45]) {
          (**(code **)(*this_ptr + 0x958))();
        }
      }
      FUN_00d50b20();
      return;
    }
    local_60 = *param_2;
  }
  local_58 = '\0';
  local_50 = *param_1;
  local_48 = '\0';
  FUN_01d12540(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}

