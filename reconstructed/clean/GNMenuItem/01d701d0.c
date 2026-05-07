// Function: FUN_01d701d0
// Address: 01d701d0
// Size: 829 bytes
// Class: GNMenuItem
// === GNMenuItem properties ===
//                   _isKeyboardNavigationEnabled
//                   _lastModalResult
//                   _additionalResourceDirectories
//                   _preferencesDisplayGroup


int64_t * FUN_01d701d0(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int iVar5;
  int64_t arg1;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  int iVar8;
  int64_t local_58;
  char local_50;
  int local_44;
  int64_t local_40;
  
  if ((*(int64_t *)(arg1 + 0x220) == 0) || (param_2 < 0)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    bVar1 = false;
    lVar7 = 0;
    bVar2 = false;
    local_40 = 0;
    iVar8 = 0;
    local_44 = param_2;
    while ((iVar5 = FUN_01d5b230(), iVar8 < iVar5 && (-1 < local_44))) {
      FUN_01d5b240();
      if (local_58 == local_40) {
        if ((bVar1) || (local_58 == 0)) {
joined_r0x01d70310:
          lVar6 = local_40;
          bVar3 = bVar1;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = local_40;
          bVar3 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01d702f8;
          }
        }
      }
      else {
        lVar6 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar1) && (local_40 != 0)) {
            FUN_00d50b20();
            local_40 = local_58;
LAB_01d702f8:
            bVar1 = true;
            goto joined_r0x01d70310;
          }
        }
        else {
          bVar3 = true;
          if ((bVar1) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar1 = bVar3;
      FUN_01d64cb0();
      local_40 = lVar6;
      if (local_58 == lVar7) {
        if ((bVar2) || (local_58 == 0)) {
joined_r0x01d7041d:
          lVar4 = lVar7;
          bVar3 = bVar2;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          goto joined_r0x01d7044a;
        }
        if (local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_01d70430;
        }
        bVar2 = true;
        bVar3 = true;
        if (lVar7 == 0) goto LAB_01d70450;
LAB_01d70394:
        iVar5 = FUN_01d5b230();
        if (local_44 < iVar5) {
          FUN_01d5b240();
          if (!bVar2) goto LAB_01d704d9;
          goto LAB_01d704cc;
        }
        iVar5 = FUN_01d5b230();
        local_44 = local_44 - iVar5;
      }
      else {
        lVar4 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (lVar7 != 0)) {
            FUN_00d50b20();
            lVar7 = local_58;
LAB_01d70430:
            bVar2 = true;
            goto joined_r0x01d7041d;
          }
        }
        else {
          if ((bVar2) && (lVar7 != 0)) {
            FUN_00d50b20();
          }
          bVar3 = true;
        }
joined_r0x01d7044a:
        bVar2 = bVar3;
        lVar7 = lVar4;
        bVar3 = bVar2;
        if (lVar7 != 0) goto LAB_01d70394;
LAB_01d70450:
        bVar2 = bVar3;
        if (local_44 == 0) {
          *(void*)(this_ptr + 1) = 0;
          if (bVar1) {
            *this_ptr = lVar6;
            *(void*)(this_ptr + 1) = 1;
            return this_ptr;
          }
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          *this_ptr = lVar6;
          *(void*)(this_ptr + 1) = 1;
          return this_ptr;
        }
        local_44 = local_44 + -1;
        lVar7 = 0;
      }
      iVar8 = iVar8 + 1;
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    if (bVar2) {
LAB_01d704cc:
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
LAB_01d704d9:
    if ((bVar1) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

