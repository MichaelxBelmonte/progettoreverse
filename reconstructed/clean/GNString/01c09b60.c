// Function: FUN_01c09b60
// Address: 01c09b60
// Size: 551 bytes
// Class: GNString
// String references:
//   "property"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01c09b60(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar4;
  uint32_t uVar5;
  void*puVar6;
  uint32_t uVar7;
  char *pcVar8;
  int64_t local_88;
  char local_80;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01c19570();
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    uVar5 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
        FUN_00d403d0();
        lVar3 = g_027e9130;
        if (g_027e9130 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\0';
        uVar7 = 2;
        pcVar8 = "property";
        puVar6 = &g_026669d0;
        local_60 = lVar2;
        if (arg1 != 0) {
          FUN_00d50b00();
        }
        FUN_0036bfe0();
        local_40 = local_50;
        local_38 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_38 = '\x01';
        FUN_00d40470(&local_40,&local_60,1,0,uVar5,puVar6,uVar7,pcVar8);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (arg1 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_01c2d490();
  }
  return;
}

