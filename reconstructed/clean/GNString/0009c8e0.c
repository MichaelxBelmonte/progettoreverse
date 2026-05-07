// Function: FUN_0009c8e0
// Address: 0009c8e0
// Size: 528 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0009c8e0(void)

{
  int64_t lVar1;
  char unaff_SIL;
  int64_t this_ptr;
  int iVar2;
  bool bVar3;
  int64_t local_b8;
  char local_b0;
  int64_t local_78;
  char local_70;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x98);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar2 = 0;
      do {
        FUN_01efd6f0();
        FUN_00017670();
        if (local_40 == (int64_t *)0x0) {
          bVar3 = false;
        }
        else {
          FUN_00017670();
          FUN_01e40eb0();
          bVar3 = local_b8 != 0;
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar3) {
          FUN_00017670();
          (**(code **)(*local_40 + 0x478))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(lVar1 + 0xc));
    }
    FUN_000a9430();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  if (unaff_SIL != '\0') {
    lVar1 = *(int64_t *)(this_ptr + 0x88);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_006c5ee0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

