// Function: FUN_00703c00
// Address: 00703c00
// Size: 620 bytes
// Class: MDAudioTrackItem
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


uint64_t FUN_00703c00(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint64_t unaff_RBX;
  int64_t *this_ptr;
  bool bVar5;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40;
  
  (**(code **)(*this_ptr + 0x5d8))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_00703c71;
    }
LAB_00703cd9:
    bVar2 = true;
LAB_00703cde:
    lVar1 = this_ptr[2];
  }
  else {
    if (local_48 == 0) goto LAB_00703cd9;
LAB_00703c71:
    FUN_0063f230();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_0063f230();
      cVar3 = FUN_00212c70();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = false;
      unaff_RBX = 0;
      if (cVar3 != '\0') goto LAB_00703e4c;
      goto LAB_00703cde;
    }
    bVar2 = false;
    lVar1 = this_ptr[2];
    unaff_RBX = 0;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01beead0();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_007035b0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    unaff_RBX = 0;
  }
  else {
    bVar5 = *(int *)(local_48 + 0xc) != 0;
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar5);
    if ((bVar5) && (param_2 != '\0')) {
      cVar3 = (**(code **)(*this_ptr + 0x650))(param_1,1);
      if (cVar3 == '\0') {
        unaff_RBX = 0;
      }
      else {
        uVar4 = (**(code **)(*this_ptr + 0x668))(param_1,1);
        unaff_RBX = (uint64_t)uVar4;
      }
    }
    FUN_00d50b20();
  }
LAB_00703e4c:
  if (!bVar2) {
    FUN_00d50b20();
  }
  return unaff_RBX & 0xffffffff;
}

