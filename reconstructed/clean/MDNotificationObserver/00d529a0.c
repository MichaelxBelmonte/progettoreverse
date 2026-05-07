// Function: FUN_00d529a0
// Address: 00d529a0
// Size: 1099 bytes
// Class: MDNotificationObserver
// === MDNotificationObserver properties ===
//   bool            _didChooseQuantization
//   bool            _customValue
//   bool            _showsReplaceRanges
//   bool            _isEditingDetection
//   float           _trackHeaderWidth
//   GNDoubleRange   _startTimeRange
//   GNDoubleRange   _destTimeRange
//   float           _animateZoomToTimeProgress
//   bool            _updateViewPositionDisabled
//   GNInt           _selectedIndex
//   GNInt           _fixedCount
//   bool            _showsEditorBar
//   double          _stopTime
//   double          _startTime


void FUN_00d529a0(void)

{
  int64_t lVar1;
  char cVar2;
  int extraout_var;
  int64_t lVar3;
  char *pcVar4;
  code *arg1;
  int64_t *this_ptr;
  uint uVar5;
  int64_t local_f8;
  char local_f0 [16];
  uint64_t local_e0;
  uint32_t local_d8;
  int64_t local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0x360))();
  FUN_00e86210();
  FUN_00c820a0();
  pcVar4 = local_38;
  if (local_f0[0] != '\0') {
    pcVar4 = local_f0;
  }
  local_38[0] = local_f0[0];
  *pcVar4 = '\0';
  if ((local_f0[0] != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (local_f8 != 0) {
    local_f0[0] = '\0';
    local_d8 = 0;
    local_e0 = 0;
    if (0 < *(int *)(local_f8 + 0xc)) {
      uVar5 = 0;
      local_d0 = local_f8;
      do {
        lVar1 = local_70;
        local_c8 = *(int64_t *)(*(int64_t *)(local_d0 + 0x10) + (uint64_t)uVar5 * 8);
        local_c0 = '\0';
        cVar2 = (**(code **)(*this_ptr + 0x2b8))();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          FUN_00d77bd0();
          if (extraout_var < 2) {
            FUN_00d74120();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            (**(code **)(*this_ptr + 0x88))();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_68 = '\0';
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 != 0) {
              local_a8 = local_70;
              local_a0 = '\0';
              (*arg1)();
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          else {
            FUN_00d74120();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_40 = '\0';
            }
            (**(code **)(*this_ptr + 0x88))();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00e31530();
              }
            }
            else {
              local_68 = '\0';
            }
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_70 != 0) {
              local_68 = '\0';
              local_70 = 0;
              local_58 = -1;
              while( true ) {
                lVar3 = (int64_t)local_58;
                local_58 = local_58 + 1;
                if (*(int *)(lVar1 + 0xc) <= local_58) break;
                local_70 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar3 * 8);
                local_b0 = '\0';
                local_b8 = local_70;
                (*arg1)();
                if ((local_b0 != '\0') && (local_b8 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00083b20();
              FUN_00d50b20();
            }
          }
        }
        uVar5 = uVar5 + 1;
        local_e0 = CONCAT44(local_e0._4_4_,uVar5);
      } while ((int)uVar5 < *(int *)(local_d0 + 0xc));
    }
    FUN_00559a70();
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}

